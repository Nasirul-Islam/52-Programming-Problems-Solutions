#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,flag=1;
    cin >> t;
    while(t!=0){
        cin >> n;
        cout << "Case "<<flag<<":";
        for (int i = 1; i <=n; i++) {
            if(n%i==0)
                cout << " "<< i;
        }
        cout<<"\n";
        t--;
    }
    return 0;
}