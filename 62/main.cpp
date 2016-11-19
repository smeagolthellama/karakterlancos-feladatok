#include <iostream>
#include "stdkarlanc.hpp"

using namespace std;

/**
62.	 Írj egy C/C++ programot, amely beolvas a billentyűzetről egy legfeljebb 255 karaktert tartalmazó szöveget, amelyben van legalább egy kisbetű az angol ABC-ből, majd kiírja a képernyő egyetlen sorába, szóközzel elválasztva, a beolvasott szövegben előforduló angol ABC-beli kisbetűket. Minden betűt egyszer kell kiírni, abban a sorrendben, ahogy először előfordul a szövegben. (10p.)
Példa: ha a szöveg: Calculati valoarea expresiei akkor a képernyőn: a l c u t i v o r e x p s

 *
 */

int main()
{
	char t[CHAR_STAR_SIZE];
	cin.getline(t,CHAR_STAR_SIZE);
	bool v[26]={false};

    return 0;
}
