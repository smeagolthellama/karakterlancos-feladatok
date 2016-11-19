#include <iostream>
#include "stdkarlanc.hpp"

using namespace std;

/**
 *
64.	 Írj egy C/C++ programot,  amely beolvas a billentyűzetről egy legfeljebb  200 karakterből álló, az angol ABC betűit tartalmazó szöveget, amelyben a szavakat pontosan egy szóköz választja el egymástól, és a képernyőre írja azoknak a szavaknak a számát, amelyek első és utolsó betűje magánhangzó. Ha a beolvasott szövegben nincsenek ilyen szavak, akkor a képernyőre a NU  EXISTA 	üzenetet 	kell írni. Magánhangzónak 	tekintjük  a  {a,A,e,E,i,I,o,O,u,U} halmaz betűit.
Példa: ha a beolvasott szöveg:
Eratostene	a	sugerat 	ca 	anii	bisecti 	se repeta la fiecare patru ani
Akkor a képernyőn: 4
 */

int main()
{
	char t[CHAR_STAR_SIZE];
	cin.getline(t,CHAR_STAR_SIZE);
	t[strlen(t)+1]=0;
	t[strlen(t)]=' ';
	int i,j,n=0;
    i=0;
    j=kereschar(t,' ')-1;
	while(j!=i-2){
		if(isvowel(t[i])&&isvowel(t[j])){
			n++;
			cout<<i<<':'<<t[i]<<endl<<j<<':'<<t[j]<<endl<<endl;
		}
		i=j+2;
		j=kereschar(t+i,' ')-1+i;
	}

	cout<<n;
    return 0;
}
