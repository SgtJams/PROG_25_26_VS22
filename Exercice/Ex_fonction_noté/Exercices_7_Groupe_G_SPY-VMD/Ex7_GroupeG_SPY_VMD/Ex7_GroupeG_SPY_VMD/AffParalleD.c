//-----------------------------------------------------------------------------------//
// Nom du projet 		: Exercice 7 - Fonctions
// Nom du fichier 		: AffParalleD.c
// Date de création 	: 15.12.2025
// Date de modification : xx.xx.20xx
//
// Auteur 				: Steeve.Pouly
//						  Valentin Mermoud
//
// Version				: 0.1
//
// Description          : Réalisation d'une fonction ayant pour but de représenter la même image figurant dans le CDC dans le groupe G.
//
//
// Remarques :            lien pour la table ASCII :
// 						  -> http://www.asciitable.com/
// 						  lien pour la saisie de clavier avec getc & getchar pour ne pas
//                        avoir des erreurs d'interprétation
// 						  -> http://fr.openclassrooms.com/informatique/cours/utiliser-les-bonnes-fonctions-d-entree
// 						  lien vers différents
// 						  -> http://fr.wikipedia.org/wiki/String.h
//----------------------------------------------------------------------------------//
#include <stdio.h>

#include "AffParalleD.h"


// --fonction--//
//---------------------------------------------------------------------------------//
//-- nom fct : AffParalleD
//--paramètre entrée: nbE (short)
//--paramètre sortie: nbETot -> (char)
//--paramètre IN-OUT(pointeur): -
//--description : afficher un losange avec des étoiles
//---------------------------------------------------------------------------------//

unsigned char AffParalleD(short nbE)
{
	//-- Declaration des variables --//
	short NbEspaces;
	short i;
	short j1;
	short j2;
	unsigned char nbETot = 0;

	if (nbE <= 15)					//vérification des valeur d'entrées 0-15//
	{
		//-- Affichage des lignes --//
		for (i = 0; i < nbE; i++)
		{
			NbEspaces = nbE - i - 1; //dégrémentation du nombre despace//

			//-- Afficher espace --//
			for (j1 = 0; j1 < NbEspaces; j1++)
			{
				printf(" ");		//Affichage des espaces//
			}

			//-- Afficher Etoile  --//
			for (j2 = 0; j2 < nbE; j2++)
			{
				printf("*");		//Affichage des étoiles//
			}

			printf("\n");			//retour à la ligne//
		}	

		nbETot = nbE * nbE;			//Retour du nombres d'étoiles affiche//
	}

	return nbETot;
}

