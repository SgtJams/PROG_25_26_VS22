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

#define TAILLE_TB_RIUP 5

//-----------------Déclaration Structure global-----------------//

//-- Structure Codage --//
typedef struct
{
	char tbNRZ[8];
	char tnNRZi[8];
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

//-- Structure LoiOhm --//
typedef struct
{
	float    tbR[TAILLE_TB_RIUP];		//	tableau de 5 résitances 
	float	 tbI[TAILLE_TB_RIUP];		//	tableau 5 courant 
	float	 tbU[TAILLE_TB_RIUP];		//	tableau 5 tension 
	float	 tbP[TAILLE_TB_RIUP];		//  tableau 5 Puissance 
}str_tbInfoRIUP;

//-- Structure TrigoTR --//

typedef struct
{
	int8_t	adj, opp, hyp;
	float	alpha_radian;
	int16_t aplha_degre;
}str_trioTR;

//-----------------Prototypes-----------------//

//-- Prototype Codage --//
void Codage(int8_t tbbin[], S_tbnzr* ptS_tbnzr);

//-- Prototype ConvSJHMs --//
void ConvSJHMs(int time, S_convT *ptS_convT);

//-- Prototype LoiOhm --//
void LoiOhm(char indice, str_tbInfoRIUP* ptstr_tbInfoRIUP);

//-- Prototype TrigoTR --//
void TrigoTR(str_trioTR *ptstr_trioTR);

#endif // !FONCTIONS_H //