#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int i;
	
	//α) 1 2 3 4 … 19 20
	cout << "A) " <<endl ;
	for (i=1 ; i<21 ; i++){
	 	cout << " " << i ;
	}
	cout << " " <<endl;
	
	//β) 1 -2 3 -4 5 … 19 -20
	cout << "B) " <<endl ;
	for (i=1 ; i<21  ;i++){
		//Άρτιοι αρνητική αριθμοί
		if (i%2==0){	
			cout << " " << -i ;
		}//Περιττοι θετική αριθμοί
		else{	
			cout << " " << i ;
		}		
	}cout << " " <<endl;
	
	//γ) 1 -1 2 -2 3 -3 … 20 -20
	cout << "C) " <<endl ;
	for (i=1 ; i<21  ;i++){
		cout << " " << i ;
		cout << " " << -i ;				
	}cout << " " <<endl;
	
	//δ) 1 1 2 3 5 8 13 21 34 55 (Ο επομενος αριθμος
	//προκυπτει απο το αθροισμα των δυο προηγουμενων αριθμων)
	cout << "D) " <<endl ;        
    int previous1 = 1, previous2 = 1, next = 0;
    for(int i = 1; i <= 10; ++i)    {
        if(i == 1){
            cout << previous1 << " ";
            continue;
        }
        else if(i == 2)        {
            cout << previous2 << " ";
            continue;
        }
        next = previous1 + previous2;
        previous1 = previous2;
        previous2 = next;
        cout << next << " ";
    }cout << " " <<endl;
}
