#include <iostream>
using namespace std;
void wyswietlanie(int a, int b);
int zwracaniewiekszej(int a, int b);
void dzielniki(int n);
int potegowanie(int a, int b);
int silnia(int n);
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

	/*int a, b;											//zadanie 4
	cout << "pdaj podstawe i wykladnik potegi: " << endl;
	cin >> a >> b;
	cout << "wynik potegowania to: " << potegowanie(a, b) << endl;*/
	
	/*int n;												//zadanie 5
	cout << "podaj liczbe" << endl;
	cin >> n;
	cout << "silnia z tej liczby to: " << silnia(n) << endl;*/

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
