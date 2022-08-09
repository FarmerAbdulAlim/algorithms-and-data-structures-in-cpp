#include<bits/stdc++.h>
using namespace std;

bool a[100000009];
int prime[5800009];
long long k=0;
void sieve() {
    long long i,j;
    a[0]=1; a[1]=1; prime[0]=2;
    for(i=3;i<=100000006;i=i+2) {
        if(a[i]==0) {
            prime[++k]=i;
            for(j=i*i;j<=100000006;j=j+2*i)
                a[j]=1;
        }
    }
}

int main()
{
    sieve();
    printf("Number of Primes Number Generated=%d\n", k);
    for(int i=0;i<=10000;i++)
    printf("%d ",prime[i]);
    puts("");
    return 0;
}
