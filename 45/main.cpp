#include <iostream>
#include "stdkarlanc.hpp"

using namespace std;

/**
 *
45. 	Írjatok egy C/C++ programot,  amely beolvas a billentyűzetről egy legtöbb  40 karakterből álló, csak az angol ábécé kisbetűit  tartalmazó  karakterláncot és kiíratja a képernyőre az összes karakterláncot, melyet úgy kapunk, hogy az eredeti karakterláncból  elhagyunk egy-egy betűt. A program az így kapott karakterláncok mindegyikét új sorba írassa ki.
Példa: ha a beolvasott karakterlánc abbc akkor a program a képernyőre kiírja a következő karakterláncokat: bbc abc abc abb 	(10p.)

 */

int main()
{
	char t[CHAR_STAR_SIZE];
	cin.getline(t,CHAR_STAR_SIZE);
    return 0;
}
