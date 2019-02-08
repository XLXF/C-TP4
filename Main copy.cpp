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


int main()
{
    vector<vector<string>> logDoc;
    logDoc = LectureLog("cout.log");
    unsigned int i;
    unsigned int j;
    for(i=0; i<logDoc.size(); i++)
    {
        for(j=0; j<logDoc[0].size(); j++)
        {
           // cout << "coucou" << endl;
            cout << logDoc[i][j].c_str();
        }
        cout << endl;
    }
    return 0;
}
