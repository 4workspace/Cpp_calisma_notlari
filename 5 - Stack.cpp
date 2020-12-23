#include <iostream>
#include <stack>
#include <queue>
using namespace std;

/* Kullanilabilen Methodlar;
- ilk giren son cikar mantigi gecerli (Queue'ye benzer)-
Kullanim amaci: isleme aldigimiz elemanlarin sirasi onemli oldugunda kullaniyoruz

top()			// front()'a benzer, kuyrugun en basinda ki elemanin degerini almak icin kullanilir
empty()			// kuyruk bos mu yoksa dolu mu bildiri
push(value)		// kuyruga deger eklemek icin, en basaekler
pop()			// kuyruktan deger cikarmak için. En basindan degerleri cikartir (ilk giren ilk cikar)
size() 
*/

template <typename T>
void print(stack<T> s){
	while( !s.empty() ){
		cout << s.top() << " ";
		s.pop();
	}
}




int main() {
	/*
	stack<int> s;
	
	cout << s.empty() << endl;
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);
// 50 40 30 20 10 	seklinde siraya girer
	cout << "Size: "<< s.size() << endl;
		
	cout << s.empty() << endl;
	cout << s.top() << endl;			// en son giren elemani gosterir (en son giren en bastaki olur, otobuse binenler gibi)
	
	s.pop();
	cout << s.top() << endl;
	cout << "Size: "<< s.size() << endl;
	
	print(s);
	
	stack<int> s1(s);		// stack s kopyalandi
	
	*/
	
// HEM STACK HEMDE QUEUE BIRLIKTE KULLANIMI
// palindrom (sondan ve bastan okunusu ayni kelime) uygulamasi

	string str = "kabak";
	stack<char> s;
	queue<char> q;
	
	bool palindromMu = true;
	
	for(int i=0 ; i < str.size() ; i++){
		s.push(str[i]);						// bastan ekleme yapar
		q.push(str[i]);						// sondan ekleme yapar
	}	
	
	while( !s.empty() and !q.empty()){
		if(s.top() != q.front()){
			palindromMu = false;
			break;
		}
		s.pop();
		q.pop();
	}
	
	if(palindromMu)
		cout << str << " kelimesi palindrom bir kelimedir" << endl;
	else
		cout << str << " kelimesi palindrom degildir" << endl;
		
	
	return 0;
}
