#include <iostream>
#include <locale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	

	char name[20] = "\0";
	cout << "������� ��� ��������:";
	cin >> name;

	char surname[30] = "\0";
	cout << "������� ������� ��������: ";
	cin >> surname;

	char patronymic[30] = "\0";
	cout << "������� �������� ��������: ";
	cin >> patronymic;

	char group_number[10] = "\0";
	cout << "������� ����� ������ ��������: ";
	cin >> group_number;

	int len = 31;
	int len_str1 = 25 + strlen(group_number);
	int len_str2 = strlen(name) + strlen(surname) + strlen(patronymic) + 6;

	if (len_str1 >= len_str2 && len_str1 > 31)
		len = len_str1;
	else
		if (len_str2 > 31)
			len = len_str2;

	cout << "\n\t\t\t";
	for (int counter = 0; counter < len - 25; counter++)
		cout << " ";

	cout << "*\n\t\t\t* ��������(�): ��. ��	" << group_number;
	for (int counter = 0; counter <= (len - len_str1); counter++)
		cout << " ";

	cout << "*\n\t\t\t* " << surname << " " << name << " " << patronymic;
	for (int counter = 0; counter <= (len - len_str2); counter++)
		cout << " ";
	cout << "*";

	cout << "\n\t\t\t";
	for (int counter = 0; counter < len; counter++)
		cout << "*";
	cout << endl;

	system("pause");

	




	return 0;
}