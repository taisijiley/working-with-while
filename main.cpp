#include <iostream>
using namespace std;

// ��������� ������� ������� ����������� ���� ������������� 

int main()
{
	int var, a=0, f = 0; char i;
	cout << "������� ���������� �������� = "; cin >> var;
	cout << "������� ������, ������� ������ ������������ = "; cin >> i;
	cout << "������������� = 0 ��� ������������ = 1 - "; cin >> f;

	if (f==0)
	{
		while (++a <= var)
		{
			cout << i; // �������������� 
		}
	}
	else
	{
		while (++a <= var)
		{
			cout << i << endl; // ������������ 
		}
	}
}