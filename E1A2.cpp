#include <cstdlib>
#include <iostream>
#include<stdio.h> 
#include<stdlib.h>
using namespace std;

int main(int argc, char**argv[])
{
	char ch=' '; int athr=0 , plsmall=0 , plnumber=0 ; bool b=false;
	cout<<"Dose character: "<<endl;        
    cin>>ch;
	while ( ch != 'X' && ch != 'x' ){
		b=true;
		//�) � ���������� ����� �����������
		if ( isalpha(ch) ){
			cout<<"\nIs alpha\n";			
			if(ch== 'F' || ch== 'P' || ch== 'A' ){
				ch=ch+32;//convert Uppercase char to lowercase char+32
							//convert lowercase char to Uppercase char -32
	   			cout<<ch;
	   		}
	   		if (ch>='a' && ch<='z'){
	   			plsmall++;
			}
		}
		//�) � ���������� ����� �����������
		if ( isdigit(ch) ){
			cout<<"\nIs  digit";
			athr=athr + ( ((int)(ch)) -48 ) ;  
			plnumber++;			
		}
		//�) � ���������� ����� �������� ���. ��� ����� ���� ����������� ���� �����������
		if ( not isdigit(ch) && not isalpha(ch)  ){
			cout<<"\nNot digit not alpha";
		}
	
		//� ���������� ����� ���������� ������� ��� ����� ����������� ��� ' '
		//(���� �������� � space). To ���� �������� ���� ������ ��� ASCII ���� �������� ���� 32)
		if ( ch < ' ' ){
			cout<<" ' ' ";
		}
		cout<<"\nDose character: "<<endl;        
    	cin>>ch;
	}
	if(b && (ch != 'X' || ch != 'x')){
		//�� ������ ��� ����� ���������� ��� ����������� (a ��� z)
		cout<<"\nPlithos pezon = ";
		cout<<plsmall;
		//�� ������ ��� �� �������� ��� ����������� ����������
		cout<<"\nPlithos number = ";
		cout<<plnumber;
		cout<<"\nAthr number = ";
		cout<<athr;
		
	}
	
}
