/*************************************************************************
                           Noeud  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <Noeud> (fichier Noeud.h) ----------------
#if ! defined ( NOEUD_H )
#define NOEUD_H
#include <map>
#include <string>

//--------------------------------------------------- Interfaces utilisées

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <Xxx>
//
//
//------------------------------------------------------------------------

class Noeud
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
    Noeud & operator = ( const Noeud & unNoeud );
    // Mode d'emploi :
    //
    // Contrat :
    //


//-------------------------------------------- Constructeurs - destructeur
    Noeud ( const Noeud & unNoeud );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    Noeud (string nomSource);
    // Mode d'emploi :
    //
    // Contrat :
    //

    void update (string nomSource);
    // Mode d'emploi :
    //
    // Contrat :
    //

    void updateCompteur ();
    // Mode d'emploi :
    //
    // Contrat :
    //

    int getcompteur ( );
    // Mode d'emploi :
    //
    // Contrat :
    //



    virtual ~Noeud ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées
map <string, int> grapheInfo;
int compteur;
//----------------------------------------------------- Attributs protégés

};

//-------------------------------- Autres définitions dépendantes de <Noeud>

#endif // NOEUD_H

