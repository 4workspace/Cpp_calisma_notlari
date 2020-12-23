// iterator = genisletilmis pointer diyebiliriz.
// Her vektorun bir iterator ozellgi vardir

#include <iostream>
#include <vector>			// vector sinifini kullanabilmemiz icin gerekli
using namespace std;
template <typename T>		// T adinda bir tamplate tanimladik

void print(vector<T> &v)
{
	typename vector<T>::iterator i = v.begin();			//degisken türü (T) ne olacaka belli olmadigi icin basina typname koyduk
	while(i != v.end())
	{
		cout<< *i << " ";
		i++;
	}
	cout<< endl;
}

int main() {
	
	//cout << kare(12.5);
	
	vector<int> v;								// int tipinde ve v adinda bir vector tanimlandi
	vector<int> v1(5,10);						// int türünde v1 vektoru 5 elemanli ve her elemaninda 10 degeri bulunacak demek
	vector<int> v2(10);							// v2 icinde 10 tane sifir barindirir
	vector<int> v3(&v2[5],&v2[8]);				// v2 nin 5.  elemanindan 8. elemanina kadar kopyala
	vector<int> v4(v1);							// v1'i v4'e kopyala
/*	
	vector<int>::iterator i = v1.begin();		// v vektoru bir iterator döndürüyor
	
	while(i != v1.end())							// v1 nin son elemanina kadar dongu devam eder yani v nin tum elemanlarini dolasir
	{
		cout<< *i << endl;								// iteratrun icinde ki degeri ekrana bastirmak icin. Tipki pointer gibi.
		i++;											
	}
*/

	// yukarida print fonksiyonu tanimladigimiz icin bir usttekine ihtiyac kalmadi
	
	print(v);				// icinde hic bisey yok
	print(v1);				// icinde 5 tane 10 var
	print(v2);				// icinde 10 tane 0 var
	print(v3);				// icinde 3 tane 0 var
	print(v1);				// icinde 5 tane 10 var


	return 0;
}



