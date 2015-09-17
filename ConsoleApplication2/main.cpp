#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	long float op1 = 0, op2 = 0, temp = 1, otv;
	while (temp == 1)
	{
		cout << "Введите первое число" << endl;
		cin >> op1;
		while (temp == 0 || temp == 1)
		{
			cout << "Введите второе число" << endl;
			cin >> op2;
			cout << "Выберите операцию над числами:" << endl;
			cout << "Сложение - 1" << endl;
			cout << "Вычитание - 2" << endl;
			cout << "Умножение - 3" << endl;
			cout << "Деление - 4" << endl;
			cin >> temp;
			if (temp == 1)
			{
				otv = op1 + op2;
				cout << "Ответ = " << otv << endl;
			}
			else if (temp == 2)
			{
				otv = op1 - op2;
				cout << "Ответ = " << otv << endl;
			}
			else if (temp == 3)
			{
				otv = op1 * op2;
				cout << "Ответ = " << otv << endl;
			}
			else if (temp == 4)
			{
				otv = op1 / op2;
				cout << "Ответ = " << otv << endl;
			}
			else if (temp >= 5)
			cout << "Неверно была выбрана операция!" << endl;
			cout << "Использовать ответ - 0" << endl;
			cout << "Продолжить работу - 1" << endl;
			cout << "Выход - 2" << endl;
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