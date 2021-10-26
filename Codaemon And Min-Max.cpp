#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n, min=INT_MAX, max=INT_MIN, maxp, minp;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]>max)
            {
                max=a[i];
                maxp=i;
            }
            if(a[i]<min)
            {
                min=a[i];
                minp=i;
            }
        }
        int z;
        if(n%2==1)
            z=n/2;
        else
            z=n/2;
        if(maxp>z && minp< z)
            cout<<minp+1+(n-maxp)<<endl;
        else if(minp>z && maxp< z)
            cout<<maxp+1+(n-minp)<<endl;
        else if (maxp<=z && minp<=z)
            {
           
            if(maxp>=minp)
                cout<<maxp+1<<endl;
            else
                cout<<minp+1<<endl;
        }
        else if(maxp>=z && minp>=z) 
        {
           
            if(maxp>minp)
                cout<<n-minp<<endl;
            else
                cout<<n-maxp<<endl;
        }
    }
    return 0;
}
