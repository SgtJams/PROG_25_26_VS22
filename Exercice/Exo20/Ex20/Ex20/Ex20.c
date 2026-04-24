// ---------------------------------------------------------------------------------- -//
// Nom du projet 		: Ex20
// Nom du fichier 		: Ex20.c
// Date de création 	: 25.01.2026
// Date de modification : 
//
// Auteur 				: Pouly (St. Pouly)
//                       
//
// Description          : 
//
//
// Remarques :            lien pour la table ASCII :
// 						  -> http://www.asciitable.com/
// 						  
//----------------------------------------------------------------------------------//

// Suppression avertissement C4996
#define _CRT_SECURE_NO_WARNINGS		//pour utlisisation compilateur visualstudio permet d'ignorer certain warning//

#include <stdio.h>	// pour fopen, fprintf

#define TAILLE_TB 40

int main(void)
{
	//-- Declaration Variables --//
	char chaine[TAILLE_TB];
	char chaine2[TAILLE_TB];

	FILE *fp1;						// Descripteur de fichier , FILE*STREAM (pointeur)
	char *FileName = "Ex20.txt";	// Nom du fichier

	//-- 1ère phase ouverture et écriture --//
	// ouverture pour écriture séquentielle //
	/*fp1 = fopen(FileName, "w");

	fprintf (fp1, "Fichier %s \n", FileName);
	fprintf (fp1, "Ex20 Pouly Steeve \n");	// A adapter s.v.p. //
	fprintf (fp1, "%d\n",1235);
	fprintf (fp1, "%f\n", 521.130000);

	fclose (fp1); // fermeture du fichier*/
	
	//-- 2ème phase relecture --//
	fp1 = fopen(FileName, "r");

	// Sorte de pause
	fgets(&chaine[0], TAILLE_TB, fp1);

	fscanf(fp1,"%s", &chaine2[0]);

	printf ("Enter pour terminer \n");

	fclose(fp1); // fermeture du fichier

	return (0);
}
