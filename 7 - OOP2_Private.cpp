#include <iostream>

using namespace std;

class Employee{
	private:
		string name;
		
	public:
		void setName(string isim)			// private olarak tanýmlanan degiskene isim atamak icin
		{
			name = isim;
		}
		
		string getName()					// private de tanimlanan name almak icin
		{
			return name;
		}
	
	
};

int main()
{
	Employee employee;
	
	employee.setName("Ahmet Cetin");
	
	cout << employee.getName() << endl;
	
	
	return 0;
}
