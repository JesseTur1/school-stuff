// kontrollirakenteet.cpp : Defines the entry point for the console application.

//



#include "stdafx.h"

#include <iostream>

#include <math.h>

#include <string>

#include <fstream>

using namespace std;

//tietueet
struct MOBIILIPELI
{
	string nimi;
	string julkaisija;
	float hinta;
};

// aliohjelmia

int kerroin(int a, int b)

{

	return a*b;

}

void alennus(int c, int x)

{

	cout << c / x;

}

void keskiarvo(int a[])

{

	int edellinensumma = 0;

	int keskiarvo = 0;

	for (int i = 0; i < sizeof(a); i++)

	{

		edellinensumma = edellinensumma + a[i];

		keskiarvo = edellinensumma / (i + 1);

	}

	cout << keskiarvo << endl;

}

void esiintyma(int b[], int d)

{

	int esiintymat = 0;

	for (int i = 0; i < 15; i++)

	{

		if (b[i] == d)

		{

			esiintymat++;

		}

	}

	cout << esiintymat << endl;

}

void tiedot(MOBIILIPELI tieto)
{
	cout << tieto.nimi << " : " << tieto.hinta << " : " << tieto.julkaisija << endl;
}

void halvempipeli(MOBIILIPELI aa, MOBIILIPELI ab)
{
	if (aa.hinta > ab.hinta)
	{
		cout << ab.nimi << " on halvempi peli";
	}
	else if (aa.hinta > ab.hinta)
	{
		cout << aa.nimi << " on halvempi peli";
	}
	else if (aa.hinta == ab.hinta)
	{
		cout << "ovat yhtä kalliita";
	}
}

void kirjoita(string nimi, float raham)
{
	ofstream kirjoitaTiedostoon(nimi);
	if (kirjoitaTiedostoon)
	{
		kirjoitaTiedostoon << raham;
		kirjoitaTiedostoon.close();
	}
}



//ite juttuja

int main()

