#include <iostream>

using namespace std;

int main()
{
   int a;
   int table [10] = { }; //int table [10] = {1,2,3,4,5,6,7,8,9,10 }; 
   //Length of table
   //cout << "Length of table = " << (sizeof(table)/sizeof(*table)) <<endl;//sizeof(table)/sizeof(table[0])
   
   for (int i = 0 ; i < (sizeof(table)/sizeof(*table)) ; i++){
       cin>>table[i];
       
   }
   for (int i = (sizeof(table)/sizeof(*table))-1; i >=0  ; i--){
       cout << table[i] << endl; 
   }
}
