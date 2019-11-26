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
	
	cout << "��� ��������� (�� 93 �����)" << endl;
	cout << "�����������: ������� ���������, �������� 7 ������ <�> ���� ����� � 1598" << endl;
	cout << endl;
	cout << "��������� �������:" << endl;
	cout << "	View = ������� ������ 93 ����� ���� ���������" << endl;
	cout << "	CH = ������� ������ ר���� �����" << endl;
	cout << "	Non-CH = ������� ������ ��ר���� �����" << endl;
	cout << "	Compare = ��������� � �������� ����� ר���� � ��ר���� �����" << endl;
	cout << "	quit = ����� �� ���������" << endl;
	cout << "	Certain �����:(�����) = ����� ������������ �����" << endl;
	cout << "	FI = ��������� ������� �������� ������� � ������ ������������������ ���������" << endl;
	cout << "	HELP = ������� ��� ���������� � ��������" << endl;
	
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
			cout << "�����: " << endl;
			string input;
			cin >> input;	
		
			if(input == "View")
			{
				for(int i=1;i<=93;i++)
				{
					cout << i << " ����� - " << in[i] << endl;
				}
			}
		
		if(input == "CH")
		{
			
			for(int i=1;i<=93;i++)
			{
				//ר����	
				if(in[i]%10==2 || in[i]%10==4 || in[i]%10==6 || in[i]%10==8 || in[i]%10==0)
				{
					cout << "����� " << i << " �������� ������: " << in[i] << endl;
					Sleep(100);
				}
			}
		}
		
		if(input == "Non-CH")
		{
			for(int i=1;i<=93;i++)
			{
				//��ר����
				if(in[i]%10==1 || in[i]%10==3 || in[i]%10==5 || in[i]%10==7 || in[i]%10==9)
				{
					cout << "����� " << i << " �������� ��������: " << in[i] << endl;
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
				cout << "����� ������: " << sumCH  << endl;
				cout << "����� ��������: " << sumN << endl;
			
				cout << endl;
				if(sumCH > sumN)
				{
					cout << "����� ������ ������ ����� �������� �� " << sumCH - sumN << endl;
				}
				else if(sumN > sumCH)
				{
					cout << "����� �������� ������ ����� ������ �� " << sumN - sumCH << endl;
				}
				else if(sumCH==sumN)
				{
					cout << "����� ������ ����� ����� ��������: " << sumCH << " = " << sumN << endl;
				}
				
				cout << endl;
				cout << "����� ���� 94 ����� ����� " << sumCH + sumN << endl;
				cout << endl;
				if(sumN<sumCH)
				{
					div = sumCH / sumN;	
					cout << "���� ��������� ����� ������ �� ����� ��������, �� ���������: " << div << endl;
				} 
				else if (sumN>sumCH)
				{
					div = sumN / sumCH;
					cout << "���� ��������� ����� ������ �� ����� ��������, �� ���������: " << div << endl;
				}
				
			}
		}
		
		if(input == "Certain")
		{
			int num = 0;
			cout << "�����: ";
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
			cout << "��� ��������� (�� 93 �����)" << endl;
	cout << "�����������: ������� ���������, �������� 7 ������ <�> ���� ����� � 1598" << endl;
	cout << endl;
	cout << "��������� �������:" << endl;
	cout << "	View = ������� ������ 93 ����� ���� ���������" << endl;
	cout << "	CH = ������� ������ ר���� �����" << endl;
	cout << "	Non-CH = ������� ������ ��ר���� �����" << endl;
	cout << "	Compare = ��������� � �������� ����� ר���� � ��ר���� �����" << endl;
	cout << "	quit = ����� �� ���������" << endl;
	cout << "	Certain �����:(�����) = ����� ������������ �����" << endl;
	cout << "	FI = ��������� ������� �������� ������� � ������ ������������������ ���������" << endl;
	cout << "	HELP = ������� ��� ���������� � ��������" << endl;
		}
	}
	system("pause");
	for(int i=0;i<=93;i++) in[i]=0;
	return 0;
}
	
