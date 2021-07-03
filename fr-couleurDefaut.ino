/*
*	fr-couleurDefaut.ino		-	l’utilisation de la LedRGB Library
* Ce programme aperçu les couleurs “couleurDefaut” fonction.
*
* Attention!	 RGB == RVB, ils sont les memes. Je préfère écrire « RGB ».
*
*
*Par: Alejandro Bertinelli
*Traduction: Theresa (teiResa)
*
*Création:	22 Juin 2019
*Mise:		3 Juillet 2021
*/

/*
* La licence:  MIT License 3.0
*/

#include <LedRGB.h>
//Le programme est désigné pour la cathode commune ('common cathode') RGB LEDs. 
//Si vous voulez utiliser une anode commune ('common anode'), replacer CC avec AA ici :
LedRGB maLED(9, 10, 11, CC);

void setup() {

}

void loop() {
	//En utiliser toutes les couleurs libres par defaut 
maLED.defautCouleur(“blanc”);
delay(300);
maLED.defautCouleur(“rouge”);
delay(300);
maLED.defautCouleur(“vert”);		<!-- or vert. I’ll check.
delay(300);
maLED.defautCouleur(“bleu”);
delay(300);
maLED.defautCouleur(“jaune”);
delay(300);
maLED.defautCouleur(“orange”);
delay(300);
maLED.defautCouleur(“mauve”);
delay(300);
maLED.defautCouleur(“turquoise”);		
delay(300);
maLED.defautCouleur(“gris”);
delay(300);
maLED.defautCouleur(“marron”);
delay(300);
maLED.defautCouleur(“fuchsia”);		//mauve-rose
delay(300);
}
