#include <iostream>
#include "stdkarlanc.hpp"

using namespace std;
/**
*7. 	Adott  egy  legtöbb  255 karakterből  álló  szöveg,  amely  az  angol  ábécé  kisbetűiből  és szóközökből  épül  fel.  A  szöveg  legalább  egy  mássalhangzót  tartalmaz.  Írjatok  C/C++ programot, amely beolvassa a szöveget a billentyűzetről, majd letörli a szöveg utolsó mássalhangzóját, ahogy a példa mutatja. A program írja ki az így kapott szöveget!
Például: ha a beolvasott szöveg: mare 	frig 	saci
a képernyőn megjelenik: mare 	frig 	sai 	(10p.)
*/

int main()
{
	char t[CHAR_STAR_SIZE];
	get(t);
	int i;
	for(i=strlen(t)-2;i>=0;i--){
		if(!isvowel(t[i])){
			torles(t,i,1);
			break;
        }
	}
	cout<<t;
    return 0;
}
