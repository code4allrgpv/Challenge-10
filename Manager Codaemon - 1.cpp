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

while(t--)

{

    int n,sum=0; 

    cin>>n; 

    for(int i=0;i<n;++i)

    {

        int x; 

        cin>>x; 

        sum+=x; 

    }

    if(sum%n==0)

      cout<<1<<endl; 

    else 

      cout<<-1<<endl; 

}
    return 0;
}
