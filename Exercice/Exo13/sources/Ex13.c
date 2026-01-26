// Solution Ex11 SL121_LOGA  C. HUBER 
// Sert de canevas pour l'Ex13
// Il faut transformer les fonctions et leur utilisation
// en utilisant des structures !!

#include <stdio.h>


// Fonction fDivInt
int fDivInt(int dividende, int diviseur, int *Reste)
{
	*Reste = dividende % diviseur;
	return (dividende / diviseur);
}  // fDivInt

// Fonction Extract
short int Extract(int nombre, short int *Cent, short int *Diz)
{
	short int Units;
	Units = nombre % 10;
	*Cent = (nombre / 100);
	nombre = nombre % 100;
	*Diz = nombre / 10;
	return (Units);
}  // Extract


int main (void)
{
	char UserAnswer;
	// Variables pour test A
	int ValA_dividende, ValA_diviseur;
	int ResDiv, ResteDiv;
	// Variables pour test B
	int ValB;
	short int ResCent, ResDiz, ResUnit;

	printf("Ex13 Prenom NOM \n");

	do {
		printf("Test A ou B, Q pour Quitter \n");
		scanf_s("%c%*c", &UserAnswer, 2);
		
		switch (UserAnswer) {
			case 'A':
			case 'a':
				printf("TestA: entrez le dividende  \n");
				scanf_s("%d%*c", &ValA_dividende);
				printf("TestA: entrez le diviseur  \n");
				scanf_s("%d%*c", &ValA_diviseur);
				
				// test si diviseur est non nul
				if (ValA_diviseur != 0 ) 
				{
					ResDiv = fDivInt(ValA_dividende, ValA_diviseur, &ResteDiv );

					printf ("Resultat de %d /  %d =  %d, reste = %d \n",ValA_dividende, ValA_diviseur, ResDiv, ResteDiv );
				}
				else
				{
					printf ("TestA : erreur division par 0 ! \n");
				}
			break;

			case 'B':
			case 'b':
				printf("TestB: entrez un nombre de 0  a 999 \n");
				scanf_s("%d%*c", &ValB);
				// suite TestB à introduire ICI
				if (ValB > 999)
				{
					ValB = 999;
					printf ("ValB limitee a %d \n", ValB); 
				}
				ResUnit = Extract (ValB, &ResCent, &ResDiz);
				printf("ValB = %d centaine = % d dizaine = %d unite = %d \n", ValB, ResCent, ResDiz, ResUnit);
		break;

		} // end switch
	
	} while (!(UserAnswer == 'Q' || UserAnswer == 'q'));

	return (0);
}