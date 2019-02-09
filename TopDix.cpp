/*************************************************************************
                           TopDix  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation du module <TopDix> (fichier TopDix.cpp) ---------------

/////////////////////////////////////////////////////////////////  INCLUDE
//-------------------------------------------------------- Include système
#include <iostream>
#include <string>
#include <iterator>
#include <fstream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
//------------------------------------------------------ Include personnel
#include "TopDix.h"
///////////////////////////////////////////////////////////////////  PRIVE
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//---------------------------------------------------- Variables statiques

//------------------------------------------------------ Fonctions privées
//static type nom ( liste de paramètres )
// Mode d'emploi :
//
// Contrat :
//i
// Algorithme :
//
//{
//} //----- fin de nom

//////////////////////////////////////////////////////////////////  PUBLIC
//---------------------------------------------------- Fonctions publiques
void TopDix (map<string,Noeud> cibles)
// Algorithme :
//
{
    vector<string> res;
    vector<Noeud> calque;
    unsigned int i=0;
    unsigned int j=0;
    cout << endl;
    for (auto& x: cibles)
    {
	    if(res.size() < 10)
	    {
		    calque.push_back(x.second);
		    res.push_back(x.first);
	    }
	    else
	    {
		    if(x.second.getCompteur() >= calque[9].getCompteur())
		    {
			calque.pop_back();
			res.pop_back();
			calque.push_back(x.second);
			res.push_back(x.first);

		    }
	    }
	    // Le choix de ne pas utiliser la stl afin de réordonné le vector des valeurs de la map
	    // a été fait afin de pouvoir réorganiser de manière similaire les clés de la map
	    // et ainsi créer la liste du top10
	    for (i=0; i<calque.size(); i++)
	    {
		    for(j=calque.size()-1; j>i; j--)
		    {
			    if(calque[j].getCompteur() > calque[j-1].getCompteur())
			    {
				    iter_swap(calque.begin()+j,calque.begin()+j-1);
				    iter_swap(res.begin()+j,res.begin()+j-1);
			    }
		    }
	    }


    }
    cout << "<<<< Voici le top 10 des documents les plus visités >>>>" << endl;
    cout << endl;
    for(i=0; i<res.size(); i++)
    {
	    cout << i+1 << ")  " << res[i] << "   :   " << cibles.at(res[i]).getCompteur() << endl;
    }
	

} //----- fin de Nom
