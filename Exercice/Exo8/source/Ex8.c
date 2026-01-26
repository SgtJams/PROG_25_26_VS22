// SL121_LOGA  Canevas Ex8   C. HUBER 

#include <stdio.h>

// Fonction FtestA

// Fonction FtestB

// Fonction fDivision

// Fonction fReste


int main (void)
{
	char UserAnswer;
	int ValA, ValB;
	// Variables pour test C

	
	// Affichage : "Ex8  Nom Prénom"

	do {
		printf("Test A, B ou C, Q pour Quitter \n");
		scanf_s("%c%*c", &UserAnswer, 2);
		
		switch (UserAnswer) {
			case 'A':
			case 'a':
				printf("TestA: entrez un nombre entre 1 et 15 \n");
				scanf_s("%d%*c", &ValA);
				// Suite TestA à introduire ICI

			break;

			case 'B':
			case 'b':
				printf("TestB: entrez un exposant de -99  a +99 \n");
				scanf_s("%d%*c", &ValB);
				// Suite TestB à introduire ICI

			break;

			case 'C':
			case 'c':
				// TestC à introduire ICI

			break;

		} // end switch
	
	} while (!(UserAnswer == 'Q' || UserAnswer == 'q'));

	return (0);
}