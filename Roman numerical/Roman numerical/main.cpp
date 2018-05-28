#include <fstream>
#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	int length = 0;                     //Начальное значение длинны первого и второго файла
	int length2 = 0;

	ifstream fin ("p089_roman.txt"); 
	if(fin.is_open()){                 //если открытие файла срабатывает
		ifstream fin;
		fin.open("p089_roman.txt");    //Открытие файла с заданием
		string ch;                     //переменная в которую построчно будем вписывать файл
		while (getline(fin, ch))       //построчное считывание файла
		{
			length += ch.size();       //К длине файла прибавляем длину конкретной строки
		}
		fin.close();                   //закрыли файл
		cout <<length<<'\n';
	}
	else {
		cout << "File not found" << endl;    //если файл не открылся, выдать ошибку
		system("pause");
	}
	string textline;                    
	ofstream fout ("Output.txt");           //файл куда будем записывать
	if(fin.is_open()){
		if(fout.is_open()){
			ifstream fin;
			ofstream fout;
			fin.open("p089_roman.txt");
			fout.open("Output.txt");
			string ch;
			while (getline(fin, ch))
			{ //6 фий для поиска подстраки с заменой, отдельно для каждого варианта
				int first = ch.find("DCCC",0);         
				 while (first != string::npos)
				 {
					 ch.replace(first, 4, "CM");
					 first = textline.find("DCCC", first);
				 }
				 int second = ch.find("CCCC",0);
				 while (second != string::npos)
				 {
					 ch.replace(second, 4, "CM");
					 second = textline.find("CCCC", second);
				 }
				 int third = ch.find("LXXXX",0);
				 while (third != string::npos)
				 {
					 ch.replace(third, 4, "CM");
					 third = textline.find("LXXXX", third);
				 }
				 int fourth = ch.find("XXXX",0);
				 while (fourth != string::npos)
				 {
					 ch.replace(fourth, 4, "CM");
					 fourth = textline.find("XXXX", fourth);
				 }
				 int fiveth = ch.find("VIIII",0);
				 while (fiveth != string::npos)
				 {
					 ch.replace(fiveth, 4, "CM");
					 fiveth = textline.find("VIIII", fiveth);
				 }
				 int sixth = ch.find("IIII",0);
				 while (sixth != string::npos)
				 {
					 ch.replace(sixth, 4, "CM");
					 sixth = textline.find("IIII", sixth);
				 }

				length2 += ch.size();    //подсчитывание длины 
				fout << ch <<'\n';
			}
		}
		else {
		cout << "File2 not found" << endl;
		system("pause");
		}
	}
	else {
		cout << "File not found" << endl;
		system("pause");
	}
	fout.close();
	fin.close();
	cout <<length<<" - " <<length2<<" = "<<length-length2<<'\n'; //на сколько изменилась к-во символов
	system("pause");
	return 0;
}
	
