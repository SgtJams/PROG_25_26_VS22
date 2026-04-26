// -----------------------------------------------------------------------------------//
// Nom du projet 		: Ex17
// Nom du fichier 		: Ex17.c
// Date de création 	: 26.04.2026
// Date de modification : 
//
// Auteur 				: Pouly (St. Pouly)
//                       
//
// Description          : 			  
//----------------------------------------------------------------------------------//
#include <stdint.h> // uniformation du type entier 
#include <stdio.h>

//-- Lib perso --//
#include "Prototypes.h"

// Definition de S_DefSegment
typedef struct S_DefSegment
{
	char TypeInfo;

	union
	{
		struct
		{
			int P1X;
			int P1Y;
			int P2X;
			int P2Y;
		};

		struct
		{
			int CentreX;
			int CentreY;
			int longeur;
			double angle;
		};
		
	};

};

struct S_DefSegment DefSeg1;
struct S_DefSegment DefSeg2;

// Definition de S_Frame
typedef struct S_Frame
{
	char STX : 3;
	short Code : 13;
	int Datas : 32;
	short CRC : 16;
};

struct S_Frame Frame;


// Definition de U_Frame
 
typedef union U_Frame
{
	unsigned char TabAnalyse[64];
};

union U_Frame Frame1;
union U_Frame Frame2;

// Fonction ShowSeg
void ShowSeg(struct S_DefSegment *ptS_DefSegment)
{
	if (DefSeg1.TypeInfo == 'R')
	{
		printf("TypeInfo = %c Pos1X = %d Pos1Y = %d Pos2X = %d pos2Y = %d \n", DefSeg1.TypeInfo, DefSeg1.P1X, DefSeg1.P1Y, DefSeg1.P2X, DefSeg1.P2Y);
	}
	else if (DefSeg2.TypeInfo == 'P')
	{
		printf("TypeInfo = %c CentreX = %d CentreY = %d Longeur = %d Angle = %f \n", DefSeg2.TypeInfo, DefSeg2.CentreX, DefSeg2.CentreY, DefSeg2.longeur, DefSeg2.angle);
	}
};

// Fonction ShowFrame
void ShowFrame(union U_Frame * ptS_Frame)
{
	if ()
	{
		printf("TypeInfo = %c Pos1X = %d Pos1Y = %d Pos2X = %d pos2Y = %d \n", DefSeg1.TypeInfo, DefSeg1.P1X, DefSeg1.P1Y, DefSeg1.P2X, DefSeg1.P2Y);
	}
	else if ()
	{
		printf("TypeInfo = %c CentreX = %d CentreY = %d Longeur = %d Angle = %f \n", DefSeg2.TypeInfo, DefSeg2.CentreX, DefSeg2.CentreY, DefSeg2.longeur, DefSeg2.angle);
	}
};


// Programme principal
int main (void)
{
	char UserAnswer;

	// Variables pour test A
	

	// Variables pour test B
	

	// A adapter !!!
	printf("Ex17  Steeve Pouly \n");

	do {
		printf("Test A ou B, Q pour Quitter \n");
		scanf_s("%c%*c", &UserAnswer, 2);
		
		switch (UserAnswer) {
			case 'A':
			case 'a':
				printf("TestA:  \n");
				// Initialisation champ par champ
				DefSeg1.TypeInfo = 'R';
				DefSeg1.P1X = 20;
				DefSeg1.P1Y = 25;
				DefSeg1.P2X = 150;
				DefSeg1.P2Y = 170;

				DefSeg2.TypeInfo = 'P';
				DefSeg2.CentreX = 20;
				DefSeg2.CentreY = 25;
				DefSeg2.longeur = 120;
				DefSeg2.angle = 44.5;



				// Appel des fonctions pour affichage
				ShowSeg(&DefSeg1);
				ShowSeg(&DefSeg2);

			break;

			case 'B':
			case 'b':
				printf("TestB:  \n");
				Frame1.STX = 3;
				Code = 0x123;
				Datas = 0x12345678;
				CRC = 0xACDC;

				
				Frame2.STX = 3;
				Code = 0x124;
				Datas = 0x10203040;
				CRC = 0xABEF;
				

				// Appel des fonctions pour affichage

				
			break;



		} // end switch
	
	} while (!(UserAnswer == 'Q' || UserAnswer == 'q'));

	return (0);
}