#include <bits/stdc++.h> 
  
// Function to print the divisors 
void printDivisors(int n) 
{ 
    int b[1000],z=0;
    // Note that this loop runs till square root 
    for (int i=1; i<=sqrt(n); i++) 
    { 
        if (n%i == 0) 
        { 
            // If divisors are equal, print only one 
            if (n/i == i) 
               b[z]=i;
                z++;
  
            else // Otherwise print both 
                {
                    b[z]=i;
                z++;
                b[z]=n/i;
                z++;
                } 
        } 
    } 
    for(int i=0;i<z;i++) cout<<b[i]<<" ";
} 
  
/* Driver program to test above function */
int main() 
{ 
    printf("The divisors of 100 are: \n"); 
    printDivisors(32); 
    return 0; 
} 