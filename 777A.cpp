#include <bits/stdc++.h>
#define lli long long int
using namespace std;

int main()
{
    lli n;
    int k,b;
    cin >> n;
    cin >> b;
    if(n>6)
    {
        n = n % 6;
    }
    //cout << n << endl;
    while(n>0) {
        if(n%2==0) {
            if(b==2) {
                b=1;
            }
            else if(b==1) {
                b=2;
            }
        }
        else {
            if(b==1) {
                b=0;
            }
            else if(b==0) {
                b=1;
            }
        }
        n--;
    }
    cout << b << endl;
    return 0;
    
}