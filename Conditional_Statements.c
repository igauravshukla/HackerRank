/*

Task

Given a positive integer denoting n, do the following:
    If 1<=n<=9, then print the lowercase English word corresponding to the number (e.g., one for 1, two for 2, etc.).
    If n>9, print Greater than 9.

Input Format :
The first line contains a single integer denoting n.

Constraints :
    1 <= n <= 10^9

Output Format :
If 1<=n<=9, then print the lowercase English word corresponding to the number (e.g., one for 1, two for 2, etc.); otherwise, print Greater than 9 instead.

Sample Input
5

Sample Output
five

Sample Input #01
8

Sample Output #01
eight

Sample Input #02
44

Sample Output #02
Greater than 9

*/

#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(1<=n && n<=9)
    {
        switch(n)
        {
            case 1:printf("one");
                    break;
            case 2:printf("two");
                    break;
            case 3:printf("three");
                    break;
            case 4:printf("four");
                    break;
            case 5:printf("five");
                    break;
            case 6:printf("six");
                    break;
            case 7:printf("seven");
                    break;
            case 8:printf("eight");
                    break;
            case 9:printf("nine");
                    break;
        }
    }
    else if(n>9)
        printf("Greater than 9");
}
