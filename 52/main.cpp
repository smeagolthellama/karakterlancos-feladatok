#include <iostream>
#include "stdkarlanc.hpp"

using namespace std;

/**
 *
51.		 Az s karakterlánc legfeljebb 52 kisbetűt (az angol ABC-ből) és számjegyeket tartalmaz. Az első  karakter  kisbetű,  az  utolsó  karakter  számjegy  és  minden  kisbetűt  egy  nem  nulla számjegy  követ.  Írj  egy  C/C++ programot,   amely  a  billentyűzetről  beolvassa   az  s karakterláncot, majd felépít és a képernyőre ír egy új, csak az angol abc kisbetűit tartalmazó karakterláncot,  amelyet  a  következő  szabály  szerint  állít  elő:  minden  kisbetű  annyiszor szerepel az új karakterláncban, amennyit az őt közvetlenül követő számjegy jelöl.
Példa:  ha  a  billentyűzetről  beolvasott  karakterlánc:  a2b1f2,  akkor  az  új  karakterlánc: aabff. 	(10p)
 */

int main()
{
	char t[CHAR_STAR_SIZE];
	cin.getline(t,CHAR_STAR_SIZE);
	uint_fast8_t i;
	int a;
	char tmp[2]="\0";
	for(i=0;i<strlen(t);){
		if (!(t[i]>'0'&&t[i]<'9')){
			tmp[0]=t[i];
			i++;
			a=t[i]-'0';
			for(int j=1;j<a;j++,i++){
				beszur(t,tmp,i-1);
			}
			torles(t,i,1);
		}else{
			i++;
		}
	}
	cout<<t<<endl;
    return 0;
}
