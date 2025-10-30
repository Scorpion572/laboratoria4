#include <iostream>
using namespace std;
void wyswietlanie(int a, int b);
int zwracaniewiekszej(int a, int b);
void dzielniki(int n);
int potegowanie(int a, int b);
int silnia(int n);
float dodawanie(float a, float b);
float odejmowanie(float a, float b);
float mnozenie(float a, float b);
float dzielenie(float a, float b);
int dzielenieparzystej(int n);
int dzielenienieparzystej(int n);
int potegowaniedwojki(int n);
int main()
{
	/*int a, b;												//zadanie 1
	cin >> a >> b;
	wyswietlanie(a, b);
	cout << "wieksza wartosc to: " << zwracaniewiekszej(a, b) << endl; */

	/*int n;											//zadanie 2
	cout << "podaj liczbe ktorej dzileniki chcesz znalezc: " << endl;
	cin >> n;
	dzielniki(n);*/

	/*float a, b;                                                 //zad 3
	int wybor;
	while (1) {
		cout << "Podaj dwie liczby : ";
		cin >> a >> b;
		cout << "Wybierz rodzaj dzialania :\n ";
		cout << "1. Dodawanie\n 2. Odejmowanie\n 3. Mnozenie\n 4. Dzielenie\n 5. Zakoncz dzialanie\n ";
		cin >> wybor;
		switch (wybor) {
		case 1:
			cout << "wynik dodawania to : " <<dodawanie(a,b) << endl;
			break;
		case 2:
			cout << "wynik odejmowania to : " << odejmowanie(a,b) << endl;
			break;
		case 3:
			cout << "wynik mnozenia to : " << mnozenie(a,b) << endl;
			break;
		case 4:
				cout << "wynik dzielenia to : " <<dzielenie(a,b) << endl;
				break;
		case 5:
			return 0;
		}
	}*/

	/*int a, b;											//zadanie 4
	cout << "pdaj podstawe i wykladnik potegi: " << endl;
	cin >> a >> b;
	cout << "wynik potegowania to: " << potegowanie(a, b) << endl;*/
	
	/*int n;												//zadanie 5
	cout << "podaj liczbe" << endl;
	cin >> n;
	cout << "silnia z tej liczby to: " << silnia(n) << endl;*/

	int n;
	cout << "Do jakiej potêgi chcesz podniesc liczbe 2 " << endl;
	cin >> n;
	cout << "2 do " << n << " to: " << potegowaniedwojki(n) << endl;



/*	int n = 0;										//zadanie 8
	while (n < 100) {
		if (n % 2 == 0) {
			cout << dzielenieparzystej(n) << endl;
			n++;
		}
		else {
			cout << dzielenienieparzystej(n) << endl;
			n++;
		}
	}*/
}
void wyswietlanie(int a, int b) {
	if (a > b) {
		cout << "a jest wieksze od b" << endl;
	}
	else if (b>a){
		cout << "b jest wieksze od a" << endl;
	}
	else {
		cout << "a jest rowne b" << endl;
	}
}

int zwracaniewiekszej(int a, int b) {
	if (a > b) {
		return a;
	}
	else {
		return b;
	}
}

	void dzielniki(int n) {
		for (int i = 1; i <= n / 2; i++) {
			if (n % i == 0) {
				cout << i << endl;
			}
		}
	}


int potegowanie(int a, int b) {
	int wynik = a;
	if (b == 0) {
		return 1;
	}
	else
	for (int i = 1; i < b; i++) {
		wynik = wynik * a;
	}
	return wynik;
}

int silnia(int n) {
	int wynik = 1;
 for(int i=1;i<=n;i++){
	wynik=wynik*i;
 }
 return wynik;
}

float dodawanie(float a, float b) {
	return a + b;
}
float odejmowanie(float a, float b) {
	return a - b;
}
float mnozenie(float a, float b) {
	return a * b;
}
float dzielenie(float a, float b) {
	if (b == 0) {
		cout << "nie dzielimy przez zero! " << endl;
	}
	else {
		return a / b;
	}
}

int dzielenieparzystej(int n) {
	return n / 2;
}
int dzielenienieparzystej(int n) {
	return (n - 1) / 2;
}
int potegowaniedwojki(int n) {
	int wynik = 2;
	if (n == 0) {
		return 1;
	else {
		for (int i = 0; i < n; i++) {
			wynik = wynik * 2;
		}
		return wynik;
	}
	}
}