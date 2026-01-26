// Canevas  Ex17   C. HUBER 

#include <stdio.h>

// Definition de S_DefSegment


// Definition de S_Frame



// Definition de U_Frame



// Fonction ShowSeg


// Fonction ShowFrame



// Programme principal
int main (void)
{
	char UserAnswer;
	// Variables pour test A
	

	// Variables pour test B
	

	// A adapter !!!
	printf("Ex17  Prenom Nom \n");

	do {
		printf("Test A ou B, Q pour Quitter \n");
		scanf_s("%c%*c", &UserAnswer, 2);
		
		switch (UserAnswer) {
			case 'A':
			case 'a':
				printf("TestA:  \n");
				// Initialisation champ par champ
				

				// Appel des fonctions pour affichage
				
			break;

			case 'B':
			case 'b':
				printf("TestB:  \n");
				// Frame1 :  STX = 3 Code = 0x123,
				//           Datas = 0x12345678 et CRC = 0xACDC

				
				// Frame2 :  STX = 3 Code = 0x124,
				//           Datas = 0x10203040 et CRC = 0xABEF
				

				// Appel des fonctions pour affichage

				
			break;



		} // end switch
	
	} while (!(UserAnswer == 'Q' || UserAnswer == 'q'));

	return (0);
}