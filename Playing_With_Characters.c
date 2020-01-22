/*

Task

You have to print the character, ch, in the first line. Then print in s next line. In the last line print the sentence, sen.

Input Format :
First, take a character, ch as input.
Then take the string, s as input.
Lastly, take the sentence sen as input.

Output Format :
Print three lines of output. The first line prints the character, ch.
The second line prints the string, s.
The third line prints the sentence, sen.

Sample Input 0
C
Language
Welcome To C!!

Sample Output 0
C
Language
Welcome To C!!

*/

#include <stdio.h>

int main() 
{
    
    char ch,s[10],sen[100];
    scanf("%c",&ch);
    scanf("%s",s);
    scanf("\n");
    scanf("%[^\n]%*c",sen);
    printf("%c\n%s\n%s",ch,s,sen);
    return 0;
}
