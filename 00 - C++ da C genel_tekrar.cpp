#include <iostream>

using namespace std;

void func_CbV(int x);
void func_CbR(int *x);

int main() {
	
	
/*	
	int a = 10;
	float b = 3.1415;
	double f = 0.12;
	char c = 'A';
	bool d = true;
	bool e = false;
	
	cout << "a'nin degeri = " << a << endl;
	cout << "b'nin degeri = " << b << endl;
	cout << "f'in degeri = " << f << endl;
	cout << "c'nin degeri = " << c << endl;
	cout << "d'nin degeri = " << d << endl;
	cout << "e'nin degeri = " << e << endl;
*/

/*
	string a;
	cout << "isminiz nedir? :" ;
	cin >> a;
	
	cout << "girilen isim: "<< a << endl;
*/

/*
	int a, b, c;
	cout << "3 sayi giriniz:";
	cin >> a >> b >> c;
	
	cout << "uc sayinin toplami: " << a+b+c << endl;
*/

/*	C de ki komutlaar geçerli
	int a;
	printf("C de ne varsa aynisi :) :");
	scanf("%d",&a);
*/


/*	pointer	

	int a = 5;
	int *ptr = &a;
	
	cout << "a nin degeri: " << a << endl;
	cout << "a nin adresi: " << &a << endl;
	cout << "ptr nin tuttugu adres: " << ptr << endl;
	cout << "ptr nin tuttugu adreste ki deger: " << *ptr << endl;
*/


/* Call by Value (CbV) ve Call by Referance (CbR) */
 
	int a = 50;
	cout << "a nin normal degeri: " << a << endl << endl;
	
	func_CbV(a);
	cout << "a nin fonksiyondan sonra ki degeri: " << a << endl << endl;
	
	func_CbR(&a);
	cout << "a nin pointer fonksiyonundan sonra ki degeri: " << a << endl << endl;
	
	
	return 0;
}

void func_CbV(int x)
{
	x = 100;
	cout << "a nin fonksiyon icinde ki degeri: " << x << endl;
}

void func_CbR(int *x)
{
	*x = 100;
	cout << "a nin pointer fonksiyonunun icinde ki degeri: " << *x << endl;
}
