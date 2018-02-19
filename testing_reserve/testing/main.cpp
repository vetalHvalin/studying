#include <string.h>
#include <stdio.h>
#include <iostream>
#include <assert.h>
#include "header.h"

using namespace std;

void InitMindGame()
{
	int min_value = 0;
	int max_value = 0;
	cout<<"Enter min value:\n";
	cin>>min_value;
	while(cin.fail()) {
		cout << "Error! Enter a number, please" << endl;
		cin.clear();
		cin.ignore(256,'\n');
		cin >> min_value;
	}
	cout<<"Enter max value:\n";
	cin>>max_value;
	while(cin.fail() || max_value <= min_value)
	{
		if (cin.fail() )
			cout << "Error! Enter a number, please" << endl;
		else
			cout << "Error! Enter a number, bigger then min value" << endl;
		cin.clear();
		cin.ignore(256,'\n');
		cin >> max_value;
	}
	StartGame(min_value, max_value);
}

int TryFoundNumber(int num)
{
	cin>>num;
	while(cin.fail()) {
		cout << "It's not a number. Try again\n" << endl;
		cin.clear();
		cin.ignore(256,'\n');
		cin >> num;
	}
	return num;
}

void StartGame(int first_value, int last_value)
{
	int random_number = first_value + rand() % last_value;
	cout << "Okay. Try to guess a number\n";
	int num = random_number-1;
	while (num != random_number)
	{
		num = TryFoundNumber(num);
		if(num > random_number)
		{
			cout << "My number is lower\n";
		}
		else if(num < random_number)
		{
			cout << "My number is higher\n";
		}
	}
	cout << "Yes! You win!\nWant play Again?(yes/no)\n";
	char* str = new char[];
	cin >> str;
	if (strcmp(str, "yes") == 0)
	{
		InitMindGame();
	}
	else if(strcmp(str, "no") == 0)
	{
		cout<<"\nEnter command:\nRun\nExit\n\n";
		InitGame();	
	}
	else
	{
		cout<<"Invalid command. Returning to Main Menu.";
		cout<<"\nEnter command:\nRun\nExit\n\n";
		InitGame();	
	}
}

void InitGame()
	{
		char* s = new char[];
		cin >> s;
		if (strcmp(s, "Exit") == 0)
		{
			return;
		}
		else if(strcmp(s, "Run") == 0)
		{
			InitMindGame();
		}
		else
		{
			cout<<"Wrong Command. Try else.\n";
			cout<<"Enter command:\nRun\nExit\n\n";
			InitGame();	
		}
	}

int main()
{	
	cout<<"Enter command:\nRun\nExit\n\n";	
	
	InitGame();	
	system("pause");
	return 0;
}