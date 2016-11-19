#include <iostream>
#include "stdkarlanc.hpp"

using namespace std;

/**
 *40. 	Írjatok   egy   C/C++ programot,   amely   beolvas   egy   legtöbb   255 karakterből   álló karakterláncot. A szavak csak az angol ábécé kisbetűiből állhatnak, és minden szó után szerepel a * karakter. A program módosítja a beolvasott karakterláncot a következőképpen: törli az első szót mindenhonnan ahol a szó megtalálható a karakterláncban. Az így kapott karakterláncot a program kiíratja a képernyőre.
Példa:   ha  a  beolvasott  karakterlánc:  bine*albine*foarte*bine*, a  program  a képernyőre kiírja:
*albine*foarte** 	(10p.)
 */

int main()
{
	char t[CHAR_STAR_SIZE];
	int i;
	cin.getline(t,CHAR_STAR_SIZE);
    char firstword[CHAR_STAR_SIZE];
    for(i=0;t[i]!='*' && i<strlen(t);i++);
    strncpy(firstword,t,i);
    firstword[i]=0;
    cout<<firstword<<endl;
	while(keres(t,firstword)!=-1 && firstword[0]!=0){
		torles(t,keres(t,firstword),i);
		cout<<keres(t,firstword)<<' ';
		cout<<t<<endl;
	}
	cout<<t;
    return 0;
}
