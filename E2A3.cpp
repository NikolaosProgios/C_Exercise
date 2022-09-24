#include <iostream>
using namespace std;

int main()
{
    int h=3, w=  4 , z=0;
    int i =0 , j = 0 ;
    
    int table [h][w] ; 
    
    for (i = 0 ; i < h  ; i++){
        for (j = 0 ; j < w ; j++){
            table[i][j]= rand() % 100;
            if ( table[i][j] % 2==0){ z++; }
        }
    }cout << z << endl;
	
	//????? a???µ??
    //St???e?a d?sd??stat?? p??a?a
}
