#include "stdkarlanc.hpp"

using namespace std;

/**
 *
55.	 Írj egy C/C++ programot, amely beolvas a billentyűzetről egy legfeljebb 10 karakterből álló karakterláncot: egy valós számot, amelyben az egész részt egy pont választja el a tizedes résztől.  A  program  írja  ki  a  képernyőre  a  beolvasott  adat  egész  részének  és  tizedes részének megfelelő számok összegét.
Példa: ha a billentyűzetről beolvassuk a 120.456 karakterláncot, akkor a kiírás 576,
ha a beolvassuk a 121.090 karakterláncot, akkor a kiírás 130. 	(10p.)
 */

int main()
{
	char t[10];
	cin.getline(t,10);
	//t[strlen(t)-1]=0;
	int i;
    for(i=0;t[i]!='.';i++);
    char tmp[10];
    strncpy(tmp,t,i++);
    int a=atoi(tmp);
    strcpy(tmp,t+i);
    int b=atoi(tmp);
    cout<<(a+b);

    return 0;
}
