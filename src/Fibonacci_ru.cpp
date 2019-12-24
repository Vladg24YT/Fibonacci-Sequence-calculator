/**
Copyright 2019 VladG24YT
Licensed under the Apache License, Version 2.0 (the "License"); 
you may not use this file except in compliance with the License. 
You may obtain a copy of the License at
   http://www.apache.org/licenses/LICENSE-2.0
Unless required by applicable law or agreed to in writing, software distributed under the License is distributed on an "AS IS" BASIS, 
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. 
See the License for the specific language governing permissions and limitations under the License.
*/
#include <iostream>
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
	
  cout << "Последовательность Фибоначчи (до 93 числа)" << endl;
  cout << "Copyright 2019 Vladislav Gorski\n\nLicensed under the Apache License, Version 2.0 (the \"License\");\nyou may not use this file except in compliance with the License. \nYou may obtain a copy of the License at\n\nhttp://www.apache.org/licenses/LICENSE-2.0\n\nUnless required by applicable law or agreed to in writing, software distributed under the License is distributed on an \"AS IS\" BASIS, \nWITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, \neither express or implied. See the License for the specific language governing permissions and limitations under the License." << endl;
  cout << endl;
  cout << "Команды:" << endl;
	cout << "	View = Вывести первые 93 числа последовательности" << endl;
	cout << "	CH = Вывести только чётные числа" << endl;
	cout << "	Non-CH = Вывести только нечётные числа" << endl;
	cout << "	Compare = Высчитать и сопоставить суммы чётных и нечётных чисел" << endl;
	cout << "	quit = Закрыть приложение" << endl;
	cout << "	FI = Применить золотую пропорцию к числам последовательности" << endl;
	cout << "	HELP = Вывести список команд" << endl;
	
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
			cout << "Ввод: " << endl;
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
				//×¨ÒÍÛÅ	
				if(in[i]%10==2 || in[i]%10==4 || in[i]%10==6 || in[i]%10==8 || in[i]%10==0)
				{
					cout << "Число " << i << " чётное: " << in[i] << endl;
				}
			}
		}
		
		if(input == "Non-CH")
		{
			for(int i=1;i<=93;i++)
			{
				//ÍÅ×¨ÒÍÛÅ
				if(in[i]%10==1 || in[i]%10==3 || in[i]%10==5 || in[i]%10==7 || in[i]%10==9)
				{
					cout << "Число " << i << " нечётное: " << in[i] << endl;
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
					cout << "Сумма нечётных равна сумме чётных: " << sumCH << " = " << sumN << endl;
				}
				
				cout << endl;
				cout << "Сумма всех 93 чисел составляет " << sumCH + sumN << endl;
				cout << endl;
				if(sumN<sumCH)
				{
					div = sumCH / sumN;	
					cout << "Отношенние суммы чётных к сумме нечётных составляет " << div << endl;
				} 
				else if (sumN>sumCH)
				{
					div = sumN / sumCH;
					cout << "Отношение суммы нечётных к сумме чётных составляет " << div << endl;
				}
				
			}
		}
		
		if(input == "Certain")
		{
			int num = 0;
			cout << "Number: ";
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
			cout << "Последовательность Фибоначчи (до 93 числа)" << endl;
			cout << "Copyright 2019 Vladislav Gorski\n\nLicensed under the Apache License, Version 2.0 (the \"License\");\nyou may not use this file except in compliance with the License. \nYou may obtain a copy of the License at\n\nhttp://www.apache.org/licenses/LICENSE-2.0\n\nUnless required by applicable law or agreed to in writing, software distributed under the License is distributed on an \"AS IS\" BASIS, \nWITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, \neither express or implied. See the License for the specific language governing permissions and limitations under the License." << endl;
			cout << endl;
			cout << "Команды:" << endl;
			cout << "	View = Вывести первые 93 числа последовательности" << endl;
			cout << "	CH = Вывести только чётные числа" << endl;
			cout << "	Non-CH = Вывести только нечётные числа" << endl;
			cout << "	Compare = Высчитать и сопоставить суммы чётных и нечётных чисел" << endl;
			cout << "	quit = Закрыть приложение" << endl;
			cout << "	FI = Применить золотую пропорцию к числам последовательности" << endl;
			cout << "	HELP = Вывести список команд" << endl;
		}
	}
	system("pause");
	for(int i=0;i<=93;i++) in[i]=0;
	return 0;
}
