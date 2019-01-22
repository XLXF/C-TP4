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

//--------------------------------------------------- Interfaces utilisées

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <Main>
//
//
//------------------------------------------------------------------------

class Main : public Ancetre
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

    setoffset();
    // Mode d'emploi :
    //
    // Contrat :
    
    setInfos(vector<vector<String>> values);
    // Mode d'emploi :
    //
    // Contrat :

    setEmsemble();
    // Mode d'emploi :
    //
    // Contrat :
    update(string target,string source);

    virtual ~Main ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

vector<vector<String>> infos
int offset
map <String, Noeud> ensemble
//----------------------------------------------------- Attributs protégés

};

//-------------------------------- Autres définitions dépendantes de <Main>

#endif // MAIN_H

