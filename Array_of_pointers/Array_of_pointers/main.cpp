#include <iostream> 
#include <cstdlib>
#include <conio.h>
using namespace std;

char *fortunes[] = {
	"Вскоре деньги потекут к вам рекой.\n",
	"Вашу жизнь озарит сильная любовь.\n",
	"Вы будете жить долго и щасливо.\n",
	"Деньги, вложенные сейчас в дело принесут доход.\n",
	"Вас окружают хорошие друзья.\n"
	"Небо благосклонно к вам.\n"
};
int main()
{
	setlocale(LC_ALL, "rus");
	int chance;
	cout << "Чтобы узнать свою судьбу нажмите любую клавишу: ";
	while (!kbhit()) rand ();
	cout << '\n';
	chance = rand();
	chance = chance % 6;
	cout << fortunes [chance];
	system ("pause");
	return 0;
}