{

	int valinta;

	cout << "valitse";

	cin >> valinta;



	if (valinta == 1)

	{

		int luku;

		cout << "kerro yksi luku" << endl;

		cin >> luku;

		if (luku == 0)

		{

			cout << "luku on 0" << endl;

		}

		else if (luku > 0)

		{

			cout << "luku on positiivinen" << endl;

		}

		else

		{

			cout << "luku on negatiivinen" << endl;

		}

		system("PAUSE");

	}

	else if (valinta == 2)

	{

		double hinta;

		double perc;

		cout << "kerro tuotteen hinta ja alennusprosentti" << endl;

		cin >> hinta;

		cin >> perc;

		cout << endl;

		if (perc > 50)

		{

			cout << "hinta on : " << hinta / perc << " , ja sen on alle puolet alkuperäisestä hinnasta";

		}

		else

		{

			cout << "hinta on : " << hinta / perc << endl;

		}

		system("PAUSE");

	}

	else if (valinta == 3)

	{

		int lasku;

		cout << "valitse joko kerto (1) tai summa (2) laskutoimitus";

		cin >> lasku;

		cout << endl;

		if (lasku == 1)

		{

			double eka;

			double toka;

			cout << "kerro kaksi lukua. Mielellään kokonaista" << endl;

			cin >> eka;

			cin >> toka;

			cout << endl << eka*toka << " <- vastauksenne" << endl;

		}

		else if (lasku == 2)

		{

			double eka;

			double toka;

			cout << "kerro kaksi lukua. Mielellään kokonaista" << endl;

			cin >> eka;

			cin >> toka;

			cout << endl << eka + toka << " <- vastauksenne" << endl;

		}

		system("PAUSE");

	}

	else if (valinta == 4)

	{

		cout << "anna kaksi positiivista kokonaislukua" << endl;

		int uno;

		int dos;

		cin >> uno;

		cin >> dos;

		if (uno < 0 || dos < 0)

		{

			cout << "nyt piti olla positiivisia lukuja" << endl;

			system("PAUSE");

		}

		else

		{

			if (remainder(uno, dos) == 0)

			{

				if (uno > dos)

				{

					cout << "ovat täydellisesti jaollisia, sekä " << uno << " on suurempi luku";

				}



				if (uno < dos)

				{

					cout << "ovat täydellisesti jaollisia, sekä " << dos << " on suurempi luku";

				}



			}

		}







		system("PAUSE");

	}

	else if (valinta == 5)

	{

		int tuomio;

		cout << "kerro numero 1-5" << endl;

		cin >> tuomio;

		switch (tuomio)

		{

		case 1:

		{

			cout << "numero yksi" << endl;

			system("PAUSE");

			break;

		}

		case 2:

		{

			cout << "numero kaksi" << endl;

			system("PAUSE");

			break;

		}

		case 3:

		{

			cout << "numero kolme" << endl;

			system("PAUSE");

			break;

		}

		case 4:

		{

			cout << "numero neljä" << endl;

			system("PAUSE");

			break;

		}

		case 5:

		{

			cout << "numero viisi" << endl;

			system("PAUSE");

			break;

		}

		}

	}

	else if (valinta == 6)

	{



		cout << "kerro kuukausi (numero)" << endl;

		int kuu;

		int jatkaa = 1;

		cin >> kuu;



		do

		{





			switch (kuu)

			{

			case 1:

			{

				cout << "31" << endl << "haluatko jatkaa?" << endl;

				break;

			}

			case 2:

			{

				cout << "28 - 29" << endl << "haluatko jatkaa?" << endl;

				break;

			}

			case 3:

			{



				cout << "31" << endl << "haluatko jatkaa?" << endl;

				break;

			}

			case 4:

			{

				cout << "30" << endl << "haluatko jatkaa?" << endl;

				break;



			}

			case 5:

			{

				cout << "31" << endl << "haluatko jatkaa?" << endl;

				break;

			}

			case 6:

			{

				cout << "30" << endl << "haluatko jatkaa?" << endl;

				break;

			}

			case 7:

			{

				cout << "31" << endl << "haluatko jatkaa?" << endl;

				break;

			}

			case 8:

			{

				cout << "31" << endl << "haluatko jatkaa?" << endl;

				break;

			}

			case 9:

			{

				cout << "30" << endl << "haluatko jatkaa?" << endl;

				break;

			}

			case 10:

			{

				cout << "31" << endl << "haluatko jatkaa?" << endl;

				break;

			}

			case 11:

			{

				cout << "30" << endl << "haluatko jatkaa?" << endl;

				break;

			}

			case 12:

			{

				cout << "31" << endl << "haluatko jatkaa?" << endl;

				break;

			}

			}



			cin >> jatkaa;

			cin >> kuu;

		} while (jatkaa == 1);

	}

	else if (valinta == 7)

	{

		cout << "laskin. Kerro kaksi lukua, ja sen jälkeen operaation merkki. +,-,/,* " << endl;

		double luku1;

		double luku2;

		char merkki;



		cin >> luku1;

		cin >> luku2;

		cin.ignore();

		cin >> merkki;

		cout << endl;



		if (merkki == '/')//jos on 0 jaossa niin lopettaa kesken

		{

			if (luku1 == 0 || luku2 == 0)

			{

				cout << "syntax error =D" << endl;

				system("PAUSE");

			}

		}



		switch (merkki)

		{

		case '+':

		{

			cout << luku1 + luku2;

			system("PAUSE");

		}

		case '-':

		{

			cout << luku1 - luku2;

			system("PAUSE");

		}

		case '/':

		{

			cout << luku1 / luku2;

			system("PAUSE");

		}

		case '*':

		{

			cout << luku1 * luku2;

			system("PAUSE");

		}

		}

	}

	else if (valinta == 8)

	{

		int arvaus;

		int luku020 = rand() % 50;

		cout << "arvaa luku 0 - 50" << endl;

		cin >> arvaus;

		while (arvaus != luku020)

		{



			if (arvaus > luku020)

			{

				cout << "liian korkea luku" << endl;

				cin >> arvaus;



			}

			else if (arvaus < luku020)

			{

				cout << "liian matala luku" << endl;

				cin >> arvaus;

			}

		}



		cout << "oikea arvaus Wowee" << endl;



		system("PAUSE");

	}

	else if (valinta == 9)

	{

		int kertsi;

		int oikeat = 0;

		int vastaus;

		int loopper = 1;

		cout << "kertotaulu" << endl;

		cin >> kertsi;





		while (loopper <= 10)

		{



			cout << kertsi << " * " << loopper << endl;

			cin >> vastaus;

			if (vastaus == (kertsi * loopper))

			{

				oikeat++;

			}

			else {}//ei tehdä mitään

			loopper++;

		}



		cout << oikeat << " <- oikeata vastausta" << endl;

		system("PAUSE");

	}

	else if (valinta == 10)

	{

		cout << "kerro kuinka monta lukua haluat kertoa ja sit kerro ne =D" << endl;

		int lulu;

		cin >> lulu;

		int *luku;

		luku = new int[lulu];

		for (int i = 0; i < lulu; i++)

		{

			cin >> luku[i];

		}

		cout << luku[0] + luku[1] + luku[2] + luku[3] + luku[4] << " <- summa" << endl;

		cout << (luku[0] + luku[1] + luku[2] + luku[3] + luku[4]) / 5 << " <- keskiarvo" << endl;

		system("PAUSE");

	}

	else if (valinta == 11)

	{

		cout << "kerro joku luku" << endl;

		int jokuluku;

		cin >> jokuluku;

		for (int i = 1; i <= 10; i++)

		{

			cout << jokuluku * i << endl;

		}

		system("PAUSE");

	}

	else if (valinta == 12)

	{

		int x;

		int z;

		cout << "tehdään neliö, kerro kui suuri (x sit z)" << endl;

		do

		{

			cin >> x;

			cin >> z;

			if (x <= 0 || z <= 0)

			{

				cout << "ei noin pientä";

			}

		} while (x <= 0 && z <= 0 && x < 50 && z < 50);

		for (int o = 0; o < z; o++)

		{

			for (int i = 0; i < x; i++)

			{

				cout << "#";

			}

			cout << endl;

		}

		system("PAUSE");



	}

	else if (valinta == 13)

	{

		int taulukko[6];

		cout << "kerroppa lukuja" << endl;

		for (int i = 0; i < 6; i++)

		{

			cin >> taulukko[i];

		}

		for (int o = 0; o < 6; o++)

		{

			if (o % 2 == 0)

			{

				cout << taulukko[o] << endl;

			}

		}

		system("PAUSE");

	}

	else if (valinta == 14)

	{

		int viikko[7];

		cout << "kerro tunnit jne" << endl;

		for (int i = 0; i < 7; i++)

		{

			cout << "päivä numero: " << i << endl;

			cin >> viikko[i];

		}

		int summa = viikko[0] + viikko[1] + viikko[2] + viikko[3] + viikko[4] + viikko[5] + viikko[6];

		int viikolla = viikko[0] + viikko[1] + viikko[2] + viikko[3] + viikko[4];

		int vklp = viikko[5] + viikko[6];

		cout << "keskim opiskelusi :" << summa / 7 << endl;

		cout << "arkena olet opiskellut :" << viikolla << " tuntia" << endl;

		cout << "viikonloppuna olet opiskellut :" << vklp << " tuntia" << endl;



		system("PAUSE");

	}

	else if (valinta == 15)

	{

		cout << "kerro 10 kokonaislukua" << endl;

		int kokonaisluku[10];

		int pienin = 999999;

		for (int i = 0; i < 10; i++)

		{

			cin >> kokonaisluku[i];

			if (kokonaisluku[i] < pienin)

			{

				pienin = kokonaisluku[i];

			}

		}

		cout << pienin << endl;

		system("PAUSE");

	}

	else if (valinta == 16)

	{

		int luku[5];

		int pienin = 99999;

		int suurin = 0;

		cout << "mäkihyppyjutut jne" << endl;

		for (int x = 0; x < 5; x++)

		{

			cin >> luku[x];

			if (luku[x] < pienin)

			{

				pienin = luku[x];

			}

			if (luku[x] > suurin)

			{

				suurin = luku[x];

			}

		}

		for (int c = 0; c < 5; c++)

		{

			if (luku[c] == pienin)

			{
			}

			else if (luku[c] == suurin)

			{
			}

			else

			{

				cout << luku[c] << endl;

			}

		}

		system("PAUSE");

	}

	else if (valinta == 17)

	{

		cout << "aliohjelmat" << endl;

		int luku1;

		int luku2;

		cin >> luku1;

		cin >> luku2;

		int ala = kerroin(luku1, luku2);

		cout << ala << endl;

		system("PAUSE");

	}

	else if (valinta == 18)

	{

		cout << "alennus juttuja" << endl;

		int joo, jooo;

		cin >> joo;

		cin >> jooo;

		alennus(joo, jooo);

		system("PAUSE");

	}

	else if (valinta == 19)

	{

		int luku[] = { 20, 100, 50, 1 };

		keskiarvo(luku);

		system("PAUSE");

	}

	else if (valinta == 20)

	{
		int n;
		int m[] = { 1, 2, 3, 2, 2, 5, 3, 6, 9, 2, 12, 2, 2, 5, 2 };

		cin >> n;

		esiintyma(m, n);


	}

	else if (valinta == 21)
	{

		MOBIILIPELI peli1 = { "mela-pelto huono-tuttavapiiri 2", "elektroniset taiteet", 73 };
		MOBIILIPELI peli2 = { "kjdgdöiasdf", "geneerinen-julkaisija #59", 4 };
		MOBIILIPELI peli3 = { "peli3 nimi", "abc kissa kavelee", 50 };

		MOBIILIPELI pelitietuetaulukko[3] = { peli1, peli2, peli3 };

		cout << "kolmen mobiilipelin tiedot:  (nimi, hinta, julkaisija)" << endl;
		tiedot(peli1);
		tiedot(peli2);
		tiedot(peli3);
	}

	else if (valinta == 22)
	{
		float saldo = 0;

		ifstream minunTiedosto("saldo.txt");

		if (minunTiedosto)
		{
			cout << "haetaan saldoasi.." << endl;

			minunTiedosto >> saldo;
			cout << saldo << endl;

			cout << "valmis!" << endl;
			minunTiedosto.close();
		}

		if (minunTiedosto)
		{
			do
			{
				int valinta = 0;

				cout << "______________________________" << endl;
				cout << "kerro toimintosi : " << endl;
				cout << "1) : uusi ostos" << endl;
				cout << "2) : saldo" << endl;
				cout << "3) : Talleta rahaa" << endl;
				cout << "9) : Lopeta" << endl;
				cout << "______________________________" << endl;

				cin >> valinta;

				switch (valinta)
				{
				case 1:
					float hinta;
					cout << "kerro hinta" << endl;
					cin >> hinta;
					if (hinta <= saldo)
					{
						saldo -= hinta;
						kirjoita("saldo.txt", saldo);
						minunTiedosto.close();
						cout << "ostos onnitui!" << endl;
					}
					else
					{
						cout << "ei ole tarpeeksi rahnua" << endl;
					}

					break;

				case 2:
					cout << "saldo :" << saldo << endl;
					break;

				case 3:

					float maara;
					cout << "kerro määrä" << endl;
					cin >> maara;
					if (maara > 0)
					{
						saldo += maara;
						kirjoita("saldo.txt", saldo);
						minunTiedosto.close();
					}
					else
					{
						cout << "et voi 'tallettaa' negatiivisiä lukuja" << endl;
					}
					break;

				case 9:
					return 0;
					break;

				default:
					break;
				}
			} while (valinta != 9);

		}
	}


}
