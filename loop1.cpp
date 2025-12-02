#include<iostream>
using namespace std;


int main() {

	int a, b, sum;
	char ans = 'e';

while (ans == 'e' || ans == 'E') {
		cout << "sayi gir ";
		cin >> a;
		cout << "sayi gir ";
		cin >> b;

		sum = a + b;
		cout << "toplam: " << sum << endl;
		cout << "devam etmek istiyor musunuz (e/E) ";
		cin >> ans;

	}

	cout << "program bitti" << endl;
}
