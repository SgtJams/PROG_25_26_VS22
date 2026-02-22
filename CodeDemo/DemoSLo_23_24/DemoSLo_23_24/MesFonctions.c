#include "MesFonctions.h"


//-- déclaration --// 
int AdditionnerDeuxValeurs(int valeur1, int valeur2)        //add
{
	//-- déclaration de variable 
	int somme; 

	// instriction
	somme = valeur1 + valeur2; 

	return(somme);  // ou return somme; 
}



void FctDATA(short *ptDemo, int tailleTB) // adresse
{
		tailleTB = 100; 
		*ptDemo = 100; 		// valeur
}

void FctDemoStruct(str_structureDemo2 *pt_structureDemo, char *pt_valC)
{
	char demoC = 'A'; 
	
	//-- passage d'adresse --// 
	pt_structureDemo->ptChar = &demoC; 
	
	pt_valC = *pt_structureDemo->ptChar; 
	
	*pt_valC = pt_structureDemo->ptChar; 
	
}