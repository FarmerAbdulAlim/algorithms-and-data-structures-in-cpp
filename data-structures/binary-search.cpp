
/************************************************************************
 *                 Solved By : Abdul Alim                               *
 *                 GitHub    : github.com/FarmerAbdulAlim               *
 *                 Email     : farmerabdulalim@gmail.com                *
 *                 YouTube   : youtube.com/@TravelerAbdulAlim           *
 *                 YouTube   : youtube.com/@AbdulAlim-Bangladesh        *
 ************************************************************************/

/*
    Algorithm Used:
    Complexity:
    Solution Approach:
*/

#include <bits/stdc++.h>
using namespace std;
#define LL long long
#define MAX 100009

int a[MAX], n;

bool binarySearch(int target)
{
    int left = 0, right = n-1;
    while(left<=right) 
    {
        
    }
}

int main()
{
    int m, d, test, target;
    cin >> test;
    while (test--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        if(binarySearch(target)) printf("%d is Found\n", target);
        else printf("%d is Not Found\n", target);
        
    }
    return 0;
}
