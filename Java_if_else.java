/*

Task
Given an integer, n, perform the following conditional actions:
    If  is odd, print Weird
    If  is even and in the inclusive range of 2 to 5, print Not Weird
    If  is even and in the inclusive range of 6 to 20, print Weird
    If  is even and greater than 20, print Not Weird

Input Format
    A single line containing a positive integer, n.

Constraints
    1 <= n <= 100
    
Output Format
    Print Weird if the number is weird; otherwise, print Not Weird.

Sample Input 0
3
Sample Output 0
Weird

Sample Input 1
24
Sample Output 1
Not Weird

*/

import java.io.*;
import java.util.*;

public class Solution 
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        if(n%2!=0 || (n%2==0 && 6<=n && n<=20))
            System.out.println("Weird");
        else
            System.out.println("Not Weird");
        sc.close();
    }
}
