//-----------------------------------------------------------------------------------//
// Nom du projet 		: Exercice 12 - Tableau
// Nom du fichier 		: Ex12.c
// Date de création 	: 12.01.2026
// Date de modification : xx.xx.20xx
//
// Auteur 				: Steeve.Pouly
//						  
//
// Version				: 0.1
//
// Description          : Fournir un canevas vide, supportant la structure de deux test ainsi que les demandes à l'utilisateur.
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

// Fonction ShowItems



int main (void)
{
	char UserAnswer;
	// Variables pour test A
	double TableA[10] = {10.00};
	short i;
	int affichageA;

	// Variables pour test B
	

	printf("Ex12  Steeve Pouly \n");  // A adapter

	// Boucle initialisation du tableau du testA
	

	for (i = 0; i < 10; i++);
	{
		TableA[0]++;
	}


	do {
		printf("Test A ou B, Q pour Quitter \n");
		scanf_s("%c%*c", &UserAnswer, 2);
		
		switch (UserAnswer)
		{
			case 'A':
			case 'a':
				printf("TestA: affichage des informations de TableA \n");
				// suite test A 
				affichageA = ShowItems(, )
				
			break;

			case 'B':
			case 'b':
				printf("TestB: entrez le numero de ligne (max 15) \n");
				// suite test B 

			break;

		} // end switch
	
	} while (!(UserAnswer == 'Q' || UserAnswer == 'q'));

	return (0);
}