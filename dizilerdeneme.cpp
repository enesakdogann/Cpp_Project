#include <iostream>
using namespace std;

int main() {
    int dizi[5];
    int a = 10;  

    for (int i = 0; i < 5; i++) {
        dizi[i] = a;
        a += 15;   
    }

    
    for (int i = 0; i < 5; i++) {
        cout << dizi[i] << endl;
    }

    return 0;
}
