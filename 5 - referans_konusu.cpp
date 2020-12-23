/* Burada referans konusu anlatilacaktir	*/

#include <iostream>
using namespace std;

void ref_degistir(int &ref1);


int main() {
	
	int a = 10;
	int &ref = a;
/*	
	cout << "a nin ref'siz degeri: " << a << endl;
	ref++;
	cout << "a nin ref'li degeri: " << a << endl;
*/
	
	cout << "a nin ref'siz degeri: " << a << endl;
	ref_degistir(a);									// pointer olsaydi a nin adresini gonderecektik
	cout << "a nin ref'li degeri: " << a << endl;
	
	
	return 0;
}

void ref_degistir(int &ref1)
{
	ref1 = 25;
}
