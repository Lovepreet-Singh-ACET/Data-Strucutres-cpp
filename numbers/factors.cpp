#include<iostream>
#include<cmath>
using namespace std;

int main(){
    #ifndef ONLINE_JDUGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin>> n;

    for (int i = 1; i <= n; i++)
    {
        if(n%i == 0){
            cout<< i << " ";
        }
    }
    
    return 0;
}

//                  GFG Solution o(sqrt(n))


//     // A Better (than Naive) Solution to find all divisiors
// #include <bits/stdc++.h>

// // Function to print the divisors
// void printDivisors(int n)
// {
// 	// Note that this loop runs till square root
// 	for (int i=1; i<=sqrt(n); i++)
// 	{
// 		if (n%i == 0)
// 		{
// 			// If divisors are equal, print only one
// 			if (n/i == i)
// 				printf("%d ", i);

// 			else // Otherwise print both
// 				printf("%d %d ", i, n/i);
// 		}
// 	}
// }

// /* Driver program to test above function */
// int main()
// {
// 	printf("The divisors of 100 are: \n");
// 	printDivisors(100);
// 	return 0;
// }

    

