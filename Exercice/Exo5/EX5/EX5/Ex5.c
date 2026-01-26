//-----------------------------------------------------------------------------------//
// Nom du projet 		: Exercice 5
// Nom du fichier 		: 
// Date de création 	: 21.11.2025
// Date de modification : 
//
// Auteur 				: Pouly Steeve
//                       
//
// Version 				: 0.1
//
// Description          : Voir donnee exercice 5 
//
//
// Remarques :            lien pour la table ASCII :
// 						  -> http://www.asciitable.com/
// 						  
//----------------------------------------------------------------------------------//

//-- déclaration des librairies --// 
#include <stdio.h>	// pour usage printf

// Déclaration variables
unsigned char ValA = 2;
char int8Val = 125;
unsigned char uint8Val = 125;

int main(void)
{

	if(ValA>9)
	{
	printf("LOGA_C Ex5 \n");
	printf("ValA limittee a 9 ! \n");
	}
	else if (ValA > 0)
	{
		for (char i = 0; i < ValA; i++)
		{
			printf("i = %d \n", i);
		}
	}


	for (char i = 0; i < 10; i++)
	{
		printf("int8Val = %+3d uint8Val = %d \n", int8Val, uint8Val);

		int8Val += 1;
		uint8Val += 1;
	}

	return(0);
}

/*// Traitement cas A
printf("Traitement cas A \n");

printf("ResA1 = A1 * A2 soit  %d * %d = %d \n", A1, A2);
printf("ResA2 = A1 * A2 soit  %d * %d = %d \n", A1, A2);

//ca ne marche pas a cause du mauvais type de variables utilisé pour A1 et A2//

// Traitement cas B
printf("Traitement cas B \n");

printf("ValB  % HighValB = %2x LowValB = %\n", ValB, ValB, ValB);
//dans le printf il manque du code pour déterminer les bit de poid faibles et fort//

// Traitement cas C
printf("Traitement cas C \n");

printf("ResC = %  OU % =  % \n", C1, C2);
printf("ResC = %  ET % =  %0 \n", C1, C2);

//dans le printf il manque les symbole && et || pour afficher les bonne valeurs//

// Traitement cas D

printf("Traitement cas D \n");

printf("Division de %4d par %4d = %4d Reste = %4d \n", D1, D2);
//dans le printf il manque les symbole //*/