//-----------------------------------------------------------------------------------//
// Nom du projet 		: 
// Nom du fichier 		: 
// Date de création 	: xx.xx.2016
// Date de modification : 08.11.2024
//
// Auteur 				: MBZ (Mohamad Bilal Zitouni )
//                        Philou (Ph. Bovey)
//
// Description          : 
//
//
// Remarques :            lien pour la table ASCII :
// 						  -> http://www.asciitable.com/
// 						  
//----------------------------------------------------------------------------------//

#include <stdio.h>	// pour usage printf
#include <stdint.h> // uniformation du type entier 
#include <math.h>

enum e_Typefigure { cercle, ellipse, carre, rectangle, triangle, };
// Déclaration globales des constantes
// -----------------------------------
const short VMAX = 1000;
const short VMIN = -1000;
const double PI = 3.14159;
int main(void)
{
	// Déclarations locales des variables
	// ----------------------------------
	double Surface, rayon ;
	char lettre;


	// Affectations
	// ------------
	short tension = VMAX;
	int bigVal = 0x1E240;
    
	// Affichages pour controle
	printf ("Tension = %d \n", );
 	printf ("BigVal = %lx \n", );
	printf ("Lettre  = %c \n", );
	printf ("Figure = %d \n", );
	printf ("Rayon = %8.3f Surface = %8.3f \n", );

  return(0);
}
