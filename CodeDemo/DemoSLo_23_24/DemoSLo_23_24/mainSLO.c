//-----------------------------------------------------------------------------------//
// Nom du projet 		: DemoSlo23_24
// Nom du fichier 		: mainSLO.c
// Date de création 	: 21.09.2023
// Date de modification : 12.10.2023
//
// Auteur 				: Philou (Ph. Bovey)
//
// Description          : fichier source démo SLO
//
// Remarques 			: lien pour la table ASCII :	-> http://www.asciitable.com/
//						  lien pour la fct sizeof : 	-> https://www.geeksforgeeks.org/sizeof-operator-c/
//						  								ATTENTION -> sizeof est une fct, elle retourne quelque chose 
//						
// Théorie 				: voir les chapitres 1 / 2 / 3 / 4 / 5
//----------------------------------------------------------------------------------//
//-- délcaration des libraires systèmes --// 
#include <stdio.h>				// lib standard pour les entrée sortie 
#include <stdint.h> 			// lib standard sur les entiers 
#include <string.h>				// lib pourt la gestion de chaine de caractère

//-- déclaration des librairies personnelles --// 
#include "MesFonctions.h"
#include "demo.h"

//-- déclaration globale d'une énumération (type) => vision uniquement dans ce source --// 
enum e_Etat1 {INIT = 10, EXECUT = 100, WAIT}; 

//-- déclaration d'une structure globale uniquement par rapport au fichier main.c 
struct str_demoStructure 
{
	char valC; 						// 1 octet 
	short dataNum; 					// 2 octet 
	int tbExEntier[5];				// 20 octet  
	float datareel; 				// 4 octets   => 27 octets 
}; 

//-- déclaration d'une union 
union u_demoUnion
{
	char valA; 							// 1 octet 
	short valB; 						// 2 octets 
	int valC; 							// 4 octets 
	struct str_demoStructure maStr;     // 27 octets 
	float tbDemo[3]; 					// 12 octets => 27 octets 
}; 


