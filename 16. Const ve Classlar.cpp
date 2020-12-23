#include <iostream>
using namespace std;

class Test{
private:
	int a;
	
public:
	Test(int a){
		this->a = a;
	}	
	void deneme() {
		cout << "Const olmayan metot denemesi" << endl;
	}
	int getValue() const{		// burda ki const'in anlami, bu metot herhangi bir degeri degistiremez. Ayrica const olmayan gerhangi bir degeri cagiramaz.
		
	//	this->a = 100;			// hatali!. getValue metodu const olarak tanimlndigi icin a degeri degistirilez.
	//	deneme();				// bu da hatali cunku deneme metodu (fonksiyonu) const degil. const yaparsak calisirç
		return this->a;
	}
};

void test(const Test &ReferansAl){				// & ile Test class'indan bir objenin referansini alacagimizi belirtiyoruz. Amac obje buraya kopyalanip gereksiz bir gecikmeye sebep olmamasi. referans ile direk erisim oluyor.
	cout << ReferansAl.getValue() << endl;		// Ayrica cost diyerek test objesinin uzerinde herhangi bir degsiklige izin vermiyoruz.
	
}

int main() {
	
	Test test1(50);					// dolayli yoldan private degiskeni olan a'ya ulastik.
	test(test1);

	return 0;
}
