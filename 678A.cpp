#include<iostream>
#include<stdio.h>
using namespace std;

int main() {

    long long n,k;
    scanf("%lld %lld", &n, &k);
    printf("%lld\n", (n/k+1)*k);
    return 0;
}