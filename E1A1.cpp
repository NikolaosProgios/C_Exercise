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
        //Too πληθος των θερμοκρασιων (αριθμων) που δωθηκαν
        cout<<"\nCount therm=";
        cout << plth; cout << "\n";  
        //Η μεση θερμοκρασια.
        cout<<"\nAvg therm=";
        cout << (double)m/plth; cout << "\n";  
        //Το πληθος των ζεστων ημερων (θερμοκρασιες 
        //μεγαλυτερες απο17 εως και
        //28) και η μεση θερμοκρασια τους.
        cout<<"\nTherm>17 and  therm<28 = ";
        cout << h ; cout << "\n";  
         
        //Το πληθος των κρυων ημερων (θερμοκρασιες 
        //μεγαλυτερες απο 1 εως και
        // 17) και η μεση θερμοκρασια τους.
        cout<<"\nTherm>1 and  therm<17 = ";
        cout << c ; cout << "\n";  
          
        //Το πληθος των ιδανικων ημερων με θερμοκρασια 22.
        cout<<"\nIdanikes meres me thermokrasies 22. = ";
        cout << diodio ; cout << "\n";  
        
        //Η θερμοκρασία της πιο ζεστής ημερας.
        cout<<"\nMax Therm ";
        cout << maxtherm ; cout << "\n";

        //Η θερμοκρασία της πιο κρύας ημερας.
        cout<<"\nMin Therm ";
        cout << mintherm ; cout << "\n";      
         
        cout<<"Dose therm: "<<endl;        
        cin>>th;
	}
    system("pause");
    return 0;
}
