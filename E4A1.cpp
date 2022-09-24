#include <iostream>
using namespace std;
//a
int syn(char pc[], char ch, int n){
    int counter = 0;
    for(int i = 0; i < n; i++)    {
        if(pc[i] == ch)        {
            counter++;
        }
    }
    return counter;
}
//Με αριθμητική δεικτών
int syn2(char *pc, char ch, int n){
    int counter = 0;

    for(int i = 0; i < n; i++){
        if(pc[i] == ch){
            counter++;
        }
    }
    return counter;
}
int main(){
    
	char pc[] = {'N', 'i', 'k', 'o', 'o'};
    cout << "Pl stoixeion: " << syn(pc, 'o', 5) << endl;
    
	char *pp = pc;// *pp deixnei se &pc , to syn2 metatrepei tιn (deiktei) address
    cout << "Pl stoixeion: " << syn2(pp, 'N', 5) << endl;    
   
    system("pause"); return 0;
}
