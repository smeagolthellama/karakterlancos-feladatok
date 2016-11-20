#include <iostream>
#include "stdkarlanc.hpp"

using namespace std;

/**
 *78. Írjon C/C++ programot, amely beolvas a billentyűzetről egy legfeljebb 100 karakterből álló szöveget (csak az angol ABC kisbetűit és szóközöket) és egy legfeljebb 15 karakterből álló (csak az angol ABC kisbetűit tartalmazó) szót, majd a képernyőre írja azt a karakterláncot, amelyet  a  beolvasott  szövegből  kap,  úgy,  hogy  a  beolvasott  szó  minden  szövegbeli előfordulása után beszúr egy ? karaktert. Ha a szövegben nem fordul elő a beolvasott szó, akkor a NU APARE üzenetet kell kiíratni.
Példa: ha a beolvasott szöveg:
examenului examenul de bacalaureat si examenul de atestat
és a szó: examenul akkor a képernyőre írt szöveg:
examenului examenul? de bacalaureat si examenul? de atestat 	(10p.)

 */

int main()
{
	char t[CHAR_STAR_SIZE],word[15];
	cin.getline(t,CHAR_STAR_SIZE);
	cin.getline(word,15);
	word[strlen(word)+1]=0;
	word[strlen(word)]=' ';
    int i;
    while((i=keres(t,word))!=-1){
		t[i+strlen(word)-1]='?';
    }
    cout<<t;
    return 0;
}
