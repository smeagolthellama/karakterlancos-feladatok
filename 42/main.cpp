#include <iostream>
#include "stdkarlanc.hpp"

using namespace std;

/**
 *
42. 	Írjatok egy C/C++ programot,  amely beolvas  a billentyűzetről egy legtöbb  40 karakterből álló, csak az angol ábécé kisbetűit tartalmazó karakterláncot, majd kiíratja a képernyőre a karakterláncban szereplő  magánhangzókat.  A program  a magánhangzókat  a szövegben való előfordulásuk sorrendjében írassa ki, szóközzel elválasztva, amint a példában látható. Magánhangzónak  tekintjük  a  következő  betűket:  a, e, i, o, u.  Ha  a  beolvasott karakterlánc nem tartalmaz magánhangzót, akkor a kiírt szöveg fara vocale. (10p.)
Példa: ha a beolvasott karakterlánc calculator, akkor a program a képernyőre a következőt írja ki: a u a o
 */

int main()
{
	char t[CHAR_STAR_SIZE];
	cin.getline(t,CHAR_STAR_SIZE);
	bool x=true;
	for(unsigned int i=0;i<strlen(t);i++){
		if(isvowel(t[i])){
x=false;
			cout<<t[i]<<' ';
			}
	}
	if (x){
		cout<<"fara vocale";
	}
    return 0;
}
