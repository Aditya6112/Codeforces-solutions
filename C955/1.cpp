#include <bits/stdc++.h>
using namespace std;
bool neverHadEqualScore(int x1, int y1, int x2, int y2) {
    // The score remains unchanged
    if(x1>y1){
        swap(x1,y1);
        swap(x2,y2);
    }
    if(x1<y1 && x2<y2)return true;
    else return false;
}
int main()
{
    size_t t;
    cin >> t;
    while (t--)
    {
        int x1,y1;
        cin>>x1>>y1;
        int x2,y2;
        cin>>x2>>y2;
        if(neverHadEqualScore(x1,y1,x2,y2))cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
}