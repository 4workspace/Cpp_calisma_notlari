// Pointer ile struct'lara ulasmak

#include <iostream>
using namespace std;

struct Adress{
	
	string cityName;
	int cityNo;
};

struct ogrenciler{
	
	string ad;
	string soyad;
	int no;
	
	Adress adres;						// Adress adinda ki struct i ogrenciler struct inin icine aldim
};


int main()
{
	ogrenciler ogrenci1 = {"Ahmet", "Cetin", 8, {"Ankara", 06}};			// ic ice yapida degiskenler bu sekilde de atanabilir asagida ki gibi de
/*	
	ogrenci1.ad = "Ahmet";
	ogrenci1.soyad = "Cetin";
	ogrenci1.no = 8;
	ogrenci1.adres.cityName = "Ankara";
	ogrenci1.adres.cityNo = 06;
*/
	
	cout << ogrenci1.ad << endl;
	cout << ogrenci1.soyad << endl;
	cout << ogrenci1.no << endl;
	
	cout << ogrenci1.adres.cityName << endl;
	cout << ogrenci1.adres.cityNo << endl;	
	
	return 0;
}

