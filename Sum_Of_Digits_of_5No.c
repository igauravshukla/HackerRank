/*

Task :
In this challenge, you have to input a five digit number and print the sum of digits of the number.

Input Format :
The input contains a single five digit number, n.

Constraints :
    10000 <= n <= 99999
    
Output Format :
Print the sum of the digits of the five digit number.

Sample Input 0
10564

Sample Output 0
16

*/

#include <stdio.h>

int main()
{	
    int n,rem,sum=0;
    scanf("%d", &n);
    while(n>0)
    {
        rem=n%10;
        sum+=rem;
        n/=10;
    }
    printf("%d",sum);
    return 0;
}
