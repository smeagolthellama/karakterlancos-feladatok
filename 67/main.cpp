#include <iostream>
#include "stdkarlanc.hpp"

using namespace std;

/**
 *67.	 Írj egy C/C++ programot, amely beolvas a billentyűzetről egy legfeljebb 50 karakterből álló, csak az angol ABC nagybetűit tartalmazó szót és kiírja a képernyőre a beolvasott szó összes utótagját,  a  hosszúságuk   növekvő  sorrendjében,   mindeniket   külön  sorba.  Egy  szó  k hosszúságú utótagja az adott szó utolsó k karakteréből álló részsorozat. 	(10p.)
Példa: ha a beolvasott szó: EXAMEN, akkor a kiírt utótagok:
N
EN
MEN
AMEN
XAMEN
EXAMEN

 */

int main()
{
	char t[CHAR_STAR_SIZE];
	cin.getline(t,CHAR_STAR_SIZE);
	int i,j;
	for(i=strlen(t)-1;i+1;i--){
		for(j=i;j<strlen(t);j++){
			cout<<t[j];
		}
		cout<<endl;
	}
    return 0;
}
