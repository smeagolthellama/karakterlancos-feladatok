#include <iostream>
#include "stdkarlanc.hpp"

using namespace std;

/**
 *
52.	 Írj egy C/C++ programot, amely beolvas a billentyűzetről egy zérótól különböző n (n≤100) természetes  számot,  majd  n darab  karakterláncot  (minden  karakterlánc  legfeljebb  30 karaktert tartalmaz,  amelyek az angol ABC kisbetűi),  majd  a képernyőre  írja, hogy az n karakterláncból hány áll csak magánhangzóból. Magánhangzónak tekintjük az a, e, i, o, u betűket.
Példa:  ha  n=3,  és  a  mellékelt  karakterláncokat  olvassuk  be,           arc ae creion
akkor a program által kiírt érték az 1, mert az ae karakterlánc csak magánhangzókból áll. 	(10p.)

 */

int main()
{
	int n,i;
    cin>>n;
    char c[n][30];
    for(i=0;i<n;i++){
        cin>>c[i];
    }

    return 0;
}
