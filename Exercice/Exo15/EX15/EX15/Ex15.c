// ---------------------------------------------------------------------------------- -//
// Nom du projet 		: Ex15
// Nom du fichier 		: Ex15.c
// Date de création 	: 16.03.2026
// Date de modification : 
//
// Auteur 				: Pouly (St. Pouly)
//                       
//
// Description          : Transformation valeur numérique en valeur binaire en Hexa
//
//
// Remarques :            lien pour la table ASCII :
// 						  -> http://www.asciitable.com/
// 						  
//----------------------------------------------------------------------------------//
#include <stdio.h>	// pour usage printf
#include <stdint.h> // uniformation du type entier 

//-- lib perso --//

//-- Declaration local Union --//
union U_tempUnion
{
	unsigned char TabBin[8];  // on met la variable en unsigned car le compilateur ne vas pas interpréter la même valeur du char et du double ATTENTION!!!!! il faut qu'il puisse voir depuis 0-255//
	double UserAnswer;
};

int main(void)
{
	//-- Variable --//
	union U_tempUnion Temp;
	char Compt = 0;

	//-- Affichage debut texte console --//
	printf("Ex15  Steeve Pouly \n");

	do {
		Compt++;

		printf("Entrez une valeur double (0.0 pour Quitter) \n");
		scanf_s("%lf", &Temp.UserAnswer);

		printf("%x %x %x %x %x %x %x %x \n", Temp.TabBin[7], Temp.TabBin[6], Temp.TabBin[5], Temp.TabBin[4], Temp.TabBin[3], Temp.TabBin[2], Temp.TabBin[1], Temp.TabBin[0]);

	} while (!(Temp.UserAnswer == 0.0 || Compt == 5));

	return(0);
}