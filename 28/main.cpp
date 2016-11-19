#include <iostream>
#include "stdkarlanc.hpp"

using namespace std;
/**
28. 	s2 karakterlánc   az  s1 karakterlánc   „klónja”, ha   s1 karakterláncból  törölve   egy magánhangzó összes előfordulását s2 karakterláncot  kapjuk.  Magánhangzónak  tekintünk bármely betűt az {a,e,i,o,u} halmazból. Írjatok  C/C++ programot,  mely  beolvas a billentyűzetről egy  legtöbb  20 betűs,  az angol ábécé kisbetűiből álló szót és kiíratja a képernyőre e szó összes „klónját” (ha létezik), minden szót más sorba.
Példa: az informatica szóra kiíratja, nem feltétlenül ebben a sorrendben, a mellékelt „klónokat”: 	(10p.)
nformatca	 infrmatica	 informtic

*/
int main()
{
	const char vowels[] = "aeiou\0";
	int i_v;
	char t[CHAR_STAR_SIZE], tcopy[CHAR_STAR_SIZE];
	int i_t;
	get(t);

	for(i_v = 0; i_v < hossz(vowels); i_v++) {
		strcpy(tcopy, t);

		for(i_t = 0; i_t < hossz(t); i_t++) {
			if(tcopy[i_t] == vowels[i_v]) {
				torles(tcopy, i_t--, 1);
			}
		}

		if(strcmp(t, tcopy) != 0) {
			puts(tcopy);
		}
	}

	return 0;
}
