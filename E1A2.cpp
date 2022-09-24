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
		//α) Ο χαρακτηρας ειναι αλφαβητικος
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
		//β) Ο χαρακτηρας ειναι αριθμητικος
		if ( isdigit(ch) ){
			cout<<"\nIs  digit";
			athr=athr + ( ((int)(ch)) -48 ) ;  
			plnumber++;			
		}
		//γ) Ο χαρακτηρας ειναι “ειδικος” δηλ. δεν είναι ουτε αλφαβητικός ουτε αριθμητικός
		if ( not isdigit(ch) && not isalpha(ch)  ){
			cout<<"\nNot digit not alpha";
		}
	
		//Ο χαρακτηρας ειναι χαρακτηρας ελεγχου εάν είναι μικτροτερος του ' '
		//(κενό διαστημα – space). To κενό διαστημα στον πίνακα των ASCII εχει δεκαδική τιμή 32)
		if ( ch < ' ' ){
			cout<<" ' ' ";
		}
		cout<<"\nDose character: "<<endl;        
    	cin>>ch;
	}
	if(b && (ch != 'X' || ch != 'x')){
		//Το πληθος των πεζων χαρακτηρων που διαβαστηκαν (a εως z)
		cout<<"\nPlithos pezon = ";
		cout<<plsmall;
		//Το πληθος και το αθροισμα των αριθμητικων χαρακτηρων
		cout<<"\nPlithos number = ";
		cout<<plnumber;
		cout<<"\nAthr number = ";
		cout<<athr;
		
	}
	
}
