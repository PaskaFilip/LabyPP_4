#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <ctime>
using namespace std;
//zad 1
//int ktorawieksza(int a, int b)
//{
//	if (a > b)
//		return a;
//	else
//		return b;
//}
//void wyswietlwieksza(int a, int b)
//{
//	int wieksza = ktorawieksza(a, b);
//	cout << "Wieksza liczba to: " << wieksza << endl;
//}

//zad 2
//void podajdzielniki(int n) {
//	cout << "Dzielniki liczby " << n << " to: ";
//	for (int i = 1; i <= n; i++) {
//		if (n % i == 0) {
//			cout<< i<<" ";
//		}
//	}
//}

//zad 3
//float dodaj(float a, float b) {
//	return a + b;
//}
//float odejmij(float a, float b) {
//	return a - b;
//}
//float mnoz(float a, float b) {
//	return a * b;
//}
//float dziel(float a, float b) {
//	if (b == 0) {
//		cout << "Nie dziel przez zero!" << endl;
//		return 0;
//	}
//	return a / b;
//}

//zad 4
//
//int potega(int a, int b) {
//	int temp = a;
//	if (b == 0) {
//		return 1;
//	}
//	else {
//		for (int i = 1; i < b; i++) {
//			a = temp * a;
//		}
//	}
//	return a;
//}

//zad 5
//int silnia(int n) {
//	if (n < 0) {
//		cout << "Nie podawaj mniej niz 0" << endl;
//		return -1;
//	}
//	else if (n == 0 || n == 1) {
//		return 1;
//	}
//	else {
//		int wynik = 1;
//		for (int i = 2; i <= n; i++) {
//			wynik *= i;
//		}
//		return wynik;
//	}
//}

//zad 6
//int dwadon(int n) {
//	int wynik = 2;
//	if (n == 0) {
//		return 0;
//	}
//	else {
//		for (int i = 1; i < n; i++) {
//			wynik = 2*wynik;
//		}
//		return wynik;
//		
//	}
//}

//zad 7
//void Losowanie(int LuckyNumber){
//	srand(time(NULL));
//	float iletrafien = 0;
//	float ileprocent;
//	for (int i = 0; i < 10; i++) {
//		int wylosowana = rand() % 10 + 1;
//		if (wylosowana == LuckyNumber) {
//			iletrafien++;
//		}
//	}
//	ileprocent = (iletrafien / 10.0) * 100;
//	cout << "Trafiles " << iletrafien << " razy. Jest to "<<ileprocent <<" procent" << endl;
//}

//zad 8
//void JakParToDziel(int n) {
//	for (int i = 0; i <= n; i++) {
//		if (i % 2 == 0) {
//			cout << "Wynik to: " << i / 2 << endl;
//		}
//	}
//}
//void jakNieParToDziel(int n) {
//	for (int i = 0; i <= n; i++) {
//		if (i % 2 != 0) {
//			cout << "Wynik to: " << (i - 1) / 2 << endl;
//		}
//	}
//}
int main()
{
	/*zad 1
	int a, b;
	cout << "Podaj dwie liczby calkowite: ";
	cin >> a >> b;
	wyswietlwieksza(a, b);*/

	//zad 2
	/*int n;
	cout << "Podaj liczbe calkowita: ";
	cin >> n;
	podajdzielniki(n);*/

	//zad 3
	/*float a, b;
	char znak;
	bool kontynuowac = true;
	char odpowiedz;
	while (kontynuowac == true) {
		cout << "Czy chcesz wykonac dzialanie? (t/n): ";
		cin >> odpowiedz;
		if (odpowiedz == 't') {
			cout << "Podaj a: ";
			cin >> a;
			cout << "Podaj b: ";
			cin >> b;
			cout << "Podaj znak dzialania (+, -, *, /): ";
			cin >> znak;
			switch (znak) {
			case '+':
				cout << "Wynik: " << dodaj(a,b) << endl;
				break;
			case '-':
				cout << "Wynik: " << odejmij(a, b) << endl;
				break;
			case '/':
				cout << "Wynik: " << dziel(a, b) << endl;
				break;
			case '*':
				cout << "Wynik: " << mnoz(a, b) << endl;
				break;
			default:
				cout << "Nieprawidlowy znak dzialania" << endl;
				break;
			}
}
		else {
			kontynuowac = false;
		}*/

		//zad 4
	/*int a, b;
	cout << "Podaj podstawe i wykladnik: ";
	cin >> a >> b;
	cout << "Wynik: " << potega(a, b) << endl;*/
	
	//zad 5
	//int n;
	//cout << "Podaj liczbe calkowita dodatnia: ";
	//cin >> n;
	//cout << "Silnia liczby " << n << " to: " << silnia(n) << endl;
	
	//zad 6
	/*int n;
	cout << "Podaj liczbe naturalna: ";
	cin >> n;
	cout << "2 do potegi " << n << " to: " << dwadon(n) << endl;*/

	//zad 7
	/*int LuckyNumber;
	cout << "Podaj szczesliwy numer: ";
	cin >> LuckyNumber;
	Losowanie(LuckyNumber);*/

	//zad 8
	/*int n = 100;
	JakParToDziel(n);
	jakNieParToDziel(n);*/
	return 0;
}
