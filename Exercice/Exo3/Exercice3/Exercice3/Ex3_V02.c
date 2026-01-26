//-----------------------------------------------------------------------------------//
// Nom du projet 		: Exercice3
// Nom du fichier 		: Exercice3
// Date de création 	: 10.11.2025
// Date de modification : 
//
// Auteur 				: Pouly (St. Pouly)
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

// Déclaration globales des constantes
// -----------------------------------

const short Vmax = 10000;
const short Vmin = -10000;
const double PI = 3.14159;


int main(void)
{
	// Déclarations locales des variables
	// ----------------------------------
	double Surface;
	double Rayon;
	char Lettre;

	short Tension = Vmax;
	unsigned int BigVal = 0X12345678;

	enum e_TypeFigure { CERCLE, ELLIPSE, CARRE, RECTANGLE, TRIANGLE};
	enum e_TypeFigure Figure = ELLIPSE;

	// Affectations
	// ------------
	//Tension = 9500;
	Lettre = 66; //0x42; //'B';
	Rayon = 8.5;
	Surface = (Rayon * 2 * PI) / 4;
    
	// Affichages pour controle
	printf ("Tension = %d \n", Tension);
 	printf ("BigVal = %lx \n", BigVal);
	printf ("Lettre  = %c \n", Lettre);
	printf ("Figure = %d \n", Figure);
	printf ("Rayon = %8.3f Surface = %8.3f \n", Rayon, Surface);  //8.3 = (8= nbr de digit qui doivent etre affiché(totalité) )(3 = 3schiffre après la virgule)

  return(0);
}
