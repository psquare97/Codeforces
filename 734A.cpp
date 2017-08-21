#include<iostream>
using namespace std;

int main() {

    int t,d=0,a=0;
    cin >> t;
    char c[t];
    for(int i=0;i<t;i++) {
        cin >> c[i];
        if(c[i]=='A') a++;
        if(c[i]=='D') d++;
    }
    if(a>d) cout << "Anton";
    else if(a<d) cout << "Danik";
    else cout << "Friendship";


    return 0;
}