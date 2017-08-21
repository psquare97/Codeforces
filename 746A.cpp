#include <iostream>
using namespace std;

int main()
{
    int a,b,c,sum=0;
    cin >> a >> b >> c;
    while(1) {
        if(a>0){
            if(a*4 <= c && a*2<=b) {
                cout << 7*a;
                    break;
                }
        }
        else {
            //cout << "Third\n";
            cout << "0";
            break;
        }
        a--;

    }
    return 0;
}