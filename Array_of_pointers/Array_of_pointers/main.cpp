#include <iostream> 
#include <cstdlib>
#include <conio.h>
using namespace std;

char *fortunes[] = {
	"������ ������ ������� � ��� �����.\n",
	"���� ����� ������ ������� ������.\n",
	"�� ������ ���� ����� � �������.\n",
	"������, ��������� ������ � ���� �������� �����.\n",
	"��� �������� ������� ������.\n"
	"���� ������������ � ���.\n"
};
int main()
{
	setlocale(LC_ALL, "rus");
	int chance;
	cout << "����� ������ ���� ������ ������� ����� �������: ";
	while (!kbhit()) rand ();
	cout << '\n';
	chance = rand();
	chance = chance % 6;
	cout << fortunes [chance];
	system ("pause");
	return 0;
}