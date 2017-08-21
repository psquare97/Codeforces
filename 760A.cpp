#include<iostream>
#include<stdio.h>
using namespace std;

int main() {

    int m[12];
    m[0]=m[2]=m[4]=m[6]=m[7]=m[9]=m[11]=31;
    m[3]=m[5]=m[8]=m[10]=30;
    m[1] = 28;
    int mo,da;
    scanf("%d %d", &mo, &da);
    mo = mo-1;
    da = da-1;
    int count=0, ini;
    ini = 7 - da;
    while(ini<m[mo]) {
        ini += 7;
        count++;
    }
    printf("%d", count+1);
return 0;
}