#include <iostream>
using namespace std;

int sisi;

void inputdata() {
	cout << "masukkan nilai sisi : ";
	cin >> sisi;
}

int hitungluas() {
	return sisi * sisi;
}
void display() {
	cout << " luas persegi : " << hitungluas() << endl;
}

int main()
{
	inputdata();
	display();
}