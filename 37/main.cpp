#include <iostream>
#include "stdkarlanc.hpp"

using namespace std;

/**
 *
37. 	Írjatok egy C/C++ programot, amely beolvas egy legtöbb 255 karakterből álló karakterláncot, mely szavakat tartalmaz, egy vagy több szóközzel elválasztva. A szavak csak az angol ábécé kisbetűiből állnak. A program minden szó első és utolsó betűjét nagybetűre változtatja, majd az így kapott karakterláncot kiíratja a képernyőre.
Példa: ha a beolvasott karakterlánc: maine este    proba   la informatica, a program a képernyőre kiírja: MainE EstE    ProbA   LA InformaticA 	(10p.)
 */

int main()
{
	char t[CHAR_STAR_SIZE];
	cin.getline(t,CHAR_STAR_SIZE);
	int i;
    t[0]=toupper(t[0]);
    t[hossz(t)-1]=toupper(t[hossz(t)-1]);
    for(i=0;i<hossz(t);i++){
		if(t[i]==' '){
			t[i-1]=toupper(t[i-1]);
			t[++i]=toupper(t[i]);
		}
    }
    cout<<t;
    return 0;
}
