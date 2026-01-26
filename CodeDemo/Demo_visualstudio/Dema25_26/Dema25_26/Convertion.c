
//-----------------------------------------------------------------------------------//
// Nom du projet 		: Demo25_26
// Nom du fichier 		: convertion.c
// Date de création 	: 03.11.2025
// Date de modification : xx.xx.20xx
//
// Auteur 				: Steeve.Pouly
//
// Version				: 0.1
//
// Description          : demo cours prog sur utilisation visualstudio
//
//
// Remarques :            
//----------------------------------------------------------------------------------//

#define _USE_MATH_DEFINES

//-- librairie standard --//
#include <math.h>  //-- <> utilisé pour le standard --//

//-- librairie perso --//
#include "Convertion.h" 


//--fonction--
//---------------------------------------------------------------------------------//
//-- nom fct : CalculPerimetreCercle
//--paramètre entrée: rayon_m (reel)
//--paramètre sortie: perimetre_m -> (reel)
//--paramètre IN-OUT(pointeur): -
//--description : calculer le perimetre d'un cercle
//---------------------------------------------------------------------------------//
float CalculPerimetreCercle(float rayon_m)
{
    //--declaration cst --//
    const float DEUX_PI = 2 * M_PI;

    //-- declaration variable --//
    float perimetre_m;

    //--calcul perimetre --//
    perimetre_m = DEUX_PI * rayon_m;

    //-- retour perimetre --//
    return (perimetre_m);
}