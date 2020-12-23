#include <iostream>
using namespace std;

void arrayPointer(const int *ptr1, const int *ptr2);

struct ogrenciler
{
	string ad;
	string soyad;
	int no;
};

int main() {
	
	
	
	ogrenciler ogrenci1;
	ogrenci1.ad = "Ahmet";
	ogrenci1.soyad = "Cetin";
	ogrenci1.no = 47;
	
	cout << ogrenci1.ad << endl;
	cout << ogrenci1.soyad << endl;
	cout << ogrenci1.no << endl;	
	
/*	
	int array[] = {10,20,30,40,50,60,70,80,90,100};
	
	arrayPointer(&array[2], &array[7]);						// &array[2] veya &array[7] yerine array+2 ve array+7 de diyebilirdik, sonuc degismezdi
*/
	
	return 0;
}

void arrayPointer(const int *ptr1, const int *ptr2)
{
	for(; ptr1 != ptr2 ; ptr1++)
	{
		cout << "Elemanlar: " << *ptr1 << endl;
	}
}

