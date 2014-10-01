/***********
*Teht‰v‰: Harjoitus 9 (palautus vko 41)
*Tekij‰: Juho Nissi
*Tee ohjelma, joka toimii laskimena.
*K‰ytt‰j‰lt‰ kysyt‰‰n kaksi kokonaislukua,
*jonka j‰lkeen ohjelma antaa valikon
*laskutoimituksista. Valikko nayttaa
*seuraavalta:
*Versio 1.0
*p‰iv‰ys: 1.10.2014
*/
#include <iostream>
using namespace std;
void main()
{
	int valinta;
	int luku1;
	int luku2;
	{
		cout << "Anna luku1 ";
		cin >> luku1;
		cout << "Anna luku2 ";
		cin >> luku2;
	}
	cout << "VALIKKO";
	cout << "\n\n1 Summa ";
	cout << "\n2 Erotus ";
	cout << "\n3 Tulo ";
	cout << "\n4 Osamaara ";
	cout << "\n5 Jakojaannos " << endl;
	cin >> ws >> valinta;
	switch (valinta)
	{
	case 1:	cout << "\nLukujen summa on: " << luku1 + luku2 << endl;
		break;
	case 2: cout << "\nLukujen erotus on: " << luku1 - luku2 << endl;
		break;
	case 3: cout << "\nLukujen tulo on: " << luku1*luku2 << endl;
		break;
	case 4: cout << "\nLukujen osam‰‰r‰ on: " << luku1 / luku2 << endl;
		break;
	case 5: cout << "\nLuvuista jaljelle jaava jakojaannos on: " << luku1%luku2 << endl;
		break;
	default: cout << "\nVirhe: ei ko. toimintoa!" << endl;
		break;
	}
}