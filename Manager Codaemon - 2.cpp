#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin >> t;
    while(t--){
        int n, sum=0, val=0, cnt=0;
        cin >> n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
            sum+=arr[i];
        }
        if(sum%n!=0)cout << "-1\n";
        else {
            val = sum/n;
            for(int i=0; i<n; i++){
                if(arr[i] > val)cnt++;
            }
            cout << cnt << '\n';
        }
    }
    return 0;
}
