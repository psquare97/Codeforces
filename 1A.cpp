#include<iostream>
#define ll long long
using namespace std;

int main() {
    ll n,m,a;
    cin >>n >> m >> a;
    cout << ((n+a-1)/a)*((m+a-1)/a)<< endl;
return 0;
}