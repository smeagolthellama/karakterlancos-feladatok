#include <iostream>
#include "stdkarlanc.hpp"

using namespace std;

/**
 *76.	Írjon C/C++ programot, amely billentyűzetről beolvas egy (legalább 1, legfeljebb 20 betűből álló) szót és kiírja a képernyőre az összes olyan szót, amelyet a beolvasott szóból az első és az utolsó betűk elhagyásával kapunk. Az első feldolgozás a beolvasott szóra vonatkozik, a következők pedig az előző feldolgozás után kapott szóra. A betűk elhagyását addig folytatjuk, amíg el nem fogynak a betűk, mint a példában.  A feldolgozás  során  minden megkapott szót a képernyőre, külön sorba kell íratni.
Példa: ha a beolvasott szó:  bacalaureat, akkor a képernyőre a következőket kell íratni:
bacalaureat
acalaurea
calaure
alaur
lau
a

 */

int main()
{
	char t[CHAR_STAR_SIZE];
	cin.getline(t,CHAR_STAR_SIZE);
	while(strlen(t)){
		crop(t);
		cout<<t<<endl;
	}
    return 0;
}
