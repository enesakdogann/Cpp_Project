#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main() {
	ifstream f("file.txt");
	string satir;
	while (getline(f, satir)) {
		cout << satir << endl;
	}
	
	

	f.close();
	return 0;
		

}