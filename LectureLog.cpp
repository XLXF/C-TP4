/*************************************************************************
                           LectureLog  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation du module <LectureLog> (fichier LectureLog.cpp) ---------------

/////////////////////////////////////////////////////////////////  INCLUDE
//-------------------------------------------------------- Include système
#include <iostream>
#include <string>
#include <fstream>
#include <cstring>
using namespace std;
//------------------------------------------------------ Include personnel
#include "LectureLog.h"
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
vector<vector<string>> LectureLog ( string nomFichier )
// Algorithme :
//
{
    string temp = "";
    vector<string> ligne;
    vector<vector<string>> logDoc;
    string buffer;
    int compteurGen = 0;
    int compteurTemp = 0;
    cout << "on essaye de lire le fichier" << endl;
    ifstream fichier(nomFichier);
    if (fichier)
    {
        cout << temp.max_size() << endl;
        while (!fichier.eof() )
        {
            buffer = "";
            temp = "";
            compteurGen = 0;
            compteurTemp = 0;
            getline(fichier, buffer);
           if(buffer != "")
           {
           cout << buffer.c_str() << endl;
            while(buffer[compteurGen] != ' ')
            {
                temp += buffer[compteurGen];
                compteurTemp++;
                compteurGen++;
            }
            cout << endl;
            temp += '\0';
            cout << temp.c_str() ;
            compteurTemp = 0;
            ligne.push_back(temp);
            temp = "";
            cout << temp.c_str() << endl;
            
            compteurGen++;
            while(buffer[compteurGen+1] != '[')
            {
                temp += buffer[compteurGen];
                compteurGen++;
                compteurTemp++;
            }
            temp  += '\0';
            cout << temp.c_str() << endl;
            compteurTemp = 0;
            ligne.push_back(temp);
            temp = "";
            cout << temp << endl;
        
            compteurGen += 2;
            while(buffer[compteurGen] != ']')
            {
                temp += buffer[compteurGen];
                compteurGen++;
                compteurTemp++;
            }
            temp += '\0';
            cout << temp.c_str() << endl;
            compteurTemp = 0;
            ligne.push_back(temp);
            temp = "";
            cout << temp << endl;
        
        
            compteurGen+=3;
            while(buffer[compteurGen] != ' ')
            {
                temp += buffer[compteurGen];
                compteurGen++;
                compteurTemp++;
            }
            temp += '\0';
            cout << temp.c_str() << endl;
            compteurTemp = 0;
            ligne.push_back(temp);
            temp = "";
            cout << temp << endl;
        
        
            compteurGen++;
            while(buffer[compteurGen] != '"')
            {
                temp += buffer[compteurGen];
                compteurGen++;
                compteurTemp++;
            }
            temp += '\0';
            cout << temp.c_str() << endl;
            compteurTemp = 0;
            ligne.push_back(temp);
            temp = "";
            cout << temp << endl;
        
        
            compteurGen+=2;
            while(buffer[compteurGen] != ' ')
            {
                temp += buffer[compteurGen];
                compteurGen++;
                compteurTemp++;
            }
            temp += '\0';
            cout << temp.c_str() << endl;
            compteurTemp = 0;
            ligne.push_back(temp);
            temp = "";
            cout << temp << endl;


            compteurGen++;
            while(buffer[compteurGen] != ' ')
            {
                temp += buffer[compteurGen];
                compteurGen++;
                compteurTemp++;
            }
            temp += '\0';
            cout << temp.c_str() << endl;
            compteurTemp = 0;
            ligne.push_back(temp);
            temp = "";
            cout << temp << endl;


            compteurGen+=2;
            while(buffer[compteurGen+1] != ' ')
            {
                temp += buffer[compteurGen];
                compteurGen++;
                compteurTemp++;
            }
            temp += '\0';
            cout << temp.c_str() << endl;
            compteurTemp = 0;
            ligne.push_back(temp);
            temp = "";
            cout << temp << endl;


            compteurGen+=3;
            while(buffer[compteurGen] != '"')
            {
                temp += buffer[compteurGen];
                compteurGen++;
                compteurTemp++;
            }
            temp += '\0';
            cout << temp.c_str() << endl;
            compteurTemp = 0;
            ligne.push_back(temp);
            temp = "";
            cout << temp << endl;
            cout << endl;
        

                logDoc.push_back(ligne);
                ligne.clear();
            }
        }
    }
    return logDoc;


} //----- fin de Nom

