
/*************************************************************************
                           GraphViz  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation de la classe <GraphViz> (fichier GraphViz.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
#include <string>
#include <fstream>
#include <cstring>
using namespace std;


//------------------------------------------------------ Include personnel
#include "GraphViz.h"
#include "Main.h"
#include "Noeud.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type GraphViz::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode

GraphViz::GraphViz(map<string, Noeud> ensemble)
{
	int i = 0
	for(map<string,Noeud>::iterator depart = ensemble.begin(); depart != m.end(); ++it)
    {
   		Node[depart] = i++;
   	}
	cout<<"on numeroter les adresse departs"<<endl;
}
GraphViz::Ecriture ( const char* nomFichier, map<string, Noeud> ensemble)
// Algorithme :
//
{
    ofstream fichier(nomFichier);
    if(fichier)
    {
    	fichier<<"digraph {"<<endl;
    	for(map<string,Noeud>::iterator depart = ensemble.begin(); depart != m.end(); ++depart)
    	{
    		cout<<"on affichier les adresse depart"<<endl;
    		fichier<<"node"<<Node[depart]<<" [label = \""<<depart<<"\"];"<<endl;
    	}
    	for(map<string,Noeud>::iterator depart = ensemble.begin(); depart != m.end(); ++depart)
    	{
    		fichier<<"node"<<Node[depart];
    		Noeud noeud= ensemble[depart];
    		map<string,int> infos = noeud.grapheInfo;
    		cout<<"pour chaque adresse depart, on a des adresses arrivees suivantes:"<<endl;
    		for(map<string,int>::iterator arrive = infos.begin(); arrive != m.end(); ++arrive)
    		{
    			fichier<<"node"<<Node[depart]<<" -> node"<<Node[arrive]<<" [label = \""<<info[arrive]<<"\"];"<<endl;
    			cout<<"reussi a obtenir les adresses arrivees avec les nombre de clique correspondent"<<endl;
    		}
    	
    	}
    	fichier<<"}"<<endl;
    }



} //----- Fin de GraphViz



//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

