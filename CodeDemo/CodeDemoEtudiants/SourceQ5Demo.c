//-----------------------------------------------------------------------------------//
// Nom du projet 		: Correction Groupe Q5 
// Nom du fichier 		: Source.c
// Date de création 	: 23.11.2023
// Date de modification : xx.xx.20xx
//
// Auteur 				: KSA
//                        JBN
//						  ACL
//						  TMK
//                        KGR
//
// Version 				: 0.1
//
// Description          : Voir donnée test 1 - PROG question 5 
//
//
// Remarques 			: code démo implémenté sur VS2022  
//						  le caractère '1' ait une taille de 4 octets -> voir 
//						  instruction ligne 38 
//						  La chaîne de caractère "1" (attention ne pas oublier le 
//						  '\0' a une taille de 2 octets -> voir instruction  ligne 39         
// 						  
//----------------------------------------------------------------------------------//
#include<stdio.h>
#include<stdio.h>
#include<stdbool.h>

void main(void)
{
	float a = 0.1;
	int b = 0;
	signed int la = -128;
	b = '1';
	printf("taille en octet de bool :%d\n", sizeof(bool));
	printf("taille en octet de -128 :%d\n",sizeof(-128));
	printf("taille en octet d'un float:%d\n", sizeof(a));
	printf("taille en octet de '1': %d \n", sizeof('1'));
	printf("taille en octet de "1": %d \n", sizeof("1"));
	printf("taille en octet de 1 chaine :%d\n", sizeof("2431"));
	printf("taille en octet de double:%d\n", sizeof(double));
	printf("taille en octet de signed int:%d\n", sizeof(signed int));
}


