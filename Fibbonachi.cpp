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
	
	cout << "Fibonacci sequence (till the 93rd number)" << endl;
	cout << "Copyright 2019 Vladislav Gorski\n\nLicensed under the Apache License, Version 2.0 (the "License");\nyou may not use this file except in compliance with the License. \nYou may obtain a copy of the License at\n\nhttp://www.apache.org/licenses/LICENSE-2.0\n\nUnless required by applicable law or agreed to in writing, software distributed under the License is distributed on an \"AS IS\" BASIS, \nWITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, \neither express or implied. See the License for the specific language governing permissions and limitations under the License." << endl;
	cout << endl;
	cout << "Commands:" << endl;
	cout << "	View = Print the first 93 numbers of the Fibonacci sequence" << endl;
	cout << "	CH = Print only even numbers" << endl;
	cout << "	Non-CH = Print only uneven numbers" << endl;
	cout << "	Compare = Calculate and compare the sum of even and sum of uneven numbers" << endl;
	cout << "	quit = Close the app" << endl;
	cout << "	FI = Apply the Goledn Proportion formula to the sequence" << endl;
	cout << "	HELP = Print this block" << endl;
	
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
			cout << "Input: " << endl;
			string input;
			cin >> input;	
		
			if(input == "View")
			{
				for(int i=1;i<=93;i++)
				{
					cout << i << " number - " << in[i] << endl;
				}
			}
		
		if(input == "CH")
		{
			
			for(int i=1;i<=93;i++)
			{
				//×¨ÒÍÛÅ	
				if(in[i]%10==2 || in[i]%10==4 || in[i]%10==6 || in[i]%10==8 || in[i]%10==0)
				{
					cout << "Number " << i << " is even: " << in[i] << endl;
					Sleep(100);
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
					cout << "Number " << i << " is uneven: " << in[i] << endl;
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
				cout << "Evens' sum: " << sumCH  << endl;
				cout << "Unevens' sum: " << sumN << endl;
			
				cout << endl;
				if(sumCH > sumN)
				{
					cout << "Evens' sum is bigger than unevens' one in " << sumCH - sumN << endl;
				}
				else if(sumN > sumCH)
				{
					cout << "Unevens' sum is bigger than evens' one in " << sumN - sumCH << endl;
				}
				else if(sumCH==sumN)
				{
					cout << "Unevens' sum is equal to evens' one: " << sumCH << " = " << sumN << endl;
				}
				
				cout << endl;
				cout << "Sum of all 94 numbers equals " << sumCH + sumN << endl;
				cout << endl;
				if(sumN<sumCH)
				{
					div = sumCH / sumN;	
					cout << "If to divide evens' sum by unevens' one, we'll get " << div << endl;
				} 
				else if (sumN>sumCH)
				{
					div = sumN / sumCH;
					cout << "If to divide unevens' sum by evens' one, we'll get " << div << endl;
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
			cout << "Fibonacci sequence (till the 93rd number)" << endl;
			cout << "Copyright 2019 Vladislav Gorski\n\nLicensed under the Apache License, Version 2.0 (the "License");\nyou may not use this file except in compliance with the License. \nYou may obtain a copy of the License at\n\nhttp://www.apache.org/licenses/LICENSE-2.0\n\nUnless required by applicable law or agreed to in writing, software distributed under the License is distributed on an \"AS IS\" BASIS, \nWITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, \neither express or implied. See the License for the specific language governing permissions and limitations under the License." << endl;
			cout << endl;
			cout << "Commands:" << endl;
			cout << "	View = Print the first 93 numbers of the Fibonacci sequence" << endl;
			cout << "	CH = Print only even numbers" << endl;
			cout << "	Non-CH = Print only uneven numbers" << endl;
			cout << "	Compare = Calculate and compare the sum of even and sum of uneven numbers" << endl;
			cout << "	quit = Close the app" << endl;
			cout << "	FI = Apply the Goledn Proportion formula to the sequence" << endl;
			cout << "	HELP = Print this block" << endl;
		}
	}
	system("pause");
	for(int i=0;i<=93;i++) in[i]=0;
	return 0;
}
	
