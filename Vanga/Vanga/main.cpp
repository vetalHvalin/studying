#include <iostream> 
#include <cstdlib>
#include <conio.h>
using namespace std;

char *money[] = {
	"������ ������ ������� � ��� �����.\n",
	"���������� ����, �������� ������ ������.\n",
	"������, ��������� ������ � ���� �������� �����.\n",
	"���������� ������� ����� ������������.\n",
	"���� ���������.\n"
};

char *future[] = { 
	"���� ����� ������ ������� ������.\n",
	"�� ������ ���� ����� � �������.\n",
	"��������� ������ �������.\n",
	"�������� �������� � �����������.\n",
	"�������� ������ ����������.\n"
};

char *love[] = {
	"��� ���� ������\n",
	"���-�� ���������� ��� ��������� � ���� �����\n",
	"������������� � ����������, ��� ���-�� ��������\n",
	"���� �������� �� ����!\n",
	"��� ����� � ������� ������ ���������!\n"
};

int main()
{
	setlocale(LC_ALL, "rus");
	char  choice[6]; 
	int chance;
	cout << "��� ������������ Vanga! \n";
	cout << "� ��� ���� ���� �������. ��� ������� ������?\n";
	cout << "Future\n";
	cout << "Money\n";
	cout << "Love\n";
	cout << "Exit\n";
	do {
		cin >> choice;
		if (!strcmp(choice, "Future")) { 
			cout << "��������� �� ���� � ������� ����� ������ ";
			while (!kbhit()) rand ();
			cout << '\n';
			chance = rand();
			chance = chance % 5;
			cout << future [chance];
			break;
		}
		else {
			if (!strcmp(choice, "Money")) {
				cout << "��������� �� ���� � ������� ����� ������ ";
				while (!kbhit()) rand ();
				cout << '\n';
				chance = rand();
				chance = chance % 5;
				cout << money [chance];
				break;
			}
			else {
				if (!strcmp(choice, "Love")) {
					cout << "��������� �� ���� � ������� ����� ������  ";
					while (!kbhit()) rand ();
					cout << '\n';
					chance = rand();
					chance = chance % 5;
					cout << love [chance];
					break;
				}
				else {
					if (!strcmp(choice, "Exit")){
						cout << "�� ��������!";
						break;
					}				
					else cout << "Invalid input. Please, try again \n";
				}
			}
		}
	} while (strcmp(choice, "Exit"));
	system ("pause");
	return 0;
}