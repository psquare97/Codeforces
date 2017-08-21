#include <bits/stdc++.h>
#define fill(a,val) memset(a, (val), sizeof a)
using namespace std;

int main(void)
{
    int n,t,c=0,ans=0;
    cin >> n;
    int a[n+1];
    fill(a,0);
    for(int i=0;i<2*n;i++) {
        cin >> t;
        if(a[t]==0) {
            a[t] = 1;
            c++;
        }
        else {
            a[t] = 0;
            c--;
        }
        ans = max(c, ans);
    }
    
    cout << ans << endl;
    
    
}