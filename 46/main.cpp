#include <iostream>
#include "stdkarlanc.hpp"

using namespace std;

/**
 *46. 	Írjatok egy C/C++ programot, amely beolvas a billentyűzetről egy legtöbb 100 karakterből, csak az angol ábécé kisbetűiből és szóközökből álló szöveget, mely betűvel kezdődik és tartalmaz  legalább  egy  magánhangzót.  Magánhangzónak   tekintünk  bármely  betűt  az {a,e,i,o,u} halmazból.   A   program   a   következőképpen   módosítja   a   beolvasott szöveget:  felcseréli  a  magánhangzókat  az  ábécében  őt  követő  mássalhangzóval  (a-t cseréli b-re, e-t cseréli f-re, stb). A program kiíratja az így kapott szöveget a képernyőre. Példa: ha a beolvasott  szöveg: examen de bacalaureat, módosítás  után  a kiíratott szöveg: fxbmfn df bbcblbvrfbt lesz.
 */

int main()
{
	char t[CHAR_STAR_SIZE];
	cin.getline(t,CHAR_STAR_SIZE);
	for(int i=0;i<strlen(t);i++){
        if(isvowel(t[i])){
			t[i]++;
        }
	}
	cout<<t;
    return 0;
}
