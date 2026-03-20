Recurssion 
Recursion is a programming technique where a function calls itself
in order to solve a problem. It typically involves a base case to terminate the 
recursion and a recursive case that breaks the problem down into smaller subproblems.

we can perform these tasks using recursion:
1. Factorial of a number
2. Fibonacci series 
3. Sum of digits
4. Power of a number
5. GCD (Greatest Common Divisor)
6. Binary Search
7. Tower of Hanoi
8. Permutations and Combinations
9. Tree Traversals
10. Graph Traversals
11. Backtracking Problems
12. Merge Sort and Quick Sort
13. Finding nth Catalan Number
14. Solving Maze Problems 
15. Generating Subsets and Subsequences


n=5
f=5*fact(4)
 = 5*4*fact(3)
 = 5*4*3*fact(2)
 = 5*4*3*2*fact(1)
 = 5*4*3*2*1

LOGIC BEHIND

 example:-
Q-1/ Factorial of n number using recursion.
A-1/ 
#include <iostream>
using namespace std;
int fact(int);
int main(){
    int n;
    cin>> n;
    int f;
    f=fact(n);
    cout<<f;
}
int fact(int n){
    if(n==1){
         return(1);
    }
    else {
        return(n*fact(n-1));
    }
    
}
#include <iostream>
using namespace std;
  int fact(int n){
    if(n==1){
        return (1);
    }
    else {
    return (n*fact(n-1));
    }
}


  int main(){
    int n;
    cin>>n;
    int f;
    int f=fact(n);
    cout<<f;
  }


Q-2/ Wap to print fibonacci series using recursion.
A-2/

#include <iostream>
using namespace std;

int fib(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fib(n - 1) + fib(n - 2);
}

int main()
{
    int n;
    cout << "Enter number of terms: ";
    cin >> n;

    cout << "Fibonacci Series: ";
    for (int i = 0; i < n; i++)
        cout << fib(i) << " ";

    return 0;
}


