#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;
void pravila();

int main()
{
	string imeIgraca;
	int saldo;
	int ulog;
	int pogodi;
	int nasumicno;
	char izbor;

	srand(time(0));
	cout<<"\n\t\tDOBAR DAN\n\n";
	cout<<"\n\nKoje je vase ime: ";
	getline(cin, imeIgraca);

	cout<<"\n\nUnesite iznos: ";
	cin >> saldo;

	do
	{

		system("cls");
		pravila();

		cout<< "\n\nVas trenutan saldo je " << saldo << "\n";

		do
		{

			cout << "Pozdrav " << imeIgraca << ", unesite ulog: ";
			cin >> ulog;

			if (ulog > saldo)
				cout << "Ulog ne moze biti veci od salda!\n" << "\nPokusajte ponovno unesti ulog\n";

		}

		while (ulog > saldo);
		do
		{

			cout << "Pogodi broj od 1 do 5: ";
			cin >> pogodi;
			if(pogodi<=0 || pogodi > 5)
			cout << "\nBroj treba biti od 1 do 5\n"<< "Pokusajte ponovno:\n ";

		} 
		
		while (pogodi <= 0 || pogodi > 5);
		nasumicno = rand() % 5 + 1;

		if(nasumicno==pogodi)
		{

			cout << "\n\nPogodili ste! Dobitak je " << ulog * 5;
			saldo = saldo + ulog * 5;

		}

		else
		{

			cout << "Zao nam je, izgubili ste " << ulog << "\n";
			saldo = saldo - ulog;

		}

		cout << "\nBroj je bio: " << nasumicno << "\n";
		cout << "\n" << imeIgraca << ", saldo Vam je " << saldo << "\n";

		if (saldo == 0)
		{

			cout << "Preostali saldo nije dovoljan za nastavak ";
			break;

		}

		cout << "\n\n-->Zelite li igrati ponovno? (y/n)? ";
		cin >> izbor;
	} 
	
	while (izbor == 'Y' || izbor == 'y');
	cout << "\n\n\n";
	cout << "\n\nHvala, vas je saldo " << saldo << "\n\n";
	return 0;

	}

void pravila()
{

	system("cls");
	cout << "\t\tPRAVILA\n";
	cout << "\t1. Izaberite broj od 1 do 5\n";
	cout << "\t2. Pobjednik dobiva 5 puta veci iznos od ulozenog\n";
	cout << "\t3. Krivi broj i izgubit cete ulog\n\n";

}
