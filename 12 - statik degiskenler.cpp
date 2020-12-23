#include <iostream>
using namespace std;

void test()
{
	int i = 3;
	i++;
	cout << "i'nin degeri: " << i << endl;	
} 

void testStatic()
{
	static int i = 3;
	i++;
	cout << "i'nin statik degeri: " << i << endl;	
}

int main() 
{
	test();
	test();
	test();	
	
	testStatic();
	testStatic();
	testStatic();
	
	return 0;
}

/*
	i degisknini test fonksiyonun da normal olarak tanimlandigi icin ' degiskeni, test() her cagrildiginda tekrar tekrar olusturulur.
	ama testStatic fonksiyonunda static olarak tanimlanan i degiskeni, testStatic() fonk. her cagrildiginda bakiyor zaten olusturulmus ve 13. satiri atliyor.

*/
