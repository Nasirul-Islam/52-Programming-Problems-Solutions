#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while (t!=0) {
        string str; cin >> str;
        int len = str.length();
        char n = str[len-1];
        int digit = n - '0';
        if(digit%2==0) cout << "even\n";
        else cout << "odd\n";
        t--;
    }
}