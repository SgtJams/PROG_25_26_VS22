// ---------------------------------------------------------------------------------- -//
// Nom du projet 		: Ex12
// Nom du fichier 		: Ex12.c
// Date de création 	: 25.01.2026
// Date de modification : 
//
// Auteur 				: Pouly (St. Pouly)
//                       
//
// Description          : Fonction qui affiche les adresses d'un tableau
//
//
// Remarques :            lien pour la table ASCII :
// 						  -> http://www.asciitable.com/
// 						  
//----------------------------------------------------------------------------------//

#include <stdio.h>	// pour usage printf
#include <stdint.h> // uniformation du type entier  

// Fonction ShowItems



int main (void)
{
	char UserAnswer;
	// Variables pour test A
	int i;
	int TableA[10];
	float ValItem;
	short ValInd;
	int ValAdd;

	// Variables pour test B
	

	printf("Ex12  Steeve Pouly \n");  // A adapter

	// Boucle initialisation du tableau du testA

	for (i = 0, i < 0, i++)
	{
		TableA[i] = 0;
	}


	do {
		printf("Test A ou B, Q pour Quitter \n");
		scanf_s("%c%*c", &UserAnswer, 2);
		
		switch (UserAnswer) {
			case 'A':
			case 'a':
				printf("TestA: affichage des informations de TableA \n");
				ValItem = ShowItems(TableA);
				printf("TestA : indice = %d, adresse item = %d valeur item = %d", ValInd, ValAdd, ValItem);

				
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