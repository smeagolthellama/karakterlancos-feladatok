#include <iostream>
#include "stdkarlanc.hpp"

using namespace std;

/**
 *
59.		 Írj  egy  C/C++ programot  amely  beolvas  a  billentyűzetről  egy  legfeljebb  50 karaktert tartalmazó  karakterláncot  (az  angol  ABC kis-  és  nagybetűit,  számjegyeket,  pontokat, vesszőket és szóközöket) és a képernyőre írja azt a számjegyet, amely legtöbbször fordul elő a beolvasott karakterláncban.  Ha a karakterlánc több  olyan számjegyet is tartalmaz, amelynek előfordulási száma  maximális, akkor ezek közül a kisebbiket  kell kiíratni.  Ha a karakterlánc nem tartalmaz számjegyeket, akkor a képernyőre a NU üzenetet kell írni.
Példa: ha a beolvasott karakterlánc:
Voi lua 9,5 la matematica 10 la informatica si 10 la romana
Akkor a 0 számjegyet kell kiíratni  (mert a 0 és 1 számjegyek szerepelnek legtöbbször a karakterláncban és ezek közül a 0 a legkisebb) 	(10p.)

 */

int main()
{
	char t[CHAR_STAR_SIZE];
	cin.getline(t, CHAR_STAR_SIZE);
	int dig[10] = {0}, i;

	for(i = 0; i < strlen(t); i++) {
		if(kozott(t[i], '0', '9')) {
			dig[t[i] - '0']++;
		}
	}

	int m=0;

	for(i=0;i<10;i++){
        m+=t[i];
	}

	if(!m){
		cout<<"nu";
		return 0;
	}
	for(i = 0; i < 10; i++) {
		if(dig[i] > dig[m]) {
			m = i;
		}
	}

	cout << m;
	return 0;
}
