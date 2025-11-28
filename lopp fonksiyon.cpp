
#include<iostream>
#include<cmath>

using namespace std;
void toplama() {
    double x, y;
    cout << "Iki sayi gir: ";
    cin >> x >> y;
    cout << "Toplam: " << x + y << endl;
}
void cikarma() {
    double x, y;
    cout << "iki sayi gir :";
    cin >> x >> y;
    cout << "SOnuc:" << x - y << endl;
}
void carpma() {
    double x, y;
    cout << "iki sayi gir";
    cin >> x >> y;
    cout << "carpim:" << x * y << endl;
}
void b�lme() {
    double x, y;
    cout << "iki sayi gir";
    cin >> x >> y;
    cout << "bolum:" << x / y << endl;

}
void us() {
    double x, y;
    cout << "taban ve us gir:";
    cin >> x >> y;
    cout << "sonuc:" << pow(x, y) << endl;
}

void karekok() {
    double x;
    cout << "sayi gir";
    cin >> x;
    cout << "karekok" << sqrt(x) << endl;

}
void trigo() {
    cout << "aci gir";
    double x;
    cin >> x;
    double rad = x * (3.14159265358979323846 / 180.0);
    cout << "sin: " << sin(rad) << endl;
    cout << "cos: " << cos(rad) << endl;
    cout << "tan: " << tan(rad) << endl;


}

int sum(int a, int b) {
    return a + b;
}

int main() {
    int a=0;
    while (true) {
        cout << "hangi islemi yapacaksin" << endl;
        cout << " 1 - toplama \n 2 - cikarma \n 3 - carpma \n 4 - bolme \n 5 - us alma \n 6 - karekok \n 7 - trigonometrik islemler\n";
        int a;
        double x = 0, y;


        cin >> a;
        if (a == 1) {
            toplama();
        }
        else if (a == 2) {
            cikarma();
        }
        else if (a == 3) {
            carpma();
        }
        else if (a == 4) {
            b�lme();

        }
        else if (a == 5) {
            us();

        }
        else if (a == 6) {
            karekok();
        }
        else if (a == 7) {
            trigo();

        }
        if(a== -1){
            break;
		}
    }	
    return 0;

}