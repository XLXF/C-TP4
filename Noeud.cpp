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
Noeud & Noeud::operator = ( const Noeud & unNoeud )
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
Noeud::Noeud ( const Noeud & unNoeud )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Xxx>" << endl;
#endif
} //----- Fin de Xxx (constructeur de copie)


Noeud::Noeud (string nomSource )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Noeud>" << endl;
#endif
    grapheInfo = new map <string, int>;
    grapheInfo[nomSource] = 1;
    compteur =1;
} //----- Fin de Xxx

int Noeud::getcompteur ( )( )
// Algorithme :
//
{
#ifdef MAP
    cout << "get compteur" << endl;
#endif
    return compteur;
} //----- Fin de Xxx

void Noeud::unpdate (string nomSource)
// Algorithme :
//
{
#ifdef MAP
    cout << "Update Noeud " << endl;
#endif
	auto it = mymap.find(nomSource);
 	if (it != mymap.end())
    	grapheInfo[nomSource]++;
    else 
    	grapheInfo[nomSource] = 1;
    unpdateCompteur ();

} //----- Fin de Xxx

void Noeud::unpdateCompteur ()
// Algorithme :
//
{
#ifdef MAP
    cout << "Update variable compteur" << endl;
#endif
    compteur ++;
} //----- Fin de Xxx


Noeud::~Noeud ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Xxx>" << endl;
#endif
    grapheInfo.clear();
    delete grapheInfo;
} //----- Fin de ~Xxx


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

