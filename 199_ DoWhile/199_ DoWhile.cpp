#include <iostream>
using namespace std;

int main()
{
	int x;
	srand(time(0));

	x = rand() % 10;

	cout << "nilai awal : " << x << endl;
	do
	{
		cout << "perulangan do.. while" << endl;
		x = rand() % 10;

		cout << "nilai x : " << x << endl;
	} while (x > 4);
}