#include <iostream>
using namespace std;
int syn(char s[], char ch){
    int counter = 0;
    for(int i = 0; i < sizeof(s); i++)    {
        if(s[i] == ch)        {
            counter++;
        }
    }
    return counter;
}

int syn2(char *s, char ch){
    int counter = 0;
    for(int i = 0; i < sizeof(s); i++)    {
        if(s[i] == ch)        {
            counter++;
        }
    }
    return counter;
}

int main(){
    char s[] = "nikoo";

    cout << "pl stoixeion: " << syn(s, 'o') << endl;

    char *s2 = s;

    cout << "pl stoixeion: " << syn2(s2, 'n') << endl;
    
    system("pause"); return 0;
}
