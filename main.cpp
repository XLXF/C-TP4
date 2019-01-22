/*************************************************************************
                           Main  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation de la classe <Main> (fichier Main.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;


//------------------------------------------------------ Include personnel
#include "Main.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type Main::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode


//------------------------------------------------- Surcharge d'opérateurs
Main & Main::operator = ( const Main & unMain )
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
Main::Main ( const Main & unMain )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Main>" << endl;
#endif
} //----- Fin de Main (constructeur de copie)


Main::Main ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Main>" << endl;
#endif
} //----- Fin de Main
Main::setInfos(string nomFichier)
{
#ifdef MAP
    cout << "Appel au constructeur de infos;" << endl;
#endif
    infos = new vector<vector<String>>;
    infos = Lecturelog(nomFichier);
} //----- Fin de Main

Main::setEmsemble()
{
#ifdef MAP
    cout << "Appel au constructeur d'ensemble;" << endl;
#endif
    string source;
    string target;
    emsemble = new map <String, Noeud>;
    for (auto it = infos.begin(); it != infos.end(); it++)
    {

    	target = it.at(3);
    	source = it.at(6);
    	update(target,source);
    }
} //----- Fin de Main

Main::update(string target,string source)
{
#ifdef MAP
    cout << "Appel au constructeur d'ensemble"<< endl;
#endif
    auto it = ensemble.find(target);
 	if (it != ensemble.end())
    	ensemble[target].update(source);
    else 
    	ensemble[target] = new Noeud(source);

} 

// Algorithme :
//
Main::~Main ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <Main>" << endl;
#endif
} //----- Fin de ~Main




//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

