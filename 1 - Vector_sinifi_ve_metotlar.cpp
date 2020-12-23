#include <iostream>
#include <vector>			// vector sinifini kullanabilmemiz icin gerekli
using namespace std;
template <typename A>

A kare(A value){				// burada ki A istege bagli
	return value*value;
}

/*
int kare(int value){
	return value*value;
}

double kare(double value){
	return value*value;
}

kare icine yazdigimiz degerin turu ne ise ona gore double veya int  cagrilir. ancak biz bunun yerine template kullanirsak ikisinin yerini karsilar.
*/


int main() {
	
	//cout << kare(12.5);
	
	vector<int> v;								// int tipinde ve v adinda bir vector tanimlandi
	vector<int> v1(5,10);						// int türünde v1 vektoru 5 elemanli ve her elemaninda 10 degeri bulunacak demek
	vector<int> v2(10);							// v2 icinde 10 tane sifir barindirir
	vector<int> v3(&v2[5],&v2[8]);				// v2 nin 5.  elemanindan 8. elemanina kadar kopyala
	vector<int> v4(v1);							// v1'i v4'e kopyala
	
	
	return 0;
}


