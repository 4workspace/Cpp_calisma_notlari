#include <iostream>
#include <queue>
using namespace std;

/* Priority Queue kullanimi
Belli bir öncelige göre elemanlarin eklenmesini istegimizde kullaniriz.	(Hasta kayit sisteminde yasli ve sakatlara oncelik verilmesi gibi)
Öceligi kendimize gore ayarliyoruz ama varsayilan olarak < operatorune göre siralniyor

- priority_queue<int> object;
- priority_queue<int> (inputIterator first, inputIterator last, compare &cmp, secuence list veya vector);
- priority_queue<int> (compare &cmp, secuence list veya vector);
- priority_queue<int> object(container);							// kopyalama icin

top()			// bastaki elemani verir
empty()
push(vale)		// öncelige göre dinamik hesap yaparak, elemani uygun siraya ekler
pop()			// her zaman bastan cikartir
size()
swap()			// iki öncelikli kuyrugu aralarinda takas yapmak için

*/

// 1. priority_queue<int> object;
template <typename T>
void print(priority_queue<T> p){
	while( !p.empty() ){
		cout << p.top() << " ";
		p.pop();
	}
	cout << endl;
}


// 2. priority_queue<int> (inputIterator first, inputIterator last, compare &cmp, secuence list veya vector);
template <typename T>
bool cmp(T x, T y){
	return x > y;
}


int main() {
	
	priority_queue<int> p;
	
	cout << p.empty() << endl;
	p.push(2);
	p.push(3);
	p.push(5);
	p.push(11);
	p.push(7);
	
/* EKLEME ISLMI SOYLE YAPILIR
	2 direk eklendi
	3 eklenirken 2 ile karsilastirdi ve sonuc 3 2 seklinde siralandi
	5 eklenirken 5	// 	// sonuc 5 3 2
	11 eklenirken	11 5 3 2 seklinde siralanir
	7 eklenrken 	11 7 5 3 2 seklinde siralanir.
*/

	cout << p.empty() <<  endl;
	cout << p.top() << endl;
	print(p);
	
// ONCELIGI DEGISTIRMEK ISTERSEK (daha önce öncelik < operatörüne göreydi)	
	
	cout << "P2 container icerigi" << endl;
	
	priority_queue<int,vector<int>,bool(*)(int,int)> p2(cmp);
	
	p2.push(5);
	p2.push(3);
	p2.push(7);
	p2.push(11);
	p2.push(2);

	print(p2);
	
	
	
	
	return 0;
}
