/*************************************************************************
                           Noeud  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation de la classe <Noeud> (fichier Noeud.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;
#include <map>
#include <string>
//------------------------------------------------------ Include personnel
#include "Noeud.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type Noeud::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode


//------------------------------------------------- Surcharge d'opérateurs
//Noeud & Noeud::operator = ( const Noeud & unNoeud )
// Algorithme :
//
//{
//    return ((unNoeud.grapheInfo == this->grapheInfo) && (unNoeud.compteur == this->compteur));	
//} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
Noeud::Noeud ( const Noeud & unNoeud )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Xxx>" << endl;
#endif
    compteur = unNoeud.compteur;
    for ( auto & x: unNoeud.grapheInfo )
    {
	    grapheInfo.insert(x);
    }
} //----- Fin de Xxx (constructeur de copie)


Noeud::Noeud (string nomSource )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Xxx>" << endl;
#endif
    grapheInfo.insert(pair<string,int>(nomSource,1));
    compteur = 1;
} //----- Fin de Xxx

int Noeud::getCompteur ( )
// Algorithme :
//
{
    return compteur;
} //----- Fin de Xxx

void Noeud::update (string nomSource)
// Algorithme :
//
{
	auto it = grapheInfo.find(nomSource);
 	if (it != grapheInfo.end())
	{
    	    grapheInfo[nomSource]++;
	}
        else
	{	
    	    grapheInfo.insert(pair<string,int>(nomSource,1));
	}
	updateCompteur();

} //----- Fin de Xxx

void Noeud::updateCompteur ()
// Algorithme :
//
{
    compteur ++;
} //----- Fin de Xxx


Noeud::~Noeud ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Xxx>" << endl;
#endif
} //----- Fin de ~Xxx


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

