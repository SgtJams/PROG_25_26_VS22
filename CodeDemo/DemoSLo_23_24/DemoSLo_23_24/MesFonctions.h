//-----------------------------------------------------------------------------------//
// Nom du projet 		: DemoSlo23_24
// Nom du fichier 		: MesFonctions.h
// Date de création 	: 21.09.2023
// Date de modification : 12.10.2023
//
// Auteur 				: Philou (Ph. Bovey)
//
// Description          : fichier source démo SLO
//
// Remarques 			: 
//						
// Théorie 				: voir le chapitre 1 / 2 / 3 / 4 
//----------------------------------------------------------------------------------//

#ifndef MES_FONCTIONS_H  // généralement nom du fichier headerFile 
#define MES_FONCTIONS_H

//-- déclaration définition 


//-- EXEMPLE CI-DESSOUS NON VALIDE => Expérimenté par EDO => A NE PAS FAIRE  
/*
#define ETAT_INIT 1
#define ETAT_ATTENTE 2
#define ETAT_EXECUT 3

typedef enum { ETAT_INIT, ETAT_ATTENTE, ETAT_EXECUT } e_ETAT;
*/

//-- déclaration énumération => vision dans différents fichiers sources --// 
typedef enum { IDLE, CANCEL, RESET } e_Etat2; 

//-- déclaration d'un type structure
typedef struct 
{
	char *ptChar; 
	double dataReel; 
	e_Etat2 monEnum; 
} str_structureDemo2; 

typedef struct
{
	char A; 
	short B; 
	int C; 
} str_demo3;

typedef struct
{
	str_demo3 A1; 
	str_demo3 A2; 
} str_demo4;

typedef struct  			
{
	char start:1; 
	char data; 
	char parite:1; 
	char stop:1; 
}str_exempleTrame; 




typedef union
{
	// 4 octets
	struct
	{
		char start;
		char data;
		char parite;
		char stop;
	}str_exempleStr; 
	int envoiReception; 	
} u_demoTrame1; 
	



//-- déclaration de prototype --// 
int AdditionnerDeuxValeurs(int valeur1, int valeur2); 

void FctDATA(short *ptDemo, int tailleTB); 


#endif