#include <iostream>
#include "stdkarlanc.hpp"

using namespace std;

/**
 *
71.	 Írj  egy  C/C++ programot,   amely   beolvas   a  billentyűzetről   két  Enter-rel   elválasztott karakterláncot: az s karakterláncot,  amely legfeljebb 255 karaktert tartalmaz (az angol ABC betűit, szóközöket)  és egy legfeljebb  20 karaktert tartalmazó  c karakterláncot.  A program helyettesítse   az   s karakterláncban   a   c karakterlánc   minden   előfordulását   annyi   * karakterrel, ahány karakterből a c karakterlánc tulajdonképpen  áll, mint a példában. Az így kapott  s karakterláncot  a képernyőre  kell íratni. Ha a c karakterlánc  nem szerepel  az s karakterláncban, akkor a NU APARE üzenetet kell kiíratni.
Példa: ha az S karakterlánc: Din departare se vede tare és a c karakterlánc: tare
Akkor a képernyőn: Din depar**** se vede **** 	(10p.)

 */

int main()
{
	char t[CHAR_STAR_SIZE];
	int i,j;
	cin.getline(t,CHAR_STAR_SIZE);
	char word[20];
	cin.getline(word,20);
	char repword[20];
	for(i=0;i<strlen(word);i++){
		repword[i]='*';
	}
	repword[strlen(word)]=0;
    while((j=keres(t,word))!=-1){
        torles(t,j,strlen(word));
        beszur(t,repword,j);
    }
    cout<<t<<endl;

    return 0;
}
