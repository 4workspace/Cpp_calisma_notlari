// Pointer ile struct'lara ulasmak

#include <iostream>
using namespace std;



struct ogrenciler{
	
	string ad;
	string soyad;
	int no;
};

void goster_pointer_yapiyi(ogrenciler *ogrenci)
{
	cout << ogrenci->ad << endl;
	cout << ogrenci->soyad << endl;
	cout << ogrenci->no << endl;	
}

void goster_yapiyi(ogrenciler ogrenci)
{
	cout << ogrenci.ad << endl;
	cout << ogrenci.soyad << endl;
	cout << ogrenci.no << endl;	
}


int main()
{
	ogrenciler ogrenci1;
	
	ogrenci1.ad = "Ahmet";
	ogrenci1.soyad = "Cetin";
	ogrenci1.no = 47;
	
	ogrenciler *ptr = &ogrenci1;			// pointer ile yapiya ulasmak
	
	goster_yapiyi(ogrenci1);
	goster_pointer_yapiyi(&ogrenci1);
	
	
	return 0;
}




