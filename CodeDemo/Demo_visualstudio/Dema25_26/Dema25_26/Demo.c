// ceci est un comentaire sur une ligne
/*
Ceci est un commentaire sur plusieur ligne
Ici doit ce trouver un cartouche (exemple dans onedrive/support de cours/canevas)

*/

//-----------------------------------------------------------------------------------//
// Nom du projet 		: Demo25_26
// Nom du fichier 		: demo.c
// Date de création 	: 29.09.2025
// Date de modification : xx.xx.20xx
//
// Auteur 				: Steeve.Pouly
//
// Version				: 0.1
//
// Description          : demo cours prog sur utilisation visualstudio
//
//
// Remarques :            lien pour la table ASCII :
// 						  -> http://www.asciitable.com/
// 						  lien pour la saisie de clavier avec getc & getchar pour ne pas
//                        avoir des erreurs d'interprétation
// 						  -> http://fr.openclassrooms.com/informatique/cours/utiliser-les-bonnes-fonctions-d-entree
// 						  lien vers différents
// 						  -> http://fr.wikipedia.org/wiki/String.h
//----------------------------------------------------------------------------------//
//-- librairie standard --//
#include <stdio.h>  //-- <> utilisé pour le standard --//
#include <stdint.h>
#include <stdbool.h>
//-- librairie perso --//
#include "Convertion.h" 

//-- définition --//
#define FOIX_2 2 //--défine n'occupe pas de place mémoire --//
#define PI 3.14
#define TAILLE_TB 10
//-- constante globale --//


//--programme principale => main = fonction--//
//--nom de la fct: main
//--paramètre entrée: -
//--paramètre sortie: - (obliger de mettre void)
//--paramètre IN-OUT: -
//--description: programme principal =>
void main()
{
    //-- constante --//
    //-- réel
    //-- a éviter -> si possible -> raison prend de la place dans la gestion de la mémoire --//
    /*const float PI_v1 = 3.14;
    const float FOIX_2_2 = 2;*/

    //-- déclaration des variables --//
    //-- Entier standard
        //--- Signé (+/-) 

    char tbExemple[TAILLE_TB]; // 10 octet 10cases soit 0 à 9 
    char tbExemple2[TAILLE_TB] = { 0 }; // 10 octet 10cases soit 0 à 9  mais tous est a zéro
    char i;
    char varI;   // 1 octet
    short varJ; // 2 octets
    int VarK;     // 4 octets         int = long
    long long varL;  // 8 octets

        //--- Non Signé (+) 
    unsigned char varM;   // 1 octet
    unsigned short varN; // 2 octets
    unsigned int VarO;     // 4 octets         int = long
    unsigned long long varP; // 8 octets
       
    //-- Entier Normalisé --> librairie
        //--- Signé (+/-)
    int8_t varA;	// 1 octet
    int16_t varB;	// 2 octets 
    int32_t varC;	// 4 octets			int = long 
    int64_t varD;	// 8 octets 

        //--- Non signé (+) 
    uint8_t varE;	// 1 octet
    uint16_t varF;	// 2 octets 
    uint32_t varG;	// 4 octets			int = long 
    uint64_t varH;	// 8 octets 

    //-- Type entier type booléen --//
    bool Vars; // 1 octet

    printf("taille d'un booléen %d [o]", sizeof(bool)); //commande pour connaitre la taile d'un type//

    //-- définition d'un type énumération ->e_MachineEtat -> local --//
                //ETAT1 = 0,ETAT2 = 20,ETAT3= 21}
    enum e_MachineEtat { AVANCE, ETAT2RECULE = 20, TOURG, TOURD, ROTATION  };//définition des champs//
    enum e_MachineEtat robot = AVANCE;

    //-- Utilisation d'un énumération globale -> e_FORME --//
    e_FORME formeGeo = RECTANGLE;

    //--- Reel 
    float varQ; 	// 4 octets	
    double varR;	// 8 octets 

    //--Reel
    float rayon_m = 10;     //_m => mètre
                            //--cast implicite -> entier -> reel --//
    float perimetre1_m; float perimetre2_m; float perimetre3_m;

    //--une instruction est composé d'opérandes (variable) et d'opérateur (signe) --//
    //--perimetre_m = 2 * PI_v1 * rayon_m; //-- 2 est vue comme une constante (hardcodage)--//
    //--cast => (type)variable
    perimetre1_m = (float)FOIX_2 * (float)PI * rayon_m; 
    
    //-- attention au cast implicite 
    perimetre2_m = (float)(FOIX_2 * PI * rayon_m); //-- met la valeur du résultat en float --//

    //-- appel de fct
    // -- calcul perimetre ccercle
    perimetre3_m = CalculPerimetreCercle(rayon_m);


    //--> printf
    printf("%f \r\n %f \n %f", perimetre1_m, perimetre2_m, perimetre3_m); //-- Pour afficher du texte, utilisé "" pour obtenir le code ascii --//-- "%f",tu recois un parametre de convertion float pour lier la variable a l'affichage --// --\r pour le retour a la ligne(retour chariot)
 

    //-- condition -> expression
    varI = 'C';
    varJ = 10;
    //-- condition prioritaire
    if (varI > varJ)
    {
        //-- condition secondaire
        if (0);
        varJ++;     //post incrémentation
        Vari = varJ;
        --varJ;     //pré incrémentation
        varj += 1; //varJ = varJ+1
    }
    else if (varI == varJ)
    {

    }
    else
    {
        varJ--;
    }


    //-- machine d'état --//
    switch (formgeo)
    {
    case Cercle:
        //-- instruction 1...
        //-- instruction 2...
        break;

    case triangle:
        break;

    case rectangle:     //ici ont va faire les deux case à la suite//
    case carré:
       //-- instruction 1...
       //-- instruction 2...
        break;

    default:
        break;
    }
        
    //-- itération --//

    //--> 1 condition -> 2 execution si vrai
    //-- boucle infinie
   // while (1){}

    i = 0;
    j = 100;

    while (i < j) 
    {
        i++;
        j--;
    }

    //-- au minimum une fois dans la boucle
    i = 0;
    j = 100;
    do
    {
        i++;
        j--;
    } while (i < j);

        //on réalise un nobre d'itération connue, on pense au compteur//
        //-- boucle à l'infini --//
        for (; ; )        //il y a 3 parametre
        {
        }
        //->1) initialisation de plusieur variables 2) condition 3) 
        for (int i = 0, j = 100;i < j ; i++, j-- )     //il y a 3 paramètres attention int i c'est du C++
        {
         }

        // -> tableau 

        printf("\n-> taille d'un tableau %d [o]", sizeof(tbExemple));

        // -> pour tester 10 case -> soit < 10 ou <= 9
        for (i = 0; i < 10; i++)
        {
            tbExemple[i] = 0X41 + i;
        }
        i = tbExemple[9]; // dans i ont met la valeur compté dans le tableau
}
