#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while (t!=0) {
        int n; cin >> n;
        if(n%2==0) 
            cout << "even\n";
        else 
            cout << "odd\n";
        t--;
        // (n%2==0) ? cout << "even\n": cout << "odd\n";
    }
}