#include <iostream>
#include "stdkarlanc.hpp"

using namespace std;

/**
 *
50. 	Írjatok C/C++ programot, amely a billentyűzetről beolvas egy legtöbb 20, az angol ábécé kisbetűiből álló s szót, törli a szóból az első és utolsó magánhangzót, majd az így kapott s szót  kiíratja  a  képernyőre.  Az  s szó  legkevesebb  két  magánhangzót  és  legalább  egy mássalhangzót tartalmaz. Magánhangzónak tekintjük a következő betűket: a, e, i, o, u.
Példa: ha a beolvasott szó bacalaureat, a program a képernyőre kiírja: bcalauret 	(10p.)

 */

int main()
{
	char t[CHAR_STAR_SIZE];
	cin.getline(t,CHAR_STAR_SIZE);
    int i;
    for(i=0;!isvowel(t[i]);i++);
    torles(t,i,1);
    for(i=strlen(t);!isvowel(t[i]);i--);
    torles(t,i,1);
    cout<<t;

    return 0;
}
