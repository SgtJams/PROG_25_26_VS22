// Canevas  Ex 12c  C. HUBER 

#include <stdio.h>
#include <math.h>	// si besoin fonct math

// typedef pour Q1
typedef struct {
	int Champ1;
	short int Champ2;
	float Champ3;
	double Champ4;
} S_dataQ1;

// typedef pour Q3
typedef struct {
	int nombre;
	struct {
		short int Data0;
		short int Data1;
		short int Data2;
		short int Data3;
	} S4Datas;
} S_ItemQ3;

typedef struct {
	S_ItemQ3 Item1;
	S_ItemQ3 Item2;
	S_ItemQ3 Item3;
} S_DataQ3;



// typedef pour Q4
typedef struct {
	float Base;
	float Hauteur;
} S_dataQ4Don;

typedef struct {
	float Hypothenuse;
	float Surface;
} S_dataQ4Res;



// Fonction FoncQ4
// b) Réalisez la fonction FoncQ4 qui reçoit en paramètre une variable du type S_dataQ4Don
//    et retourne une variable du type S_dataQ4Res.
//    La fonction doit calculer l'hypoténuse et la surface du triangle.




int main (void)
{
	// Déclarations pour Q1
	S_dataQ1 StruQ1;			// fourni
	// a) Déclarez un pointeur pChamp2SQ1 et attribuez lui l'adresse du Champ2.
	
	
	 // structure pour Q2
	 struct DataQ2 {
		int   Val32;
		struct {short int Low;
				short int High; } couple;
	 } ;

    // Q2
	// a) Déclaration de ValS1 et ValS2
	
	
	// Q3
	// a) Déclaration variable StruQ3 du type S_DataQ3
	

	// Q4
	// a) Déclarez la variable DonQ4 du type S_dataQ4Don et attribuez 
	//    la valeur 2.8 pour la base et 3.5 pour la hauteur. 
	//    Déclarez encore la variable ResQ4 du type S_dataQ4Res
	

	// Affichage du titre
	printf("Exercice 12C, Prenom Nom \n");

	// Test Q1
	// b) Attribuez la valeur 2016 à la destination de pChamp2SQ1
	
	// c) Affichez pour contrôle en hexa, l'adresse du Champ2 et la valeur du pointeur 
	//    pChamp2SQ1. Afficher encore la valeur du Champ2 en utilisant la structure 
	

	// Test Q2
	// b) Affectation la valeur 0xE437 au champ Low et 0x00A3 au champ High de ValS1
	

	// c) Affectation de la valeur 123456 au champ Val32 de VAlS1
	
	// d) Copie de la valeur du champ Val32 de ValS1 dans le champ Val32 de ValS2
	
	// e) affichage pour controle
	

	// Test Q3
	// b) Attribution de la valeur 431 au champ nombre du 1er élément (Item1)
	//    de la structure StruQ3
	
	// c) Attribuez la valeur 178 à Data2 du 2ème élément de StruQ3 (Item2)
	
	// d) Affichez la valeur du champ nombre du 1er élément (Item1) 
	//    de la structure StruQ3 et la valeur Data2 du 2ème élément de StruQ3 (Item2)
	


	// Test Q4
	// c) Appelez la fonction et affichez la valeur de la base, de la hauteur,
	//    de l'hypoténuse et de la surface.
	

	return (0);
}