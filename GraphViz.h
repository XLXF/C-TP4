/*************************************************************************
                           GraphViz  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <GraphViz> (fichier GraphViz.h) ----------------
#if ! defined ( GRAPHVIZ_H )
#define GRAPHVIZ_H

//--------------------------------------------------- Interfaces utilisées

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <GraphViz>
//
//
//------------------------------------------------------------------------

class GraphViz
{
//----------------------------------------------------------------- PUBLIC

public:/*************************************************************************
                           GraphViz  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <GraphViz> (fichier GraphViz.h) ----------------
#if ! defined ( GRAPHVIZ_H )
#define GRAPHVIZ_H

//--------------------------------------------------- Interfaces utilisées

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <GraphViz>
//
//
//------------------------------------------------------------------------

class GraphViz 
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    // type Méthode ( liste des paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //

    GraphViz ( vector<vector<string>> infos);

    void Ecriture ( const char* nomFichier, vector<vector<string>> infos);


    // Mode d'emploi :
    //
    // Contrat :
    //


//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées
map <string,int> Node
//----------------------------------------------------- Attributs protégés

};

//-------------------------------- Autres définitions dépendantes de <GraphViz>

#endif // GRAPHVIZ_H
