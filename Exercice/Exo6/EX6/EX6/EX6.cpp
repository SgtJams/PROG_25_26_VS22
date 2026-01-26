//-----------------------------------------------------------------------------------//
// Nom du projet 		: Ex6
// Nom du fichier 		: Ex06
// Date de création 	: 21.11.2025
// Date de modification : 
//
// Auteur 				: Steeve.Pouly
//
// Version				: 0.1
//
// Description          : 
//
//
// Remarques :          
//----------------------------------------------------------------------------------//
//-- librairie standard --//
#include <stdio.h>  //-- <> utilisé pour le standard --//
#include <iostream>

//-- Déclaration et initialisation des variables --//
char ValA = -1;
unsigned char ValB = 8;
short Etoile = 0;
short ValB1;
float ValB2;
short i;

int main()
{
	//-- Exercices A --//
	if (ValA > 9)
	{
		printf("TestA ValA limittee a 9 ! \n");
	}
	else if (ValA == 0)
	{
		ValA = 1;
		printf("TestA: ValA forcee a 1 ! \n");
	}
	else if (ValA <9 && ValA > 0)
	{
		//-- Afficher Etoile --//
		printf("%d",ValA  );	
		for (i = 0; i < ValA; i++)
		{
			printf("*");
		}

		printf("\n");
	}
	else
	{
		printf(" TestA: ValA est negatif ! \n");
	}

	//-- Exercices B --//
	if (ValB >= 0 && ValB <= 9 )
	{
		for (char i = 0; i < ValB; i++)
		{
			ValB2 = (float)ValB1 / 1000;
			ValB1 = 100 + 10 * i;

			printf("TestB: i= %d ValB1 = %d ValB2 = %3f \n", i, ValB1, ValB2);
		}
	}
	else
	{
		printf(" TestB: ValB n est pas entre 0 et 9 \n");
	}
	return(0);
}
