/*
    Problem: In a strange shop there are n types of coins of value A1, A2 ... An.
            You have to find the number of ways you can make K using the coins.
            Print the case number and the number of ways K can be made.
            Result can be large, so, print the result modulo 100000007.
            (LOJ-1232 - Coin Change (II))
    Algorithm: Dynamic Programming(Coin Change)
*/

#include<stdio.h>
long coin_change(int n);
long nways[10005];
int m;
int n;
int coins[105];
int main()
{
    int i,count,t,test;
    scanf("%d",&test);
    for(t=1;t<=test;t++)
    {
        scanf("%d%d",&m,&n);
        nways[0]=1;
        for(i=1;i<=n;i++)
        nways[i]=0;
    for(i=0;i<m;i++)
    scanf("%d",&coins[i]);
    printf("Case %d: %ld\n",t,coin_change(n)%100000007);
    }
    return 0;
}

 long coin_change(int n)
 {
     int i,taka;
     for(i=0;i<m;i++)
     {
         for(taka=1;taka<=n;taka++)
         {
             if(coins[i]<=taka)
             nways[taka]=nways[taka]%100000007+nways[taka-coins[i]]%100000007;
         }
     }
     return nways[n];
 }
