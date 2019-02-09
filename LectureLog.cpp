/*************************************************************************
                           LectureLog  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation du module <LectureLog> (fichier LectureLog.cpp) ---------------

/////////////////////////////////////////////////////////////////  INCLUDE
//-------------------------------------------------------- Include système
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
//------------------------------------------------------ Include personnel
#include "LectureLog.h"
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
vector<vector<string>> LectureLog ( string nomFichier )
// Algorithme :
//
{
	string buffer;
	vector<string> ligne;
	vector<vector<string>> logDoc;
	ifstream fichier(nomFichier);
	if (fichier)
	{	
		while(!fichier.eof())
		{
			buffer = "";
			buffer = "";
			getline(fichier, buffer, ' ');
			ligne.push_back(buffer);
			getline(fichier, buffer, ' ');
			ligne.push_back(buffer);
			getline(fichier, buffer, ' ');
			ligne.push_back(buffer);
			getline(fichier, buffer, '[');
			getline(fichier, buffer, ']');
			ligne.push_back(buffer);
			getline(fichier, buffer, '"');
			getline(fichier, buffer, ' ');
			ligne.push_back(buffer);
			getline(fichier, buffer, ' ');
			ligne.push_back(buffer);
			getline(fichier, buffer, '"');
			ligne.push_back(buffer);
			getline(fichier, buffer, ' ');
			getline(fichier, buffer, ' ');
			ligne.push_back(buffer);
			getline(fichier, buffer, ' ');
			ligne.push_back(buffer);
			getline(fichier, buffer, '"');
			getline(fichier, buffer, '"');
			ligne.push_back(buffer);
			getline(fichier, buffer, '"');
			getline(fichier, buffer, '"');
			ligne.push_back(buffer);
			getline(fichier, buffer, '\n');
			logDoc.push_back(ligne);
			ligne.clear();

		}
	}
	return logDoc;




} //----- fin de Nom
