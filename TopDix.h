/*************************************************************************
                           TopDix  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface du module <TopDix> (fichier TopDix.h) -------------------
#if ! defined ( TOPDIX_H )
#define TOPDIX_H

//------------------------------------------------------------------------
// Rôle du module <TopDix>
//
//
//------------------------------------------------------------------------

/////////////////////////////////////////////////////////////////  INCLUDE
//--------------------------------------------------- Interfaces utilisées
#include <vector>
#include <string>
#include <map>
#include <vector>
#include "Noeud.h"
using namespace std;
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//////////////////////////////////////////////////////////////////  PUBLIC
//---------------------------------------------------- Fonctions publiques
// type Nom ( liste de paramètres );
// Mode d'emploi :
//
// Contrat :
void TopDix(map<string,Noeud> cilbes);
#endif // TOPDIX_H

