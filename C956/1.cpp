#include<bits/stdc++.h>
using namespace std;

double geometricSeriesSum(int a, int r, int n) {
     //Write your code here
     //SUM = a(r^n-1)/(r-1)
    //  int dem=(r-1);
    //  int num=(pow(r,n))-1;
    //  double sum = double((a*num)/(dem));
    //  return sum;
     if (r == 1) {
        // Special case: if r == 1, the sum is just n * a
        return a * n;
    }
    double dem = r - 1;
    double num = pow(r, n) - 1;
    double sum = (a * num) / dem;
    return sum;
}

//Do not edit this part of code 
 int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, a, r;
        cin >> n;
        cin >> a >> r;
  
        double sum = geometricSeriesSum(a, r, n);
        cout << fixed << setprecision(6) << sum << endl;
    }
    return 0;
}