#include <iostream>
#include "stdkarlanc.hpp"

using namespace std;

/**
 *77. Írjon C/C++ programot,  amely beolvas a billentyűzetről egy legfeljebb 50 karakterből álló szöveget, ami az angol ABC kisbetűiből és szóközökből áll. A szöveg több, egy-egy szóközzel elválasztott szót tartalmaz. A program írja a képernyőre azt a beolvasott szövegből kapott szöveget, amelyben minden szó nagybetűvel kezdődik és végződik, a többi karakter maradjon változatlanul.
Példa:   ha  a  beolvasott  szöveg:  azi 	este 	examen 	de 	bacalaureat,  akkor  a képernyőre írt szöveg:  AzI EstE ExameN DE BacalaureaT. 		(10p.)


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
