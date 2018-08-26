/* Conditional Statements

Given a positive integer denoting n, do the following:

If 1 <= n <= 9, then print the lowercase English word corresponding to the number (e.g., one for 1, two for 2, etc.).
If n > 9, print Greater than 9.

Input Format
A single integer denoting n.

Constraints
1 <= n <= 10^9

Output Format
If 1 <= n <= 9, then print the lowercase English word corresponding to the number (e.g., one for 1, two for 2, etc.); otherwise, print
Greater than 9 instead. */


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int N;
    cin >> N;
    char *array[11]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    if(n<=9)
    {
        for(int i=0;i<=n;i++)
        {
            if (i==n)
                cout<<array[i];
        }
        
    }
    else
        cout<<"Greater than 9";
    
    return 0;
}
