// Canevas Exercice 25 récursivité
// Auteur C. Huber 27.06.2016

#include <stdlib.h>	// pour malloc
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>	// pour les fonctions fichiers


// Fonction récursive Fibonacci
// n correspond au rang de l'élément




int main(void)
{
	char UserAnswer;
	
	int NbElem, Elem, i;
	

	printf ("Exercice 25 Prenom Nom \n");
	

	do {
			printf("Test T ou Q pour Quitter \n");
			scanf_s("%c%*c", &UserAnswer, 2);
		
			switch (UserAnswer) {
				case 'T':
				case 't':
					printf("Entrez le nombre elements de la suite de Fibonacci ! \n");
					// saisie
					
					
					// Affiche la série de Fibonacci
					
					
					
				break;
			} // end switch
	
		} while (!(UserAnswer == 'Q' || UserAnswer == 'q'));
	
	return (0);
}
