#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    if(t>1 && t<27)
    {
        long int a[t], temp;
        long long int count=0;
        for(int i=0;i<t;i++) {
            scanf("%li", &a[i]);
            if(i>0 && i<=1000000000 && a[i] == a[i-1])
            {
                a[i]--;
                //printf("for: %li\n", a[i]);
            }
        }

        for (int i=0;i<t;++i)
        {
            for(int m=i+1;m<t;++m)
            {
                if (a[i] < a[m])
                {
                    temp =  a[i];
                    a[i] = a[m];
                    a[m] = temp;
                }
            }
        }

        int j=0, k;
        while(j<t)
        {
            k=0;
            while(k<t)
            {
                if(a[j] == a[k] && k!=j && a[k]>0)
                {
                    a[k]--;
                }
                else if(a[j] == a[k] && k!=j && a[k]<=0)
                {
                    a[k] = 0;
                }
                
                k++;
            }
            //printf("while: %li\n", a[j]);
            count = count + a[j];
            j++;
        }
        printf("%lli", count);
    }
    return 0;
}