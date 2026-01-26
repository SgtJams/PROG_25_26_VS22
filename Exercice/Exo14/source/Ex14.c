// Canevas Ex14 SL124_LOGA SLO1 2ème semestre  C. HUBER 

#include <stdio.h>

// Structure S_hms

// Structure S_hms_D


// Fonction CalSec


// Fonction GetHMS_B


// Fonction GetHMS_C


// Fonction GetHMS_D


int main (void)
{
	char UserAnswer;
	// Variables pour test A
	int HeuresA, MinutesA;

	// Variables pour test B
	int ValB;

	// Variables pour test C
	int ValC;

	// Variables pour test D
	int ValD;


	printf("Ex14  Prenom NOM \n");	// à MAJ

	do {
		printf("Test A, B, C ou D, Q pour Quitter \n");
		scanf_s("%c%*c", &UserAnswer, 2);
		
		switch (UserAnswer) {
			case 'A':
			case 'a':
				printf("TestA: entrez le nb d'heures  \n");
				scanf_s("%d%*c", &HeuresA);
				printf("TestA: entrez le nb de minutes  \n");
				scanf_s("%d%*c", &MinutesA);
				// Suite TestA

			break;

			case 'B':
			case 'b':
				printf("TestB: entrez un nombre de secondes \n");
				scanf_s("%d%*c", &ValB);
				// Suite TestB

			break;

			case 'C':
			case 'c':
				printf("TestC: entrez un nombre de secondes \n");
				scanf_s("%d%*c", &ValC);
				// Suite TestC

			break;

			case 'D':
			case 'd':
				printf("TestD: entrez un nombre de secondes \n");
				scanf_s("%d%*c", &ValD);
				// Suite TestD

			break;
		} // end switch
	
	} while (!(UserAnswer == 'Q' || UserAnswer == 'q'));

	return (0);
}