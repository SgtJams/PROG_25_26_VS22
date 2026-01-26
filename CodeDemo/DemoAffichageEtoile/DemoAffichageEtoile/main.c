//-- commentaires 

//-- libraire
#include <stdio.h>
#include <stdlib.h>

#include "fonctionsAffichageEtoiles.h"

//prototype 

void main() 
{
	//déclaration 
	char nbEtoile = 0; 
	short nbEtoileAffichee; 

	//msg user
	printf("EXO AFFICHAGE ETOILE \n");    // \n => retour à la ligne

	printf("SVP nb etoiles : ");

	scanf("%d", (int*)&nbEtoile);

	// appel de fonction 
	nbEtoileAffichee = AffTriangleAngleGH(nbEtoile);

	printf("valeur nb etoiles affichees : %d \n", nbEtoileAffichee); 

	system("pause");
}


