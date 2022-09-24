#include <iostream>

using namespace std;

int main()
{
    int N=10 ,maxx=-1;
    //cin>>N;
    int table [N];// = { }; //int table [10] = {1,2,3,4,5,6,7,8,9,10 }; 
    
    for (int i = 0 ; i < (sizeof(table)/sizeof(*table)) ; i++){
       table[i]= rand() % 100;
    }
    for (int i = 0 ; i < (sizeof(table)/sizeof(*table)) ; i++){
       cout << "table["<< i << "]="<< table[i] <<" " << endl;
    }
    for (int i = (sizeof(table)/sizeof(*table))-1; i >=0  ; i--){
       if (table[i]>maxx)maxx=table[i];
    }
    cout << "Max: "<< maxx << endl; 
    system("pause");
}
