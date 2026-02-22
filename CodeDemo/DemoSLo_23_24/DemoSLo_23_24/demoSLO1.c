#include "demo.h"	//-> librairie perso 


//-- programmme --// 
void main()
{
	//-- déclaration de variable --//
	// type primiotif entier
	// 10 -> 4 octets 
	// 3.14 -> 8 octets 
	// 'A' -> 4 octets sous VS 
	// "ABC\0" -> 4octets   // chaine de caratère 
	
	char valC = 10; 		//-> 1 octet 
	short valS = 100;  	//-> 2 octets 
	int valI, i; 		// dépend du systeme - complilateur C -> VS2022 -> 4octets 
	long valL; 		//-> 4 octet
	
	//-- constante --//
	const char VAL_C2 = 'A'; 		// 65_10 = 0x41 = 'A'

	//type primitifs réels 
	float valF; 	// 4 octets
	double valD; 	// 8 octets 
	
	// type énuméré 
	e_couleur maCouleur;

	//-- instruction / affectation  -> opérateur ->  = / opérandes -> Macouleur et rouge 
	maCouleur = rouge; 			//-- rouge, vert ou bleu 
	valC = MON_ENTIER; 
	valI = MON_ENTIER; 
	
	//1 octet = 2 octets 
	valC = valS; 	//cast - implicite				// carry 
	
	//-- imaginer que valC = 10 et valS = 100
	valF = (float)valC / (float)valS; 
	
	//if( condition1 opérateur condition2 ) => pour rentrer dans un if -> condition (1) -> pour entrer -> 0 on sort 
	// opérateur de condition 
	// ==, >, <, >=, <=, !=, &&, ||, 
	
	//-- exemple 1
	if(valC > valS) 
	{
		//instructuions ... 
		
	}
	
	if(valS == valC) 
	{
		
	}
	
	//-- exemple 2 
	if(valC > valS) 
	{
		//instructuions ... 
	}
	else 
	{
		//instructuions ... 
	}
	
	//-- exemple 3 
	//-- premiere condition plus prioritaire de toutes 
	if(valC > valS) 
	{
		//instructuions ... 
	}
			// condiotion x opérateur condition Y 
	if else (valS == valC ) 
	{
		//instructuions ... 
	}
	if else(valS != valC) 
	{
		//instructuions ... 
	}	
	if else(!(valS == valC)) 
	{
		//instructuions ... 
	}
		//	conditionX peut etre un apppel de fonction, meme chose pour conditionY 
	if else((valC + valS) < (valC - valS))		// possible -> mais debug complique 
	{
		//instructuions ... 
	}
	else 
	{
		/*if(condition1 opérateur conditoin2 )
		{}*/ 
	
		//instructuions ... 
	}
	
	
	//-- autre structure de condition --// 
	switch(maCouleur)
	{
	
		case rouge : 
			// instruction 1 
			// instruction 2
			maCouleur = bleu; 
			break; 
		
		case vert : 
			// instruction 1 
			// instruction 2
			
		case bleu :

			// instruction 1 
			// instruction 2
			break; 
			
		case noir: 
		case blanc: 
			// instruction 1 
			// instruction 2
			break; 
		
		//-- pas une obligation mais plus que vivement conseiller !!!		
		default: 
			break; 
		
	}
	
	
	//-- itération --
	//-- teste d'abord l'itération => condition avait de rentrer dans la boucle 
	while(valS <= valC) 			//-> doit être vrai (= 1)  
	{
		//-- instructions 
	}

	// execute au moins une fois les instrcution du bloc d'itération 
	do 
	{
		//-- instructions 
	}
	while(valS != MILLE); 
	
	
	//-- utilisation plutôt dans le compteur --> 
	// dans la paranthèse -> 1) condition de départ ; 2 test/conditoion  ; 3) action -> par convention  incrément / décrément
	for(i = 0; i < MILLE; i++)  // i++ post incrémentation 
	{
		//-- instructions 
	}
	
	
	
	
	
	
	
	

	
	
	
	
}





