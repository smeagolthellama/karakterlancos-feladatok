#include <iostream>
#include "stdkarlanc.hpp"

using namespace std;

/**
 *
60.		 Írj  egy  C/C++ programot,  amely  beolvas  a  billentyűzetről  egy  legfeljebb  50 karaktert tartalmazó karakterláncot (az angol ABC kis- és nagybetűit, számjegyeket, szóközöket) és a képernyőre   írja   a   beolvasott   karakterláncban   legtöbbször   előforduló   kisbetűt.   Ha   a karakterlánc több olyan kisbetűt is tartalmaz, amelynek előfordulási száma maximális, akkor ezek  közül  az  ABC rend  szerinti  elsőt  kell  kiíratni.  Ha  a  karakterlánc  nem  tartalmaz kisbetűket, akkor a képernyőre a nu üzenetet kell írni.
Példa: ha a beolvasott karakterlánc: mergem la munte akkor az e betűt kell kiíratni (mert az e és m betűk szerepelnek  legtöbbször  a karakterláncban és ezek közül az e előbb van az ABC-ben) 	(10p.)

 */

int main()
{
	char t[CHAR_STAR_SIZE];
	cin.getline(t,CHAR_STAR_SIZE);
	int dig[26] = {0}, i;

	for(i = 0; i < strlen(t); i++) {
		if(kozott(t[i], 'a', 'z')) {
			dig[t[i] - 'a']++;
		}
	}

	char m=0;

	for(i=0;i<26;i++){
        m+=t[i];
	}

	if(!m){
		cout<<"nu";
		return 0;
	}
	m='a';
	for(i = 0; i < 26; i++) {
		if(dig[i] > dig[m-'a']) {
			m = i+'a';
		}
	}

	cout << m;
    return 0;
}
