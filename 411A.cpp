#include <bits/stdc++.h>
#define fill(a,val) memset(a, (val), sizeof a)
using namespace std;

int main(void)
{
    int l=0,s=0,len,d=0,f=0;
    string str;
    cin >> str;
    if(str.length() >= 5) {
        for(int i=0;i<str.length();i++) {
            //cout << str[i] << endl;
            if(str[i]>='a' && str[i]<='z') {
                s++;
                //cout << "s: " << s << endl;
            }
            if(str[i]>='A' && str[i]<='Z') {
                l++;
                //cout << "l: " << l << endl;
            }
            if(str[i] >= '0' && str[i] <= '9') {
                d++;
               // cout << "d: " << d << endl;
            }
            if(s >=1 && l >=1 && d >=1) {
                f = 1;
              //  cout << "f: " << f << endl;
                break;
            }
        }
        if(f==1) {
            cout << "Correct" << endl;
        }
        else {
            cout << "Too weak" << endl;
        }
    }
    else {
        cout << "Too weak" << endl;
    }
}