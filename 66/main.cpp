#include <iostream>
#include "stdkarlanc.hpp"

using namespace std;

/**
 *66.	 Írj egy C/C++ programot, amely beolvas a billentyűzetről egy legfeljebb 50 karakterből álló, csak az angol ABC nagybetűit tartalmazó szót és kiírja a képernyőre a beolvasott szó összes előtagját,  a  hosszúságuk  növekvő  sorrendjében,  mindeniket  külön  sorba.  Egy  szó  k hosszúságú előtagja az adott szó első k karakteréből álló részsorozat. 	(10p.)
Példa: ha a beolvasott szó BACALAUREAT akkor a kiírt előtagok:
B
BA
BAC
BACA
BACAL
BACALA
BACALAU
BACALAUR
BACALAURE
BACALAUREA
BACALAUREAT

 */

int main()
{
	char t[CHAR_STAR_SIZE];
	cin.getline(t,CHAR_STAR_SIZE);
	int i,j;
	for(i=0;i<=strlen(t);i++){
		for(j=0;j<i;j++){
			cout<<t[j];
		}
		cout<<endl;
	}
    return 0;
}
