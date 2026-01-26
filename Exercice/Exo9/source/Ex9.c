// Canevas Ex9 revision fonction supplémentaire 
// SL121_LOGA SLO1 2014-2015  C. HUBER 

#include <stdio.h>

// Fonction IsChiffre


// Fonction DispTriangle




int main (void)
{
	char UserAnswer;
	// Variables pour test A et B

	
	// Variables pour test C
	
	
	
	// Affichage initial

	do {
		printf("Test A, B ou C , Q pour Quitter \n");
		scanf_s("%c%*c", &UserAnswer, 2);
		
		switch (UserAnswer) {
			case 'A':
			case 'a':
				

			break;

			case 'B':
			case 'b':
				
			break;

			case 'C':
			case 'c':
				

			break;

			
			
		} // end switch
	
	} while (!(UserAnswer == 'Q' || UserAnswer == 'q'));

	return (0);
}