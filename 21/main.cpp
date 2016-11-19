#include <iostream>
#include "stdkarlanc.hpp"

using namespace std;

/**
	21. 	Adott  egy  legtöbb  250 karakterből  álló  szöveg,  amelyben  a  szavak  csak  az  angol  ábécé kisbetűiből állhatnak, és egymástól egy vagy több * karakter választja el őket.


	Írjatok egy C/C++ programot,  amely beolvassa a billentyűzetről a szöveget, majd kiírja a képernyőre külön sorokba  az  összes  olyan  szövegrészt,  amely  két  azonos  betűből  áll, ahogy a példában látható.
*/

int main()
{
    char t[255];
    get(t);
    int i;
    for(i=1;i<hossz(t);i++){
		if(t[i]!='*' && t[i]==t[i-1]){
			cout<<t[i]<<t[i]<<endl;
		}
    }
    return 0;
}
