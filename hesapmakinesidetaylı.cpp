#include<iostream>
#include<cmath>
using namespace std;
int main() {
	cout << "Hangi islemi yapacaksin" << endl;
	cout << "1-toplama\n2-cikarma\n3-carpma\n4-bolme\n5-us alma\n6-karekok alma\n7-trigonometrik" << endl;
	int a;
	double b=0, c;
	

	cin >> a;
	if (a == 1) {
		cout << "Iki sayi gir" << endl;
		cin >> b >> c;
		cout << "Toplam: " << b + c << endl;

	}
	else if (a == 2) {
		cout << "Iki sayi gir" << endl;
		cin >> b >> c;
		cout << "Fark: " << b - c << endl;
	}
	else if (a == 3) {
		cout << "Iki sayi gir" << endl;
		cin >> b >> c;
		cout << "Carpim: " << b * c << endl;
	}
	else if (a == 4) {
		cout << "Iki sayi gir" << endl;
		cin >> b >> c;
		
			cout << "Bolum: " << b / c << endl;
		
	}
	else if (a == 5) {
		cout << "Taban ve us gir" << endl;
		cin >> b >> c;
		cout << "Sonuc: " << pow(b, c) << endl;
	}
	else if (a == 6) {
		cout << "Bir sayi gir" << endl;
		cin >> b;
		cout << "Karekok: " << sqrt(b) << endl;

	
	}
	else if (a == 7) {
		cout << "deger gir" << endl;
		cin >> b;
		double rad = b * (3.14159265358979323846 / 180.0); 
		cout << "Sin: " << sin(rad) << endl;
		cout << "Cos: " << cos(rad) << endl;
		cout << "Tan: " << tan(rad) << endl;
	}
	else {
		cout << "Gecersiz islem secimi!" << endl;
	}
	

}
	