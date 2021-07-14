#include <iostream>
using namespace std;

int main () {

int size;

cout << "Enter words size: ";
cin >> size;

char arr[size];

cout << "Enter the word: ";
cin >> arr;

for (int i = 0; i < size; i++) 
	{
	if (arr[i] >= 97)
	{
		arr[i] -= 32;
	}
		else
		{
		arr[i] += 32;

		}
		cout << arr[i];
	}
		cout << endl;
}
