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

//-- Definition de S_Frame en Local --//
struct S_Frame
{
	char STX : 3;
	short Code : 13;
	int Datas : 32;
	short CRC : 16;
};

//-- Definition de U_Frame en Local--//
union U_Frame
{
	struct S_Frame Frame;
	unsigned char *TabAnalyse; //Création d'un pointeur sur le tableau//
};

//-- Fonction ShowSeg --//
void ShowSeg(S_DefSegment *ptS_DefSegment)
{
	if (ptS_DefSegment->TypeInfo == 'R') //-> indique que le pointeur pointe dans la structure//
	{
		printf("TypeInfo = %c Pos1X = %d Pos1Y = %d Pos2X = %d pos2Y = %d \n", ptS_DefSegment->TypeInfo, ptS_DefSegment->P1X, ptS_DefSegment->P1Y, ptS_DefSegment->P2X, ptS_DefSegment->P2Y);
	}
	else if (ptS_DefSegment->TypeInfo == 'P')
	{
		printf("TypeInfo = %c CentreX = %d CentreY = %d Longeur = %d Angle = %.2f \n", ptS_DefSegment->TypeInfo, ptS_DefSegment->CentreX, ptS_DefSegment->CentreY, ptS_DefSegment->longeur, ptS_DefSegment->angle);
	}
};

//-- Fonction ShowFrame --//
void ShowFrame(union U_Frame *ptS_Frame)		
{

	//--Declaration variable fonction --//
	size_t i;

	//-- Affichage Taille S_Frame --//
	printf("Taille S_Frame = %zu \n", sizeof(struct S_Frame));		//Syzeof Donne le nbr d'octet du type, zu est pour l'affichage//

		//-- Affichage Frame1 --//
	if (ptS_Frame->Frame.Code == 0x123)
	{
		printf("STX = %d Code = %X Datas = %X CRC = %X \n", ptS_Frame->Frame.STX, ptS_Frame->Frame.Code, ptS_Frame->Frame.Datas, ptS_Frame->Frame.CRC);
	
		for (i = 0; i < sizeof(struct S_Frame); i++);
		{
			printf("%X", ptS_Frame->TabAnalyse[i]);
		}
	}	
			//-- Affichage Frame2 --//
	else if (ptS_Frame->Frame.Code == 0x124)
	{
		printf("STX = %d Code = %X Datas = %X CRC = %X \n", ptS_Frame->Frame.STX, ptS_Frame->Frame.Code, ptS_Frame->Frame.Datas, ptS_Frame->Frame.CRC);

		for (i = 0; i < sizeof(struct S_Frame); i++);
		{
			printf("%X", ptS_Frame->TabAnalyse[i]);
		}
	}
};

// Retour à l'alignement standard de 4 octets 
//#pragma pack(pop) // packing is 4 


//-- Programme principal --//
int main (void)
{
	//-- Variable Affichage --//
	char UserAnswer;

	//-- Variables pour test A --//
	S_DefSegment DefSeg1;
	S_DefSegment DefSeg2;

	//-- Variables pour test B --//
	union U_Frame Frame1;
	union U_Frame Frame2;

	// A adapter !!!
	printf("Ex17  Steeve Pouly \n");

	do {
		printf("Test A ou B, Q pour Quitter \n");
		scanf_s("%c%*c", &UserAnswer, 2);
		
		switch (UserAnswer)
		{
			//------ Partie A ------//
			case 'A':
			case 'a':
				printf("TestA:  \n");
				//-- Initialisation champ par champ --//
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

				//-- Appel des fonctions pour affichage --//
				ShowSeg(&DefSeg1);
				ShowSeg(&DefSeg2);

			break;
			//------ Partie B ------//
			case 'B':
			case 'b':
				printf("TestB:  \n");
				//-- Initialisation champ par champ --//
				Frame1.Frame.STX = 3;
				Frame1.Frame.Code = 0x123;
				Frame1.Frame.Datas = 0x12345678;
				Frame1.Frame.CRC = 0xACDC;

				Frame2.Frame.STX = 3;
				Frame2.Frame.Code = 0x124;
				Frame2.Frame.Datas = 0x10203040;
				Frame2.Frame.CRC = 0xABEF;
				
				//-- Appel des fonctions pour affichage --//
				ShowFrame(&Frame1);
				ShowFrame(&Frame2);
				
			break;

		} // end switch
	
	} while (!(UserAnswer == 'Q' || UserAnswer == 'q'));

	return (0);
}