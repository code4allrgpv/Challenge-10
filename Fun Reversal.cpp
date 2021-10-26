#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int i, c = 0;
    char a[250];
    gets(a);
    char x, y;
    cin >> x;
    for (i = 0; a[i] != '\0'; i++)
    {
        if (a[i] == x)
        {
            c = i;
            break;
        }
        
    }
    for (i = 0; i <= c/2; i++)
    {
        y = a[i];
        a[i] = a[c - i];
        a[c - i] = y;
    }
    for (i = 0; a[i] != '\0'; i++)
    {
        cout << a[i];
    }

    return 0;
}
