// -----------------------------------------------------------------------------------//
// Nom du projet 		: Ex17
// Nom du fichier 		: PROTOTYPES.h
// Date de création 	: 26.04.2026
// Date de modification : 
//
// Auteur 				: Pouly (St. Pouly)
//                       
//
// Description          : Regroupement de prototype de focntions
//----------------------------------------------------------------------------------//
#ifndef PROTOTYPES_H
#define PROTOTYPES_H

//-- déclaration structure Global --// 
typedef struct
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

}S_DefSegment;

//-- Prototypes --//

void ShowSeg(S_DefSegment*ptS_DefSegment);

void ShowFrame(union U_Frame*ptS_Frame);

#endif // !PROTOTYPES //
