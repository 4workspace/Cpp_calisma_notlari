#include <iostream>
#include<deque>
#include<vector>
using namespace std;

/* Deque
Vektör ve Listelerin birlestirlmis halidir. 

deque<string> object(n, string("Hello"));
deque<string> container(n);
deque<string> object(&container[n], &container[m]);
deque<string> object(container);
-Not: indislerler de elemanlar alinip silineblr veya cekilebilir

back()				// sonda ki elemani verir
front()				//ilk elemani verir
begin()				// ilk elemani verir
end()				// sonda ki elemani verir
clear()				// elemanlari temizler
erase()				// elemanlari siler
	-erase(pozisyon)		// pozisyonu verilen eleman silier
	-erase(ilk,son)		// ilk son araliginde ki elemanlari siler

insert(pos)						// ekleme
insert(pos, value)				
insert(pos, firt, beyond)		// aralik halinde ekleme
insert(pos, n, value)			//pozisyondan sonra n adet kadar deðer ekleme

pop_back()					// sondan eleman siler
push_back()					// sondan eleman ekler
push_front()					// bastan eleman ekleme
pop_front()					// bastan eleman silme
resize()					// yeniden boyutlandirma, veriler silinir
resize(n, value)			// veriler silinmez
swap()						// iki deque yi birbiriyle takas etmek
size()						// deque nin boyutunu veriri

*/

template <typename T>
void print(T &t){
	typename T::iterator iter = t.begin();
	while(iter != t.end()){
		cout << *iter++ << " ";
	}
	cout << endl;
}

int main() {
	deque<int> d;
//	cout << d.empty() << endl;
	d.push_back(2);
	d.push_back(3);
	d.push_back(4);
	d.push_front(5);
/*	cout << d.empty() << endl;
	
	cout << d.front() << endl;
	cout << d.back() << endl;
*/	
	print(d);
	
//	cout << d.empty() << endl;
//	d.clear();
	cout << d.empty() << endl;

//--------------------------------------------------------

//	d.insert(d.begin(), 5);
	print(d);
	d.insert(d.end(), 10);
	print(d);
	
	cout << endl;
	
	vector<int> v;
	v.push_back(25);
	v.push_back(30);
	v.push_back(29);
	v.push_back(21);
	cout << "Vector: ";
	print(v);
	cout << "Deque: ";
	print(d);
	
	d.insert(d.end(), &v[1], &v[3]);				// deque ye vektörün 1. indisinden 3. indsine kadar olan elemanlari ekledi
	print(d);
/*	
	d.erase(d.begin());
	print(d);
	
	d.erase(d.begin(), d.end());					// bastan sona kadar sil
	print(d);
	
//------------------------------------------------------------------
	print(d);
	cout << d.size() << endl;			// d deque'si 7 elemanlidir.
	d.resize(3);						// ilk 3 eleman haric diyerleri silindi
	
	print(d);
	cout << d.size() << endl;
*/	
	
	print(d);
	cout << d.size() << endl;			// d deque'si 7 elemanlidir.
	d.resize(10);						// eleman sayilari 10 a yükseldi, (sifir eklendi)
	
	print(d);
	cout << d.size() << endl;
	
	d.resize(10,25);
	print(d);
	
	deque<int> d2(5,9);					// 5 elemanli deque olusturuldu ve baslangic olarak 9 verildi
	print(d2);	
	
	
	return 0;
}
