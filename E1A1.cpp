#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	bool b = false ;
    int plth=0 , m=0 ,th=0,h=0,c=0,diodio=0, maxtherm =-100 , mintherm=59;
    
    cout<<"Dose therm: "<<endl;        
    cin>>th; 
    while (th != -999){ 
         if ( th<-50 or th>60){
            cout<<"lathos times"<<endl;
            
        }else {
            plth++;
            m=m+th;
        }    
        if (th > 17 && th <28){
            h++;   
        }
        if (th > 1 && th <17){
            c++;   
        } 
        if (th==22)diodio++;
        if (maxtherm<th) maxtherm=th; 
        if (mintherm>th) mintherm=th;         
        b=true ; 
    cout<<"Dose therm: "<<endl;        
    cin>>th;
    }
    if (th==-999 and b == true){
        //Too ������ ��� ������������ (�������) ��� �������
        cout<<"\nCount therm=";
        cout << plth; cout << "\n";  
        //� ���� �����������.
        cout<<"\nAvg therm=";
        cout << (double)m/plth; cout << "\n";  
        //�� ������ ��� ������ ������ (������������ 
        //����������� ���17 ��� ���
        //28) ��� � ���� ����������� ����.
        cout<<"\nTherm>17 and  therm<28 = ";
        cout << h ; cout << "\n";  
         
        //�� ������ ��� ����� ������ (������������ 
        //����������� ��� 1 ��� ���
        // 17) ��� � ���� ����������� ����.
        cout<<"\nTherm>1 and  therm<17 = ";
        cout << c ; cout << "\n";  
          
        //�� ������ ��� �������� ������ �� ����������� 22.
        cout<<"\nIdanikes meres me thermokrasies 22. = ";
        cout << diodio ; cout << "\n";  
        
        //� ����������� ��� ��� ������ ������.
        cout<<"\nMax Therm ";
        cout << maxtherm ; cout << "\n";

        //� ����������� ��� ��� ����� ������.
        cout<<"\nMin Therm ";
        cout << mintherm ; cout << "\n";      
         
        cout<<"Dose therm: "<<endl;        
        cin>>th;
	}
    system("pause");
    return 0;
}
