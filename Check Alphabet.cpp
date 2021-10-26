#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    while(t--){
        char ch;
        cin>>ch;
        if(ch>='a' && ch<='z')
        cout<<"small"<<endl;
        else if(ch>='A' && ch<='Z')
        cout<<"capital"<<endl;
        else
        cout<<"none"<<endl;
    }
    return 0;
}
