#include <iostream>
using namespace std;

int panjang, lebar;

void inputdata() {
	cout << "masukkan nilai panjang : ";
	cin >> panjang;
	cout << "masukkan nilai lebar : ";
	cin >> lebar;
} 
int hitungluas() {
	return panjang * lebar;
}
void bebas() {
	cout << " luasnya adalah : " << hitungluas()<< endl;
}
int main() {
	inputdata();
	bebas();
}
