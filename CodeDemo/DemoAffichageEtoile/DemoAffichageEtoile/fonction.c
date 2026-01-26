#include <stdio.h>

#include "fonctionsAffichageEtoiles.h"


//commentaire 
short AffTriangleAngleGH(char nbE)
{
	//déclaration 
	char ligne, colonne, nbETot = 0;


	for (colonne = nbE; colonne > 0; colonne--)
	{
		//Affichage d'une 'ligne
		for (ligne = 0; ligne < colonne; ligne++)
		{
			printf("*");
		}
		printf("\n");
		nbETot = nbETot + colonne;
	}

	return nbETot;

}