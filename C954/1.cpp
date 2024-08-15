#include <bits/stdc++.h>
using namespace std;
int main(){
    size_t t;
    cin>>t;
    while(t--){
        int x1,x2,x3;
        cin>>x1>>x2>>x3;
        vector<int>arr(3);
        arr[0]=x1;
        arr[1]=x2;
        arr[2]=x3;
        sort(arr.begin(),arr.end());
        int ans=abs(arr[0]-arr[1])+abs(arr[1]-arr[2]);
        cout<<ans<<endl;
    }
    return 0;
}