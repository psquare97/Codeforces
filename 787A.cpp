#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int a1,b1,c1,d1,c=0;
    cin >> a1 >> b1;
    cin >> c1 >> d1;
    int r=b1;
    int m=d1;
    while(r!=m) {
        if(r<m) r += a1;
        if(r>m) m += c1;
        c++;
        if(c>1000000) break;
    }
    if(c<1000000) cout << r << endl;
    else cout << "-1" << endl;
}