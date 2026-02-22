// ---------------------------------------------------------------------------------- -//
// Nom du projet 		: Ex14
// Nom du fichier 		: CalcSec.h
// Date de création 	: 06.02.2026
// Date de modification : 
//
// Auteur 				: Pouly (St. Pouly)
//                       
//
// Description          : Affiche les seconde avec des heure et des minutes données
//
//
// Remarques :            lien pour la table ASCII :
// 						  -> http://www.asciitable.com/
// 						  
//----------------------------------------------------------------------------------//
#ifndef LIBEGESTTIME_H
#define LIBEGESTTIME_H

//-- Déclaration Structure global S_hms --//

typedef struct
{
	short  NmbrH;
	short  NmbrM;
	short  NmbrS;

} S_hms;

//-- Déclaration Structure global S_Hms_D ResD --//

typedef struct
{
	short NbSec;
	short TabHMS[3];

} S_Hms_D;

//--------------------Prototype----------------------------//

//-- Prototype CalcSec --//
int CalcSec(int nbrH, int nbrM);


//-- Prototype GetHMS_B --//
short int GetHMS_B(int nbrSec, short int* nbrH, short int* nbrM);


//-- Prototype GetHMS_C --//
void GetHMS_C(int nbrSec, S_hms* ptS_hms);

//-- Prototype GetHMS_D --//
void GetHMS_D(S_Hms_D* ptS_Hms_D);

#endif // !LIBEGESTTIME_H //