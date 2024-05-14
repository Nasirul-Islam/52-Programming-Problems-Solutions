#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;
    cin >> t;
    while(t!=0){
        cin >> n;
        int f = n/10000;
        int l = n%10;
        int sum = f+l;
        cout<<"Sum = "<<sum<<"\n";
        t--;
    }
    return 0;
}