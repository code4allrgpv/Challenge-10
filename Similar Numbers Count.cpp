#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    int k=4;
    cin>>n;
    vector<vector<int>> mat;
    string s;
    set<int> ans;
    for(int i=0;i<=n;i++){
        getline(cin,s);
        stringstream ss(s);
        string num;
        vector<int> vec;
        if(i>0){
            while(getline(ss,num,' ')){
                vec.push_back(stoi(num));
            }
        }
        if(i>0){
            mat.push_back(vec);
            m=vec.size();
        }
    }
    vector<vector<int>> verticles;
    for(int i=0;i<m;i++){
        vector<int> vec;
        for(int j=0;j<n;j++){
            vec.push_back(mat[j][i]);
        }
        verticles.push_back(vec);
    }
    for(vector<int>& vec:mat){
        for(int i=0;i<=m-k;i++){
            int sum=0;
            for(int j=i;j<i+k;j++){
                sum+=vec[j];
            }
            if(sum==k*vec[i]) ans.insert(vec[i]);
        }
    }

    for(vector<int>& vec:verticles){
        for(int i=0;i<=m-k;i++){
            int sum=0;
            for(int j=i;j<i+k;j++){
                sum+=vec[j];
            }
            if(sum==k*vec[i]) ans.insert(vec[i]);
        }
    }
    cout<<(ans.size()==0?-1:*ans.begin());
    return 0;
}
