#include <iostream>
#include <string.h>

using namespace std;
//ask6

void check_space(char *t, char *s)
{
    int n = 0;

    for(int i = strlen(s) ; i > 0; i--)
    {
        if(s[i] == ' ')
        {
            continue;
        }
        else
        {
            n = i;
            break;
        }
    }

    for(int i = 0; i < n; i++)
    {
        t[i] = s[i];
    }

    t[n] = '\0';
}

int main()
{
    char s[100], t[100];

    gets(s);

    check_space(t, s);

    cout << "New string:" << t << "|" << endl;
    
    return 0;
}
/*  Giakoustidis
    int main(){
        char *p ; 
        p="   Eva  Adam wow ";
        while(*p==' '){
            p++;
        }
        while(*p!='\0'){
            cout<<*p;
            p++;
        }
    }
*/

