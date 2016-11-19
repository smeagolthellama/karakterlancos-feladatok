#include <iostream>
#include "stdkarlanc.hpp"

using namespace std;

/**
 *
39. 	Írjatok   egy   C/C++ programot,   amely   beolvas   egy   legtöbb   255 karakterből   álló karakterláncot, mely  szóközzel elválasztott  szavakat tartalmaz.   A szavak csak az angol ábécé kisbetűiből állhatnak. A program módosítja a beolvasott karakterláncot a következőképpen: tükrözéssel  megfordítja  azokat  a  szavakat,  amelyek  magánhangzóval kezdődnek.  Magánhangzóknak  tekintjük  az  a, e, i, o, u betűket.  Az  így  kapott karakterláncot a program kiírja a képernyőre.
Példa: ha a beolvasott karakterlánc: maine este proba la informatica, a program a képernyőre kiírja:
maine etse proba la acitamrofni 	(10p.)
 */

int main()
{
	char t[CHAR_STAR_SIZE];
    cin.getline(t,CHAR_STAR_SIZE);
	int i,j;
	for(i=0;(unsigned)i<strlen(t);i++){
		if((i==0 || t[i-1]==' ') && isvowel(t[i])){
			j=0;
			char tmp[CHAR_STAR_SIZE];
			for(;t[j+i]!=' '&&((j+i)<strlen(t));j++);
			strncpy(tmp,t+i,j);
			tmp[j]=0;
			for(j--;j+1;j--,i++){
				t[i]=tmp[j];
			}
		}
	}
	cout<<t;
    return 0;
}
