#include <bits/stdc++.h>
#define lli long long int
using namespace std;

int main(void)
{
    lli n,count=0, min=INT_MAX,l;
    cin >> n;
    lli a[n];
    for(lli i=0;i<n;i++) {
        cin >> a[i];
    }
    sort(a, a+n);
    
    for(lli i=1;i<n;i++) {
        l = a[i] - a[i-1];
        if(l<min) {
            min = l;
            count = 1;
        }
        if(l==min) {
            count++;
        }
    }
    cout << min << " "<< count-1 << endl;
}
    