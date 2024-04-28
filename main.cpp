#include <iostream>
using namespace std;

// программа выводит символы вертикально либо горизонтально 

int main()
{
	int var, a=0, f = 0; char i;
	cout << "Введите количество символов = "; cin >> var;
	cout << "Введите символ, который должен отобразиться = "; cin >> i;
	cout << "Горизонтальна = 0 или Вертикальная = 1 - "; cin >> f;

	if (f==0)
	{
		while (++a <= var)
		{
			cout << i; // горизонтальная 
		}
	}
	else
	{
		while (++a <= var)
		{
			cout << i << endl; // вертикальная 
		}
	}
}