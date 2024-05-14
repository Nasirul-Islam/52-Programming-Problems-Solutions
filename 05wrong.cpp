#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,flag=1;
    cin >> t;
    while(t!=0){
        cin >> n;
        int nn = n*n;
        for (int i = 1; i <=nn; i++) {
            cout << "*";
            if(flag==n){
                flag=0;
                cout << "\n";
            }
            flag++;
        }
        cout<<"\n\n";
        t--;
    }
    return 0;
}