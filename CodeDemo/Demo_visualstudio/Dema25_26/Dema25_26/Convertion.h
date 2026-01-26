//-----------------------------------------------------------------------------------//
// Nom du projet 		: Demo25_26
// Nom du fichier 		: convertion.h
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
//-- librairie standard --//

#ifndef CONVERTION_H  //-- si non defini.Par convention nomme le nom du fichier 
#define CONVERTION_H 

//-- declaration definition --//

//-- declaration type énumération --//

typedef enum { CERCLE, ELLIPSE, CARRE, RECTANGLE, TRIANGLE } e_FORME; // énumération global et non local//

//-- prototype --//
float CalculPerimetreCercle(float rayon_m);

#endif // CONVERTION_H // Par convention  nomme le nom du fichier