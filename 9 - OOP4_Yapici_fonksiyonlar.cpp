#include <iostream>

using namespace std;

class Employee{
	private:
		string name;
		int age;
		
	public:
		Employee(string isim, int yas)				// Yapici fonksiyonumuz bu oluyor. Class ismi ile bire bir ayni olmali
		{
			name = isim;
			age = yas;
		}
		
/*		Artik set fonksiyonlarina gerek yok.

		void setName(string isim)			// private olarak tanýmlanan degiskene isim atamak icin
		{
			name = isim;
		}
		void setAge(int yas)				// private olarak tanimlanan degiskene yas atamak icin
		{
			age = yas;
		}
*/
/*		showInfo() fonksiyonu ile get fonksiyonlarina gerek kalmadi
		string getName()					// private de tanimlanan name almak icin
		{
			return name;
		}
		int getAge()					// private de tanimlanan age almak icin
		{
			return age;
		}
*/		
		void showInfos()
		{
			cout << "isim: " << name << endl;
			cout << "Yas: " << age << endl;
		}
	
};

int main()
{
	Employee employee("Ahmet", 27);
		
	employee.showInfos();
	
	return 0;
}
