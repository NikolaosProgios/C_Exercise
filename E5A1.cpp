#include <iostream>
#include <string.h>
using namespace std;

int len(char *s){
    return strlen(s);
}

int at(char *s){
    for(int i = 0; i < strlen(s); i++)    {
        if(s[i] == 'G')
        {
            return i;
        }
    }
    return -1;
}

void F(char *mes, char *s, int (*fp)(char *)){
    cout << mes << fp(s) << endl;
}

int main(){
    
    // A
    char s[100] = "asdasaadGdsdsds";
    int (*pf)(char *);

    pf = len;
    cout << "\nLength toy string: " << pf(s) << endl;;

    pf = at;
    cout << "Thesh toy G sto string: " << pf(s) << endl;

    // B
    cout << endl;

    char s2[100] = "asdasaadGdsdsds";
    int (*pf2)(char *);

    pf2 = len;
    F("Length toy string s: ", s, len);

    pf2 = at;
    F("Thessi toy G sto string s: ", s, pf2);

   
    system("pause");
}
