#include <bits/stdc++.h>
using namespace std;

int main() {
    size_t t;
    cin >> t;
    while(t--) {
        int n,k;
        cin>>n>>k;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        if(k>=2){
            cout<<"YES"<<endl;
        }
        else if(is_sorted(arr.begin(),arr.end())){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}