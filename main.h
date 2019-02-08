/*************************************************************************
                           Main  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <Main> (fichier Main.h) ----------------
#if ! defined ( MAIN_H )
#define MAIN_H
#include <map>
#include <vector>
#include <string>

#include "LectureLog.h"
#include "GraphViz.h"
#include "Noeud.h"

//--------------------------------------------------- Interfaces utilisées

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <Main>
//
//
//------------------------------------------------------------------------

class Main
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    // type Méthode ( liste des paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //


//------------------------------------------------- Surcharge d'opérateurs
    Main & operator = ( const Main & unMain );
    // Mode d'emploi :
    //
    // Contrat :
    //


//-------------------------------------------- Constructeurs - destructeur
    Main ( const Main & unMain );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    Main ( );
    // Mode d'emploi :
    //
    // Contrat :

    void setoffset();
    // Mode d'emploi :
    //
    // Contrat :
    
    void setInfos(string nomFichier);
    // Mode d'emploi :
    //
    // Contrat :

    void setEmsemble();
    // Mode d'emploi :
    //
    // Contrat :
    void update(string target,string source);

    virtual ~Main ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

vector<vector<string>> infos;
int offset;
map <string, Noeud> ensemble;
//----------------------------------------------------- Attributs protégés

};

//-------------------------------- Autres définitions dépendantes de <Main>

#endif // MAIN_H

