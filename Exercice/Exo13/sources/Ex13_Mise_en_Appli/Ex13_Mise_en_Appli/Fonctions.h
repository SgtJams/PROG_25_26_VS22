//-----------------------------------------------------------------------------------//
// Nom du projet 		: EX13_Mise_en_appli
// Nom du fichier 		: Fonctions.h
// Date de création 	: 23.02.2026
// Date de modification : xx.xx.20xx
//
// Auteur 				: Pouly Steeve
//
// Description          : Création de fonctions selon plusieur élements donnés.
//
//
// Remarques			: lien pour les lib standard:
//						-> https://www.rocq.inria.fr/secret/Anne.Canteaut/COURS_C/annexe.html
//						-> 
//
//----------------------------------------------------------------------------------//

#ifndef FONCTIONS_H
#define FONCTIONS_H

//-----------------Déclaration Structure global-----------------//

//-- Structure Codage --//
typedef struct
{
	char tbNRZ[8];
	char tnNRZi[9]; {X};//////////////////////////////////////////////////////////////////////

} S_tbnzr;

//-- Structure ConvSJHMs --//
typedef struct
{
	short  NmbrSem;
	short  NmbrJ;
	short  NmbrH;
	short  NmbrM;
	short  NmbrS;

} S_convT;


//-----------------Prototypes-----------------//

//-- Prototype Codage --//

void Codage(int8_t tbbin[], S_tbnzr* ptS_tbnzr);

//-- Prototype ConvSJHMs --//
void ConvSJHMs(int time, S_convT *ptS_convT);

//-- Prototype LoiOhm --//
void LoiOhm();

//-- Prototype TrigoTR --//
void TrigoTR();

#endif // !FONCTIONS_H //