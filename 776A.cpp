#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s,d;
    cin >> s >> d;
    int n;
    stack <string> sa, sd;
    
    sa.push(s);
    sd.push(d);
    cout << sa.top() << " " << sd.top() << endl;
    cin >> n;
    for(int i =1;i<=n;i++)
    {
       
        cin >> s >> d;
        if(s==sa.top())
        {
            sa.push(d);
            sd.push(sd.top());
        }
        else if(d==sd.top())
        {
            sa.push(sa.top());
            sd.push(s);
        }
        else if(s==sd.top())
        {
            sa.push(sa.top());
            sd.push(d);
        }
        else if(d==sa.top())
        {
            sd.push(sd.top());
            sa.push(s);
        }
        
         cout << sa.top() << " " << sd.top() <<endl;

       
    }
    
    return 0;
    
}