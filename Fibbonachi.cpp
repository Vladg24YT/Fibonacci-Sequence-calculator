#include <iostream>
#include <cstdlib>
#include <fstream>
#include <windows.h>
#include <stdlib.h>

using namespace std;

	

int main(int argc, char** argv) 
{
	setlocale(LC_ALL, "rus");
	
	unsigned long long int ch1 = 1;
	unsigned long long int ch2 = 0;
	long double a = 0;
	long double b = 0;
	
	unsigned long long int in[94];
	
	cout << "Ряд Фиббоначи (до 93 числа)" << endl;
	cout << "Разработчик: Горский Владислав, учащийся 7 класса <Б> ГБОУ школы № 1598" << endl;
	cout << endl;
	cout << "Доступные команды:" << endl;
	cout << "	View = Вывести первые 93 числа ряда Фиббоначи" << endl;
	cout << "	CH = Вывести только ЧЁТНЫЕ числа" << endl;
	cout << "	Non-CH = Вывести только НЕЧЁТНЫЕ числа" << endl;
	cout << "	Compare = Высчитать и сравнить суммы ЧЁТНЫХ и НЕЧЁТНЫХ чисел" << endl;
	cout << "	quit = Выход из программы" << endl;
	cout << "	Certain Число:(число) = Вывод определённого числа" << endl;
	cout << "	FI = Применить формулу Золотого сечения к числам последовательности Фибоначчи" << endl;
	cout << "	HELP = Вывести всю информацию о командах" << endl;
	
	for(int i=1;i<=93;i++)
	{
		unsigned long long int ch3 = ch1 + ch2;				
		
		in[i] = ch3;
		ch1 = ch2;
		ch2 = ch3;
	}
	
	while(1)
		{	
			cout << endl;
			cout << "Вввод: " << endl;
			string input;
			cin >> input;	
		
			if(input == "View")
			{
				for(int i=1;i<=93;i++)
				{
					cout << i << " число - " << in[i] << endl;
				}
			}
		
		if(input == "CH")
		{
			
			for(int i=1;i<=93;i++)
			{
				//ЧЁТНЫЕ	
				if(in[i]%10==2 || in[i]%10==4 || in[i]%10==6 || in[i]%10==8 || in[i]%10==0)
				{
					cout << "Число " << i << " является чётным: " << in[i] << endl;
					Sleep(100);
				}
			}
		}
		
		if(input == "Non-CH")
		{
			for(int i=1;i<=93;i++)
			{
				//НЕЧЁТНЫЕ
				if(in[i]%10==1 || in[i]%10==3 || in[i]%10==5 || in[i]%10==7 || in[i]%10==9)
				{
					cout << "Число " << i << " является нечётным: " << in[i] << endl;
					Sleep(100);
				}
			}
		}
	
		if(input == "Compare")
		{
			long double sumN = 0;
			long double sumCH = 0;
			long double div = 0.00;
	
			if(sumN==0 && sumCH==0)
			{
				for(int i = 1;i <= 93;i++) 
				{
					if(in[i]%10==2) {sumCH += in[i];}
					else if(in[i]%10==1) {sumN =+ in[i];}
					else if(in[i]%10==4) {sumCH =+ in[i];}
					else if(in[i]%10==3) {sumN =+ in[i];}
					else if(in[i]%10==6) {sumCH =+ in[i];}
					else if(in[i]%10==5) {sumN =+ in[i];}
					else if(in[i]%10==8) {sumCH =+ in[i];}
					else if(in[i]%10==7) {sumN =+ in[i];}
					else if(in[i]%10==0) {sumCH =+ in[i];}
					else if(in[i]%10==9) {sumN =+ in[i];}
				}
				Sleep(140);
				cout << "Сумма чётных: " << sumCH  << endl;
				cout << "Сумма нечётных: " << sumN << endl;
			
				cout << endl;
				if(sumCH > sumN)
				{
					cout << "Сумма чётных больше суммы нечётных на " << sumCH - sumN << endl;
				}
				else if(sumN > sumCH)
				{
					cout << "Сумма нечётных больше суммы чётных на " << sumN - sumCH << endl;
				}
				else if(sumCH==sumN)
				{
					cout << "Сумма чётных равна сумме нечётных: " << sumCH << " = " << sumN << endl;
				}
				
				cout << endl;
				cout << "Сумма всех 94 чисел равна " << sumCH + sumN << endl;
				cout << endl;
				if(sumN<sumCH)
				{
					div = sumCH / sumN;	
					cout << "Если разделить сумму чётных на сумму нечётных, то получится: " << div << endl;
				} 
				else if (sumN>sumCH)
				{
					div = sumN / sumCH;
					cout << "Если разделить сумму чётных на сумму нечётных, то получится: " << div << endl;
				}
				
			}
		}
		
		if(input == "Certain")
		{
			int num = 0;
			cout << "Число: ";
			cin >> num;
			cout << endl;
			if(num>0 && num<=93)
			{
				cout << in[num] << endl;	
			} 	
		}
		
		if(input == "FI")
		{
			long double F1 = 0;
			long double F2 = 0;
			
			for(int i=1;i<=93;i++)
			{
				F1=a/b;
				F2=(a+b)/a;
				cout << i << ".) " << F1 << "=" << F2 << endl;
				a = in[i+1];
				b = in[i];
			}
		}
		
		if(input == "HELP")
		{
			cout << "Ряд Фиббоначи (до 93 числа)" << endl;
	cout << "Разработчик: Горский Владислав, учащийся 7 класса <Б> ГБОУ школы № 1598" << endl;
	cout << endl;
	cout << "Доступные команды:" << endl;
	cout << "	View = Вывести первые 93 числа ряда Фиббоначи" << endl;
	cout << "	CH = Вывести только ЧЁТНЫЕ числа" << endl;
	cout << "	Non-CH = Вывести только НЕЧЁТНЫЕ числа" << endl;
	cout << "	Compare = Высчитать и сравнить суммы ЧЁТНЫХ и НЕЧЁТНЫХ чисел" << endl;
	cout << "	quit = Выход из программы" << endl;
	cout << "	Certain Число:(число) = Вывод определённого числа" << endl;
	cout << "	FI = Применить формулу Золотого сечения к числам последовательности Фибоначчи" << endl;
	cout << "	HELP = Вывести всю информацию о командах" << endl;
		}
	}
	system("pause");
	for(int i=0;i<=93;i++) in[i]=0;
	return 0;
}
	
