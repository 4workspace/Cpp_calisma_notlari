#include <iostream>
#include <queue>
using namespace std;

/* Kullanilabilen Methodlar;
- ilk giren ilk cikar mantigi gecerli-
Kullanim amaci: isleme aldigimiz elemanlarin sirasi onemli olmadiginda kullaniyoruz

back()			// kuyrugun en sondaki elemanin degerini almak icin kullanilir
front()			// kuyrugun en basinda ki elemanin degerini almak icin kullanilir
empty()			// kuyruk bos mu yoksa dolu mu bildiri
push(value)		// kuyruga deger eklemek icin
pop()			// kuyruktan deger cikarmak için. En basindan degerleri cikartir (ilk giren ilk cikar)

*/

template <typename T>		// Template tanimlandi
void print(queue<T> &q){	// & ile referans goydugumuz icin 1. printte ekrana yazdý ama sonra elemanlari cikarttigi icin 2. printte eleman kalmadi
	while( !q.empty() ){
		cout << q.front() << " " ;
		q.pop();
	}
}

int main() {
	
	queue<int> q;			// q adinda int türünde bir queue tanimlandi
	
	cout << q.empty() << endl ;			// suan kuyruk bos (True doner)
	q.push(5);							// deger eklendi
	
	cout << q.empty() << endl;			// suan kuyrukta eleman var (False doner)
	q.push(2);
	
	cout << q.front() << endl;			// kuyrugun en basinda ki (5) degerini goruruz
	cout << q.back() << endl;			// kuyrugun en sonunda 2 degeri var
	
	q.push(3);
	q.pop();							// kuyrugun en basinda ki (5) elemanini cikardi
	cout << q.front() << endl;			// goruyoruz ki artik kuyguragun en basinda  5 yok 2 var
	
	cout << "Size: " << q.size() << endl;
	
	
	queue<int> q1(q);					// q1 icine q kopyaalandi
	cout << q1.front() << endl;
	q1.pop();							// kuyrukta sadece 3 kaldi
	cout << q1.front() << endl;
	
	
	q1.push(1);
	q1.push(2);
	q1.push(4);
	q1.push(5);
	
	print(q1);
	print(q1);
	
	// NOT: Kuyrukta sonda ncikartma yok sadece bastan cikarma (pop) var.
	return 0;
}
