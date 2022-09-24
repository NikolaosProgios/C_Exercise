#include <cstdlib>
#include <iostream>
#include <string.h>
#include <cstring>
using namespace std;

class jewel{
    string perigrafi;
    int    year ;
    char    yliko ; 
    char    petra ; 
    public :
        //a
        jewel(){
            perigrafi="0";
            year=0;
            yliko='0';
            petra='0';
        }
        jewel(string _perigrafi,int _year, char _yliko , char _petra){
            perigrafi=_perigrafi;
            year=_year;
            yliko=_yliko;
            petra=_petra;            
        }
        
        //b
        void setj(string _perigrafi,int _year, char _yliko , char _petra){
            perigrafi=_perigrafi;
            year=_year;
            yliko=_yliko;
            petra=_petra;            
        }
        //g
        void getper(string &a){
            a=perigrafi;            
        }
        void getyear(int &b){
            b=year;
        }
        void getyliko(char &c ){
            c=yliko;                  
        }
        void getpetra( char &d){
            d=petra;            
        }
        void getj(string &a,int &b, char &c , char &d){
            a=perigrafi;
            b=year;
            c=yliko;
            d=petra;            
        }
        //d
        double timi(int w ){
            double timi=0; 
            
            if (yliko='A')//asimi
                timi=((3/11)*w);
            if (yliko='L')
                timi=(5/3)*w;
            
            timi=timi+( (2019-year) * 0.1 );
            if (petra='D'){
                timi+=50;
            }
            if (petra='B'){
                timi+=20;
            } 
            return timi;                           
        }
        //e
        int agejewel(int k){
            if (k>year){
                return k-year ; 
            }
        }

};
//st
bool operator^(jewel &ob1, jewel &ob2){
            
            bool flag=false;
            string x_1 ,y_1;
            int x_2,y_2;
            char x_3,x_4,y_3,y_4;
        
            ob1.getj(x_1, x_2,x_3,x_4);
            ob2.getj(y_1, y_2,y_3,y_4);
        
            if ( (x_3=y_3)| (x_2=y_2) ){
                flag= true ;
            }
            return flag;
}



/*
friend ostream &operator<<(ostream &os, const jewel &ob1, const jewel &ob2)
{
        os << ob1.x << " --- " << ob2.y << endl;
        return os;
}
*/
        
        
int main(int argc, char *argv[])
{
    //a 
    jewel j1;
    jewel j2 ;
    j2.setj("daxtilidi",1994,'L','D');

    jewel j3("skoulariki",1996,'A','B');
    jewel j4("bera",1990,'A','_');
    jewel j5("bera",1984,'L','D');
    
    //b create table 
     jewel table[5];
     //g insert object the table
     table[0]= j1;
     table[1]= j2;
     table[2]= j3;    
     table[3]= j4;
     table[4]= j5;
     jewel test ;
    //d  sinoliki aksia kosmimaton 
    
    double price=0 ;
    for(int i=0;i<5;i++){
            string x_1 ;
            int x_2;
            char x_3,x_4;
            table[i].getj(x_1, x_2,x_3,x_4) ; 
            price+= table[i].timi(55);
     }
     cout << "sum price="<< price << endl;
      
      
      //e print all of object by table
     cout << "\nprint all of object by table\n"<< endl; 
     for (int i=0;i<5;i++){
            string x_1 ;
            int x_2;
            char x_3,x_4;
        table[i].getj(x_1, x_2,x_3,x_4) ; 
        cout << x_1 << "\t"<<x_2<< "\t"<< x_3<< "\t"<< x_4 << endl;
        }
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
