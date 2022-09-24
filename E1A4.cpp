#include <iostream>

using namespace std;

int main(){
    int i, j,k=5;
	
    //a
    for(j =0; j <=5; j++)	{
	   for(i = k; i >=0; i--)	{
	      cout <<" " ;
	   }k--;
	   for(i = 1; i <= j; i++)	   {
		  cout << "*";
	   }cout << endl;
	}

cout << endl;cout << endl;	

    //b

    i=0, j,k=5;
	
	for(j = 1; j<=5; j++)	{
	   for(i = k; i<=5; i++)	{
	      cout <<" " ;
	   }k--;
	   
	   for(i = 5; i >= j; i--)	   {
		  cout << "*";
	   }
	   cout << endl;
	}
	
cout << endl;cout << endl;	

    //g
    
    i=0, j=0;
	int x = 5;
    int y = 1;

	for(j = 1; j <= 5; j++)	{
	   //space
	   for(i = 1; i <= x; i++)	   {
	      cout << " ";
	   }x--;
       // **
	   for(i = 1; i <= y; i++)	   {
		  cout << "*";
	   }y += 2;
	   
	   cout << endl;
	}
}
