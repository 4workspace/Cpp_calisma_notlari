// iterator = genisletilmis pointer diyebiliriz.
// Her vektorun bir iterator ozellgi vardir

#include <iostream>
#include <vector>			// vector sinifini kullanabilmemiz icin gerekli
using namespace std;
template <typename T>		// T adinda bir tamplate tanimladik

void print(vector<T> &v)
{
	typename vector<T>::iterator i = v.begin();			//degisken türü (T) ne olacaka belli olmadigi icin basina typename koyduk
	while(i != v.end())
	{
		cout<< *i << " ";
		i++;
	}
	cout<< endl;
}

int main() {
	
	
	
	vector<int> v;								// int tipinde ve v adinda bir vector tanimlandi
	v.insert(v.begin(),5);						// begin ile vektorun basina 5 eklendi
	v.insert(v.end(),10);						// vektorun sonuna 10 eklendi
	v.insert(v.begin(),7);						// once basina 5 eklendi, 5 ten sonra 10 geldi en son bu satirda ise en basa 7 eklendi
	v.push_back(123);								// bu fonksiyonda en sona 8 ekler, end() fonksiyonu gibi
	print(v);
	v.pop_back();								// en sonda ki elemani cikarir
	print(v);
	cout << "Vectorun ici:" << v.empty() << endl;							// vektorun dolu mu bos mu oldugunu gosteriir. Eleman varsa false yani 0 dondurur.
	cout << *v.begin() << endl;							// bu sekilde de vektorun icini bilmeden basta ki elemani gorebiliriz. iterator oldugu icin ise * ile icinde ki degeri aliyoruz.
	cout << *v.end() << endl;							
	cout << v.front() << endl;							// bu sekilde ise * kullanmadan bastaki elemani getirebiliriz.
	cout << v.back() << endl;							// bunun kullanim amacini "Yazilima Gonul ver" 5. video yorumlarinda gorebiilirsin
	
	// vektorun icinden eleman silme
	//v.erase(v.begin(),v.end());							// bastan sona kadar tum icerigi sildi
	print(v);
	v.erase(v.begin()+1,v.end()-1);							// bastan ilk eleman haric (+1 saesinde) sondan bir öncekine kadar tum icerigi sil anlaminda
	print(v);
	//	v.clear();												// v vektorun tum icerigini siler
	//	print(v);
	cout << v.size() << endl;								// vektorde kac eleman oldugunu gosterir.
	cout << v.capacity() << endl;							// bu ise v vektorun kapasitesini (suanda 4) gosterir, v vektorune eleman eklersen bu metot dinaik olarak buyur.
	
	
	return 0;
}




