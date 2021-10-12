#include <iostream>

using namespace std;

void age(int year)
{
	int age;
	age = 2021 - year;
	cout << " tuoi cua ban: " << age;
}

int main()
{
	int year;
	cout << "Nhap nam sinh: ";
	cin >> year;
	age(year);

	return 0;
}