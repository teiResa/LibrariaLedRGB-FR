/*
*  fr-fonctionTester.ino – l’utilisation de la LedRGB Library
*
*Ce programme testera les ‘pins’ (ou broches) de couleurs rouge (R), verte (G), et bleu (B):
*	-	300ms pour rouge
*	-	300ms pour verte
*	-	300ms pour bleu
*	-	300ms pour blanc (toutes les couleurs)
*
* Attention!	 RGB == RVB, ils sont les memes. Je préfère écrire « RGB ».
*
*
*Par: Alejandro Bertinelli
*Traduction: Theresa (teiResa)
*
*Création:	29 Juin 2017
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
// Utiliseur la fonction ‘test’, qui tester si les LED fonctionne.
	maLED.test();
}
