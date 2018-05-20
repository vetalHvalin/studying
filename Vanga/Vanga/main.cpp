#include <iostream> 
#include <cstdlib>
#include <conio.h>
using namespace std;

char *money[] = {
	"Вскоре деньги потекут к вам рекой.\n",
	"Поберегите силы, возможны скорые потери.\n",
	"Деньги, вложенные сейчас в дело принесут доход.\n",
	"Спонтанная покупка может разочаровать.\n",
	"Ждет повышение.\n"
};

char *future[] = { 
	"Вашу жизнь озарит сильная любовь.\n",
	"Вы будете жить долго и щасливо.\n",
	"Предстоит долгая поездка.\n",
	"Возможны проблемы с правосудием.\n",
	"Возможны сиьные потрясения.\n"
};

char *love[] = {
	"Вас ждет любовь\n",
	"Что-то прекрасное уже стучиться в вашу жизнь\n",
	"Присмотритесь к окружающим, они что-то затевают\n",
	"Пора выходить из дома!\n",
	"Тот чувак в зеркале просто прекрасен!\n"
};

int main()
{
	setlocale(LC_ALL, "rus");
	char  choice[6]; 
	int chance;
	cout << "Вас приветствует Vanga! \n";
	cout << "У вас есть одна попытка. Что желаете узнать?\n";
	cout << "Future\n";
	cout << "Money\n";
	cout << "Love\n";
	cout << "Exit\n";
	do {
		cin >> choice;
		if (!strcmp(choice, "Future")) { 
			cout << "Подумайте об этом и нажмите любую кнопку ";
			while (!kbhit()) rand ();
			cout << '\n';
			chance = rand();
			chance = chance % 5;
			cout << future [chance];
			break;
		}
		else {
			if (!strcmp(choice, "Money")) {
				cout << "Подумайте об этом и нажмите любую кнопку ";
				while (!kbhit()) rand ();
				cout << '\n';
				chance = rand();
				chance = chance % 5;
				cout << money [chance];
				break;
			}
			else {
				if (!strcmp(choice, "Love")) {
					cout << "Подумайте об этом и нажмите любую кнопку  ";
					while (!kbhit()) rand ();
					cout << '\n';
					chance = rand();
					chance = chance % 5;
					cout << love [chance];
					break;
				}
				else {
					if (!strcmp(choice, "Exit")){
						cout << "До свидания!";
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