// fonction main -> point d'entreé 
void main()
{
	//-- déclaration variable 
	int resultat;		// pour la sortie fct addition 
	int val1 = 1, val2 = 2, val3 = 5;		// valeur entree fct addition
	int x, y; 
	int comparChaineCar; 
	
	char tbXY[2][3] = {{0, 0, 0},
					   {0, 0, 0}}; 
	
	char car = 'A';
	char *car2; 	
	char demoChar = 0; 
	char tb1[] = "Bonjour SLO1"; 
	char tb2[100]; 
	
	char tb1a[] = "SLO1"; 
	char tb2a[] = "SLO1"; 
	
	
	
	short tbDemo[2] = { 0, 0 };        	// char tbDemo[4]; 			// tableau de 4 octets => long tbDemo[1]; 
	short tbDemo1[] = {0, 0, 0}; 		// taille en octet 3 x 2 octets => 6 octets 
	//short tbDemo1[10] = {0, 0, 0}; 		// taille tableau 10 x 2 octets => 20 octets -> initialisation des 3 premières valeurs 
	short tbDemo2[100] = { 0 }; 		// Normalement toutes les casses sont à zéro. 
	
	//-- déclaration pointeur --// 
	short *ptTableau; 
	
	unsigned int nbCaractere; 
	//-- déclaration d'une variable de type struct 
	// struct type_de_la_structure_a_utiliser variable_de_la_structure 
	struct str_demoStructure maStructure; 
	
	str_demo4 maStructureImbriquee; 
	
	//-- déclaration union  
	union u_demoUnion exempleUnion; 
	
	u_demoTrame1 exempleTrame1; 
	
	exempleTrame1.str_exempleStr.start = 1; 
	exempleTrame1.str_exempleStr.data = 0xFA; 
	exempleTrame1.str_exempleStr.parite = 0; 
	exempleTrame1.str_exempleStr.stop = 0; 
	
	//-- appel fonction 
	// fonctionEnvoi(exempleTrame1.envoiReception);  // utilisation union pour creer une variable 
	// exempleTrame1.envoiReception = fonctionReception(); 
	// exempleTrame1.data; 
	
	// accès à l'adresse la première case tableau 
	ptTableau = &tbDemo2[0]; 	
	ptTableau = &tbDemo2[4]; 			// ptTableau = ptTableau + 4; 	ptTableau += 4; 
	
	tbDemo2[0] = 0;  
	tbDemo2[1] = 0;
	
	// accès à la structure 
	maStructure.valC = 'A'; 
	maStructure.tbExEntier[4] = 42; 
	
	tbDemo[0] = maStructure.dataNum; 
	
	maStructureImbriquee.A1.A = 'a'; 
	maStructureImbriquee.A1.B = 100; 

	// maStructureImbriquee.A1 = { 'a', 1, 2 }; // , 'b', 3, 4

	exempleUnion.valA = 'C'; 
	
	//-- itération -> boucle for : connaitre le nombre de cases --// 
	for(val1 = 0; val1 < NB_CASE_TB; val1++)
	{
		tbDemo2[val1] = 0; 
	}
	
	for(x = 0, y = 0 ; x < 3; x++)
	{
		for(; y < 2; y++) 
		{
			tbXY[y][x] = 10; 
		}
	}
	
	
	// utilisation d'énumération avec initialiation
	enum e_Etat1 maMachineEtat = INIT; 
	e_Etat2 maMachineEtat2 = IDLE; 
	
	int8_t demo = 7;  // écriture en hexa 0x0A; 0xA;  0xFA 
					  // écriture en octal 07 
					  // écriture en binaire : 0b1010  
	
	//float demo2 = 3.14; 
	
	resultat = sizeof(demo);		// paramètre d'entrée -> nom d'une variable / constante ; une constante numérioque ; un type 
	resultat = sizeof(union u_demoUnion); // permet de déterminer la taille mémoire de l'union 


	// -- initialiation 
	val1 = val2 +1 + val3; 


	//appel de fonction 
	printf("hello SLO 1"); // affichage d'une chaine de caractère 
	printf("%c", car);
	//printf('A');    // putc / putchar ; 

	//appel de la fct addition 
	// int AdditionnerDeuxValeurs(int valeur1, int valeur2); 
	resultat = AdditionnerDeuxValeurs(val1, val2);

	// condition ou test 
	if(val1 != val2) { /* instruction */ }  // ATTENTION A NE PAS FAIRE 
	
	
	if(val1 != val2) 
	{
		if(maMachineEtat == EXECUT)
		{
			
		}
	}
	
	
	// condition 1 -> testée -> si fausse -> condition 2 
	// -> si vrai uniquement condition 1 
	if(val1 != val2)
	{
		val3 = val1; 
	}
	// condition 2 -> si fausee -> condsition 3 
	else if (val1 <= val2)
	{
		val2 = val3; 
	}
	// condition 3-> 
	else 
	{
		val3 = val2; 
	}

	if(val1 != val2)
		val3 = val1; 

	if (val1 <= val2)
		val2 = val3; 

	if((val1 != val2) && (val1 <= val2))
	{
		
	}

	//-- structure d'une machine d'état 
	switch(maMachineEtat)
	{
		case INIT: 
			break; 
			
		case EXECUT: 
			break; 	
		
		case WAIT: 
			break; 		

		default :
			break; 
	}
	
	
	
	//-- appel de fct avec un pointeur
	FctDATA(&tbDemo[0], val1);   // a remplacer 10 par une variable ou define 
	
	//char * strcpy (char * tb2, const char *tb1 );  // prototype 
	
	//-- copier de tableaux -> chaine de caractère --// 
	strcpy(&tb2[0], &tb1[0]); 
	
	//-- assembler deux chaines de caractères -> avec un seul /0 
	strcat(&tb2[0], &tb1[0]);  
	
	//-- comparaison caractère par caractère -> lié à la table ascii
	comparChaineCar = strcmp(&tb2a[0], &tb1a[0]); 
	
	//-- taille d'une chaine de caractère -- 
	comparChaineCar = strlen(&tb1[0]); 
	
	//-- recherche de chaine de chaine dans une chaine de caractère
	car2 = strstr(&tb1[0], "o"); 
	
	
}