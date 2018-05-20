#include <iostream>
#include <stdio.h>
using namespace std;

const int SIZE = 8;
int money[SIZE] = {1, 2, 5, 10, 20, 50, 100, 200};


int N(int S, int i)
{
	if (i == 1000)
	{
		i = SIZE-1;
	}
	if (S < 0 || i < 0) return 0;
	if (S == 0 || i == 0) return 1;
	return N(S, i - 1) + N(S - money[i], i);
}

int main(){
	setlocale (LC_ALL, "rus");

	int count = 200;
	printf("Число вариантов размена равно %d\n", N(count, 1000));
	system ("pause");
	return 0;
}