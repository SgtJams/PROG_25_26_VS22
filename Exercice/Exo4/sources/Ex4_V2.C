//-----------------------------------------------------------------------------------//
// Nom du projet 		: 
// Nom du fichier 		: 
// Date de création 	: 21.11.2025
// Date de modification : 
//
// Auteur 				: Pouly Steeve
//                       
//
// Version 				: 0.1
//
// Description          : Voir donnee exercice 4 
//
//
// Remarques :            lien pour la table ASCII :
// 						  -> http://www.asciitable.com/
// 						  
//----------------------------------------------------------------------------------//

//-- déclaration des librairies --// 
#include <stdio.h>	// pour usage printf
// Déclaration cas A
	short A1 = 400;
	short A2 = 500;
	short ResA1 = 0;
	long long ResA2 = 0;
	// Déclaration cas B
	unsigned short ValB = 0x1234;
	char HighValB = 0;
	char LowValB = 0;

	// Déclaration cas C
	unsigned long long C1 = 0x5555;
	unsigned long long C2 = 0x0F0F;
	unsigned long long ResC1 = 0x0000;
	unsigned long long ResC2 = 0x0000;

	// Déclaration cas D
	short D1 = 1325;
	short D2 = 7;
	short ResD1 = 0;
	short ResD2 = 0;


int main(void)
{
	// Traitement cas A----------------------------------

	ResA1 = A1 * A2;
	ResA2 = A1 * A2;
	printf ("Traitement cas A \n");
	printf ("ResA1 = A1 * A2 soit  %d * %d = %d \n",A1, A2, ResA1);
	printf ("ResA2 = A1 * A2 soit  %d * %d = %d \n",A1, A2, ResA2);
	
	//ca ne marche pas a cause du mauvais type de variables utilisé pour ResA1 et ResA2//

	// Traitement cas B---------------------------------

	HighValB = ValB >>8 ;
	LowValB = ValB;
	printf ("Traitement cas B \n");
	printf ("ValB  %x HighValB = %2x LowValB = %2x \n",ValB, HighValB, LowValB);
	//dans le printf il manque du code pour déterminer les bit de poid faibles et fort//


	// Traitement cas C----------------------------

	ResC1 = C1 | C2;
	ResC2 = C1 & C2;

	printf ("Traitement cas C \n");
	printf ("ResC = %X  OU %04X =  %04x \n",C1, C2, ResC1);
	printf ("ResC = %X  ET %04X =  %04x \n",C1, C2, ResC2);

	//dans le printf il manque les symbole && et || pour afficher les bonne valeurs//


	// Traitement cas D---------------------------------

	ResD1 = D1 / D2;
	ResD2 = D1 % D2;

	printf ("Traitement cas D \n");
	printf ("Division de %4d par %4d = %4d Reste = %4d \n",D1, D2, ResD1, ResD2);
	//dans le printf il manque les symbole //

  return(0);
}
