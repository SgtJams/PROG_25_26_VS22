// Canevas  Ex 12D  C. HUBER 

#include <stdio.h>
#include <string.h>	// pour strcpy

// typedef pour Q1
typedef struct {
	int nombre;
	short int TabQ1[4];
} S_dataQ1;

// typedef pour Q2
typedef struct {
	unsigned char B;
	unsigned char G;
	unsigned char R; 
} S_RGB;

typedef struct {
	char colorName[12];
	struct { 
		     unsigned int codeRGB;
	         S_RGB struRGB;
	       } dataColor;
} S_DefColor;

// Fonction SetColor 
void SetColor(S_DefColor *pDefColor, char *ColorName, S_DefColor dCol) 
{

}

// Fonction DispColor 
void DispColor(S_DefColor *pDefColor) 
{

}





int main (void)
{
	// Q1
	// a) Déclaration de TabStru1 (5 éléments du type S_dataQ1)
	

	// Q2
	// a) Déclaration de TabStru2 (3 éléments du type S_DefColor)
	//    Declaration de Rouge du type S_RGB  init avec   0,   0, 255
	//    Declaration de Green du type S_RGB  init avec   0, 255,   0	
	//    Declaration de Bleu  du type S_RGB  init avec 255,   0,   0

	// Affichage du titre
	printf("Exercice 12D, Prenom Nom \n");

		

	// Test Q1
	printf("*** Test Q1 **** \n");
	// b) Attribution de la valeur 431 au champ nombre du 1er élément du tableau TabStru1
	
    // c) Attribuez la valeur 178 au 2ème élément du champ TabQ1 pour le 3ème élément tableau TabStru1
	
	// d) Affichez la valeur du champ nombre du 1er élément et 
	//    la valeur du 2ème élément du champ TabQ1


	// Test Q2
	printf("*** Test Q2 **** \n");
	// pour les 3 éléments de TabStru2
	// appel de SetColor (1er  élément, "Rouge", Rouge)
	// appel de SetColor (2eme élément, "Vert", Green)
	// appel de SetColor (3eme élément, "Bleu", Bleu)

	// pour les 3 éléments de TabStru2
	// appel de DispColor avec l'adresse du 1er, 2ème et 3ème élément

	return (0);
}