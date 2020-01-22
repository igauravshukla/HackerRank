/*

Task :
Given set S={1,2,...n}, find:
    the maximum value of a&b which is less than a given integer k, where a and b(where a<b) are two integers from set S.
    the maximum value of a|b which is less than a given integer k, where a and b(where a<b) are two integers from set S.
    the maximum value of a^b which is less than a given integer k, where a and b(where a<b) are two integers from set S.

Input Format :
The only line contains 2 space-separated integers,n and k, respectively.

Constraints :
    2 <= n <= 10^3
    2 <= k <= n
    
Output Format :
    The first line of output contains the maximum possible value of a&b.
    The second line of output contains the maximum possible value of a|b.
    The second line of output contains the maximum possible value of a^b.

Sample Input 0
5 4

Sample Output 0
2
3
3

*/

#include <stdio.h>

void calculate_the_maximum(int n, int k)
{
    int and=0,or=0,xor=0;
    for(int i=1;i<n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            if((i&j)>and && (i&j)<k)
                and=i&j;
            if((i|j)>or && (i|j)<k)
                or=i|j;
            if((i^j)>xor && (i^j)<k)
                xor=i^j;
        }
    }
    printf("%d\n%d\n%d",and,or,xor);
}

int main()
{
    int n, k;  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
    return 0;
}
