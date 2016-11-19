#include <iostream>
#include "stdkarlanc.hpp"

/*
32. 	Írjatok egy C/C++ programot, amely a billentyűzetről beolvassa a c1 és c2 karaktereket (az angol abc különböző betűi), és egy legtöbb 250 karakterből  álló szöveget (az angol abc különböző betűi és szóköz). A beolvasott  szövegben csak az angol ábécé betűi, valamint szóközök találhatók. A program a képernyőre kiírja az eredeti szöveget, majd a következő sorba azt a szöveget, amelyet úgy állít elő, hogy helyettesít a szövegben minden egyes c1 karaktert c2 karakterre, illetve minden egyes c2 karaktert c1 karakterre. 	(10p.)
Példa: ha c1-nek a értéket, c2-nek o értéket olvass be, illetve a szöveg: hocus pocus preparatus
a képernyőre kiírja : hocus pocus preparatus illetve hacus pacus preporotus*/
using namespace std;

int main()
{
	char a, b, t[CHAR_STAR_SIZE];
	int i;
	cin >> a >> b;
	cin.get();
	cin.getline(t, CHAR_STAR_SIZE);

	for(i = 0; i < hossz(t); i++) {
		if(t[i] == a) {
			t[i++] = b;
		}

		if(t[i] == b) {
			t[i] = a;
		}
	}

	cout << t;
	return 0;
}
