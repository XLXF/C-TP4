/*************************************************************************
                           Main  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation du module <Main> (fichier Main.cpp) ---------------

/////////////////////////////////////////////////////////////////  INCLUDE
//-------------------------------------------------------- Include système
#include <string>
#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
//------------------------------------------------------ Include personnel
#include "Main.h"

///////////////////////////////////////////////////////////////////  PRIVE
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//---------------------------------------------------- Variables statiques

//------------------------------------------------------ Fonctions privées
//static type nom ( liste de paramètres )
// Mode d'emploi :
//
// Contrat :
//
// Algorithme :
//
//{
//} //----- fin de nom

//////////////////////////////////////////////////////////////////  PUBLIC
//---------------------------------------------------- Fonctions publiques
//type Nom ( liste de paramètres )
// Algorithme :
//
//{
//} //----- fin de Nom

map<string,Noeud> createMap(vector<vector<string>> logDoc, int e, int g, vector<string> extensions, vector<int> heures, int time );
void afficherLogDoc ( vector<vector<string>> logDoc);
void afficherMap ( map<string,int> cibles);
vector<string> getExtensionsFichier ( vector<vector<string>> logDoc );
vector<int> getHeures ( vector<vector<string>> logDoc );

int main(int argc, char** args)
{
    vector<string> listeCibles; // permet d'identifier les cibles différentes
    vector<int> heures; // permet de vérifier si les heure correspondent a celle passée en paramètre
    vector<string> extensions; // permet de tester les extensions pour la commande -e
    vector<vector<string>> logDoc; // Matrice des différents éléments du ichier .log
    int j;
    int e = 0;
    int g = 0;
    int t = 0;
    string aLire = "";
    string aEcrire = "";
    int time = 0;
    
    // On utilise le set arguments pour stocker les différents
    // arguments passés en parametres dans le programme pour 
    // pouvoir les retrouver facilement.
    for(j=0; j<argc; j++)
    {
	string str(args[j]);
        if(str == "-e")
        {
	    e = 1;
        }
	else 
	{
		if(str == "-g")
        	{
			aEcrire = "check";
	    		g = 1;
        	}
		else
		{
        		if(str == "-t")
        		{
				time = -30;	
	    			t = 1;
        		}
			else
			{
				if(aEcrire == "check")
				{
					aEcrire = str;
				}
				else
				{
					if(time == -30)
					{
						time = stoi(str,nullptr,10);
					}
					else
					{
						aLire = str;
					}
				}
			}
		}
	}
    }

    cout << endl;
    cout << endl;
    cout << endl;

	
    //On récupère l'ensemble du fichier .log dans une matrice de string
    //Cela nous permettra d'avoir accès aux éléments du fichier qui nous
    //interessent
    
    logDoc = LectureLog(aLire);
    
    extensions = getExtensionsFichier(logDoc);
    heures = getHeures(logDoc);


    // On créer la map qui nous permettra de faire les opérations
    // pour avoir le top10 et le graphViz
    // permet de chercher un document cible
    map<string,Noeud> cibles(createMap(logDoc,e,t,extensions,heures,time));
    
    
    // Fonction qui affiche le top10 sur la sortie standard
    TopDix(cibles);




    return 0;
}



// A modifier pour créer la map en fonction des options passée en paramètre
// pour l'heure et l'extension de document.

map<string,Noeud> createMap(vector<vector<string>> logDoc, int e, int t, vector<string> extensions, vector<int> heures, int time)
{

    map<string,Noeud> cibles;
    string temp;
    unsigned int i;
    string temp2;

    for(i=0; i<logDoc.size()-1; i++)
    {
	temp = logDoc[i][5];
	temp2 = logDoc[i][9];
	Noeud aInserer(temp2);
	if (logDoc[i][7] == "200")
	{
	    if ( !e || ( e && (extensions[i] != ".ico" && extensions[i] != ".jpg" && extensions[i] != ".gif" && extensions[i] != ".css" && extensions[i] != ".png" && extensions[i] != ".js")))
	    {
		    if(!t)
		    {

		   	if (cibles.count(temp) == 0 )
	 	   	{
				cibles.insert(pair<string,Noeud>(temp,aInserer));
	    	   	}
	           	else
	           	{
	        		cibles.at(temp).update(temp2);
	    	   	}
		    }
		    else
		    {
			    if(heures[i] == time)
			    {
		   		if (cibles.count(temp) == 0 )
	 	   		{
					cibles.insert(pair<string,Noeud>(temp,aInserer));
	    	   		}
	           		else
	           		{
	        			cibles.at(temp).update(temp2);
	    	   		}
			    }
		    }
	    }
	}
    }

    return cibles;

}


// Permet d'afficher le logDoc que l'on a récuperer
void afficherLogDoc ( vector<vector<string>> logDoc)
{
    unsigned int i;
    unsigned int j;
    for(i=0; i<logDoc.size()-1; i++)
    {
        for(j=0; j<logDoc[0].size(); j++)
        {
	   cout << "ligne : " << i << "  colonne : " << j << endl;
	   cout << logDoc[i][j].c_str() << "" << endl;
	}
        cout << endl;
    }
}

// Permet d'afficher la map que l'on obtient
void afficherMap ( map<string,int> cibles)
{
    for(auto& x: cibles)
    {
	    cout << x.first << "  :  " << x.second  << endl;
    }

}

vector<string> getExtensionsFichier ( vector<vector<string>> logDoc )
{
	unsigned int i=0;
	vector<string> extensions;
	string temp;
	for(i=0; i<logDoc.size()-1; i++)
	{
		temp = logDoc[i][5];
		while ( temp.size() >5 )
		{
			size_t pos = temp.find(".");
			if(pos != string::npos)
			{
				temp = temp.substr(pos);
			}
			else
			{
				temp = "";
			}
			if( temp[4] == '?' || temp[4] == ';' )
			{
				temp = temp.substr(0,4);
			}
			else
			{
				if ( temp.size() > 5 )
				{
					temp = temp.substr(0,1);
				}
			}
		}
		if ( temp[0] == '/' )
		{
			temp = "";
		}
		extensions.push_back(temp);
	}

	return extensions;
}


vector<int> getHeures ( vector<vector<string>> logDoc )
{
	unsigned int i;
	vector<int> heures;
	string temp;
	string offset;
	int time;
	for(i=0; i<logDoc.size()-1; i++)
	{
		temp = logDoc[i][3];
		size_t pos = temp.find("+");
		if(pos != string::npos)
		{
			offset = temp.substr(++pos);
			//cout << offset << endl;

			pos = temp.find(":");
			temp = temp.substr(++pos,2);
			//cout << temp << endl;
		}
		else
		{
			temp = "-1";
			offset = "-1";

		}

		time = stoi(temp,nullptr,10) + stoi(offset,nullptr,10)/100;
		//cout << time << endl;
		heures.push_back(time);
	}

	return heures;
}


