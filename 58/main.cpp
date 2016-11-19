#include "stdkarlanc.hpp"

using namespace std;

/**
 *
58.		 Írj  egy  C/C++ programot,  amely  beolvas  a  billentyűzetről  egy  legfeljebb  50 karaktert tartalmazó karakterláncot (számjegyeket, az angol abc betűit és szóközöket, a karakterlánc tartalmaz legalább  egy  betűt),  majd  felépíti  a  memóriában  és  kiírja  a képernyőre  azt  a karakterláncot, amelyet a beolvasott karakterláncból kapunk úgy, hogy elhagyjuk az összes karaktert, amelyek nem betűk.
Példa:  Ha a beolvasott  karakterlánc: Voi lua 10 la informatica akkor a kiírás a képernyőn: Voilualainformatica
 */

int main()
{
	char t[CHAR_STAR_SIZE];
	cin.getline(t,CHAR_STAR_SIZE);
	for(int i=0;i<strlen(t);i++){
		if(kozott(t[i],'a','z')||kozott(t[i],'A','Z')){
			cout<<t[i];
		};
	}
    return 0;
}
