#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	long float op1 = 0, op2 = 0, temp = 1, otv;
	while (temp == 1)
	{
		cout << "������� ������ �����" << endl;
		cin >> op1;
		while (temp == 0 || temp == 1)
		{
			cout << "������� ������ �����" << endl;
			cin >> op2;
			cout << "�������� �������� ��� �������:" << endl;
			cout << "�������� - 1" << endl;
			cout << "��������� - 2" << endl;
			cout << "��������� - 3" << endl;
			cout << "������� - 4" << endl;
			cin >> temp;
			if (temp == 1)
			{
				otv = op1 + op2;
				cout << "����� = " << otv << endl;
			}
			else if (temp == 2)
			{
				otv = op1 - op2;
				cout << "����� = " << otv << endl;
			}
			else if (temp == 3)
			{
				otv = op1 * op2;
				cout << "����� = " << otv << endl;
			}
			else if (temp == 4)
			{
				otv = op1 / op2;
				cout << "����� = " << otv << endl;
			}
			else if (temp >= 5)
			cout << "������� ���� ������� ��������!" << endl;
			cout << "������������ ����� - 0" << endl;
			cout << "���������� ������ - 1" << endl;
			cout << "����� - 2" << endl;
			cin >> temp;
			if (temp == 0)
			{
				op1=otv;
			}
			else
			{
				break;
			}
		}
	}
	system("pause");
}