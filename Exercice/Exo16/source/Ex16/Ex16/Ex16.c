// -----------------------------------------------------------------------------------//
// Nom du projet 		: Ex16
// Nom du fichier 		: Ex16.c
// Date de création 	: 09.03.2026
// Date de modification : 
//
// Auteur 				: Pouly (St. Pouly)
//                       
//
// Description          : Affiche les heures, minutes,seconde avec un nbr de seconde données.mais avec l'option des structures
//
//
// Remarques :            Canevas pour l'exercice 16 SL124_LOGA.
//						  lien pour la table ASCII :
// 						  -> http://www.asciitable.com/
// 						  
//----------------------------------------------------------------------------------//
#include <stdint.h> // uniformation du type entier 
#include <stdio.h>

//-- Lib perso --//
#include "ZipDate.h"


// ZipDate
// Cette fonction recoit une date sous forme unsigned char jour, unsigned char mois et short ans
// Elle retourne un unsigned short organisé de tel manière que l'année et codée sur 7 bits, le mois sur 4 
// et le jour sur 5 
// La valeur codée de l'année correspond à la différence à 1950
// Utilisez une union pour obtenir la valeur unsigned short, la fonction retourne le 
// résultat unsigned short


int main (void)
{
	char  UserAnswer;
	short sortie;

	//-- Taille minimum = short, même avec préfixe h dans scanf --//
	unsigned short day, month;
	unsigned short year;
	unsigned short Dateback;
	
	//-- début Affichage --//
	printf ("Ex16 Pouly Steeve \n");
	
	//-- tant que faux, reste dans la boucle --//
	sortie = 0; 
	do {
		printf("T pour test, Q pour Quitter \n");
		scanf_s("%c%*c", &UserAnswer,2);
		
		switch (UserAnswer) 
		{
			
			case 'T':
			case 't':

				//-- Affichage --//
				printf("Entrez jour mois annee ! \n");

				//-- Test (Exercice champs de bit) --//
				scanf_s("%hd%hd%hd%*c", &day, &month, &year);
				
				//-- Introduisez l'appel de ZipDate ICI --//
				Dateback = ZipDate(day, month, year);

				//-- Affichage du résultat --//
				printf("Date compressee en hexa %d \n", Dateback);

			break;

			case 'Q':
			case 'q':
				sortie = 1;
			break;
		}
	
	} while (sortie == 0);

	return (0);
}