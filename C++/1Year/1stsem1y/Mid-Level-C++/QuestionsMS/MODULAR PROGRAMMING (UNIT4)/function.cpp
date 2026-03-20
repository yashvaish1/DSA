Data Type Input

1.VOID

Q-1/ wap to find out the addition of two numbers using functions.
2. wap to find out the additiomn of three numbers using functions.
3. wap to find out the addition and sub of two numbers using functions.
4. wap to find out the mul and div of two numbers using functions.
5. wap to find out the area and circumference of a circle using functions.
6. wap to find out the additon, sub, mul, and div of two numbers using functions.
7. wap to find out the swapping of two numbers using functions.

A-1/


#include <bits/stdc++.h>
using namespace std;

int addition(int x,int y){
    int z;
    z=x+y;
    return (z);
}

int main() {
    int x,y;
    cin>>x>>y;
 cout<< addition(x,y);
}



ANS (2-7)/

#include <bits/stdc++.h>
using namespace std;

void calculation(int x,int y){
    int sub,add;
    sub=x-y;
    add=x+y;
    cout<< "sub " << sub << endl;
    cout<< "add " << add;
}

int main() {
    int x,y;
    cin>>x>>y;
    calculation(x,y);
}

#include <bits/stdc++.h>
using namespace std;

void swap(){
    int c,b,a,oo,ot;
    cin>> a>> b;
    oo=a;
    ot=b;
    b=b+a;
    a=b-a;
    b=b-a;
    cout<< "swapped number of original " << oo << " now " << a << " and original " << ot << " now " << b << endl;
}

void area(){
    int pi=3.14;
    int radius,area;
    cin>> radius;
    area=pi*radius*radius;
    cout<<" area of the circle is " << area<< endl;
}

void circum()
{
    int pi=3.14, radius, circum;
    cin>> radius;
    circum = 2*pi*radius;
    cout<< " circumference of the circle " << circum << endl;
}


void div()
{
    int a,b,c;
    cin>> a>>b;
    c=a/b;
    cout<< "div " << c << endl;
}

void mult(){
    int x,y,z;
    cin>> x>>y;
    z=x*y;
    cout<< "mult " << z<< endl;
}
int main() {
	div();
	mult();
	circum();
	area();
	swap();
	
}


2. INT 

Q-1/ wap to find out the addition of two numbers using functions.
2. wap to find out the additiomn of three numbers using functions.
3. wap to find out the addition and sub of two numbers using functions.
4. wap to find out the mul and div of two numbers using functions.
5. wap to find out the area and circumference of a circle using functions.
// 6. wap to find out the additon, sub, mul, and div of two numbers using functions.
// 7. wap to find out the swapping of two numbers using functions. 


a-1/
#include <bits/stdc++.h>
using namespace std;

int addition()
{
    int x,y,z;
    cin>>x>>y;
    z=x+y;
    cout<< "addition is " << z << endl;
    return (z);
}

int main() {
    int x,y;
 x= addition();
 y= area();

 cout<< x << endl << y << endl << ;
	
}

int area(){
    int pi=3.14;
    int radius,area;
    cin>> radius;
    area=pi*radius*radius;
    cout<<" area of the circle is " << area<< endl;
    return(area);
}

int swap(){
    int c,b,a,oo,ot;
    cin>> a>> b;
    oo=a;
    ot=b;
    b=b+a;
    a=b-a;
    b=b-a;
    cout<< "swapped number of original " << oo << " now " << a << " and original " << ot << " now " << b << endl;
    return (0);
}  

write a program to swap two number using functions.

  #include <bits/stdc++.h>
using namespace std;

int swap(int &a, int &b, int &s){
    b=b+a;
    a=b-a;
    b=b-a;
    return(0);
    
    
}

int main(){
    int a, b, s;
    cin>> a>>b;
    swap(a, b, s);
    cout<<a <<b;
}



NOTE:-

#include <bits/stdc++.h>
using namespace std;
int addition();
int main() {
    int x;
    x= addition();
 cout<< " " << x; 
}

int addition()
{
    int x,y,z;
    cin>>x>>y;
    z=x+y;
  cout<< z;
 return (0);
}


#include <bits/stdc++.h>
using namespace std;
VOID addition();
int main() {
    void addition(); 
}

VOID addition()
{
    int x,y,z;
    cin>>x>>y;
    z=x+y;
  cout<< z;
//  return (0); NOT TO BE USED WITH VOID AS IT DOESN'T RETURN ANY VALUE ALREADY.
}



























Q-2/ WAP TO FIND OUT THE FACTORIAL OF THE GIVEN NUMBER USING FUNCTION.
Q-3/ WAP TO FIND OUT THE SUM OF DIGITS OF THE NUMBER.
Q-4/ WAP TO FIND OUT THE BIGGEST NUMBER OF AN ARRAY.
Q-5/ WAP TO FIND OUT THE SUM OF ALL THE NUMBERS OF THE MATRIX.


A-2/ 

#include <iostream>
using namespace std;

int fact(){
    int n,s=1;
    cin>>n;
    for(int i=1; i<=n; i++){
        s=s*i;
    }
    cout<< "factorial is " << s; 
    return (0);
}

int main(){
    int fact();
}


-------------
#include <bits/stdc++.h>
using namespace std;

int fact(int n){
    int fact=1;
    while(n!=0){
        fact=fact*n;
        n--;
    }
    cout<< fact;
    return(0);
}

int main(){
    
    int n;
    cin>>n;
    fact(n);
}

--------------------------------------------------


A-3/ 

#include <bits/stdc++.h>
using namespace std; 

 int sumofdigits(int n){
     int dig,d=0,s=0;
     while(n!=0){
         d=n%10;
         s=s+d;
         n=n/10;
     }
     return (s);
     
 }
 
 int main (){
    int n;
    cin>>n;
    cout<< "the sum of digits of the number "<<n << " is "<< sumofdigits(n);
    
 }

----------------------


#include <iostream>
using namespace std;

int sumofdig(){

    int n,s=0,d;
    cin>> n;
    while(n!=0){
       d=n%10;
    s=s+d;
    n=n/10; 
    }

    return(s);
}
    // for doing in for loop same question condition
    // for(int n=n; n!=0; n=n/10){
    //     d=n%10;
    // s=s+d;
    // n=n/10; 
    // }
    
int main(){
    int sumofdig();
    int k;
    k=sumofdig();
    cout<< "sum of the digits is " << k;

}


A-4/

#include <iostream>
using namespace std;

int arrbig(){
    int a[5];
    for(int i=0;i<5;i++){
      cin>> a[i];  
    }

    int big=a[0];
    for(int i=0;i<5;i++){
        if(big<a[i]){
            big=a[i];
        }
    }
   return(big);
}

int main(){
    int arrbig();
    int L;
    L=arrbig();
    cout<< "Biggest number of the array is " << L; 
}

----------------

// #include <bits/stdc++.h>
// using namespace std;

// int barr(int a, int big){
//     for(int i=0;i<5;i++){
//          if(big<a[i]){
//            big=a[i];
//        }
//     }
//     cout<<big;
// }

// int main(){
    
//     int a[5];
//     for(int i=0; i<5; i++){
//         cin>>a[i];
//     }
//     big=a[0];
//     barr(a[i],big);
    
// }


A-5/

#include <iostream>
using namespace std;

int matsum(){
    int x,y,s=0; /*for example x lenge 3 and y lenge 2*/
    cin>>x>>y;
    int a[x][y];
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            cin>>a[i][j];
        }
    }
   for(int i=0;i<x;i++){
    for(int j=0; j<y;j++){
       s=s+a[i][j];
    }
   }
   return(s);
}

int main(){
    
int matsum();
    cout<< "sum of all the elements of a 3x2 matrix is " << matsum() ;
    
}
/*why it's getting 0 if hum int matsum ki jagah khali matsum le rhey hai 
ik ki int laga kar call krte hai, but na krne pe error ani chaiye yeh 0 value kese ah rhi??"
and humesha int laga kr he kue call kr rhey hai? 
*/



#USING FUNCTION

Q-1/ wap to find out the addition of two numbers,.
two numbers 
Q-2/ avg and modulus of 2 numbers 
Q-3/ avg of 3 numbers 
Q-4/ add, sub, div and mult of two numbers
Q-5/ area and circumference of a circle.
Q-6/ percentage of marks of 3 subjects.
 if this percentage is >=50 print pass, else print fail.
Q-7/ wap a program to find out the swapping of two numbers.
Q-8/ wap to find out the factorial of a given number.
Q-9/ wap to find out the sum of digits.
Q-10/ wap to print fibonacci series.


 A-1/
 #include <iostream>
 using namespace std;
 int add(int, int);
 int main(){
   int a,b,c;
   cin>> a>>b;
 ;
   cout<<add(a,b);
 }

 int add(int a, int b){
    int c;
    c=a+b;
    return(c);
 }

 A-6/
 -----------|
 #1. VARITY |
------------|

#include <iostream>
using namespace std;
string pf(int, int , int);
string  pf(int m1 ,int m2, int m3){
    int per;
    per= (m1+m2+m3)*100/300;
    if(per>=50){
        return "pass";
    }
    else{
        return "fail";
    }
//   return(1);
 }
 int main(){
    int m1,m2,m3;
    cin>>m1>>m2>>m3;
    char W;
    W= pf(m1,m2,m3);
    cout<< W;
 }

 #2. Varity

   #include <iostream>
 using namespace std;
int pf(int, int , int);
int pf(int m1 ,int m2, int m3){
    int per;
    per= (m1+m2+m3)*100/300;
    if(per>=50){
        cout<< "pass";
    }
    else{
        cout<< "fail";
    }
    return(0);

 }

 int main(){
    int m1,m2,m3;
    cin>>m1>>m2>>m3;
    int x=pf(m1,m2,m3);
    //can be used as pf(m1,m2,m3)
    // cout<< pf(m1, m2 , m3);
 }
  

A-7/
#include <iostream>
using namespace std;
int swap(int , int );
int main(){
    int alpha,beta;
    cin>> alpha>>beta;
    cout<< alpha <<" "<< beta << endl;
    swap(alpha,beta);
}
int swap(int alpha, int beta){
    beta=beta+alpha; /* beta=2+1=3 */
    alpha=beta-alpha; /*alpha=3-1=2, hence a is swapped to b ab b ko a banana hai*/
    beta=beta-alpha; /*beta=3-2=1 , hence b is swapped to previous a*/
   cout<< alpha << " "<< beta;
   return(0);
} 



A-8/
#include <iostream>
using namespace std;

int fact(int n){
    int facto=1;
    for(int i=1;i<=n;i++){
        facto=facto*i;
    }
    return (facto);
}
int main(){
    int m;
    cin>>m;
    cout<< fact(m);
}


A-9/
Sum of digits 

#include <iostream>
using namespace std;
int sd(int num){
    int rem=0,sum=0;
    for(num=num; num!=0; num=num/10){
    rem=num%10;
    sum=sum+rem;
    }
   return(sum);
}

int main(){
    int num;
    cin>> num;
    cout<< sd(num);
}

 A-10/
fibonacci series
0 1 1 2 3 5 8 13 21 ...

#include <iostream>
using namespace std;
int fibo(int);
int main(){
    int n;
    cin>> n;
   fibo(n);
}
int fibo(int n){
 
   int x=0, y=1,s=0;
   cout<< x << " " << y <<" ";
   for(int i=2; i<n; i++){
    s=x+y;
    cout<< s <<" ";
    x=y;
    y=s;
    
   }
   return(0);
}

 
Q-11/ Wap to find out the given element in an array.
A-11/
Method-1/
#include <iostream>
using namespace std;
int linearsearch(){
     int arr[3][3]={{1,2,3},{1,3,2},{2,3,2}};
    int Finding=2;
    for(int i=0;i<3;i++){
        for(int j=0; j<3;j++){
            if(arr[i][j]==Finding){
                cout<<" Element found "<< Finding << " at grid "  << i << j << endl;
            }
        }
    }
    return(0);
    
}
int main(){
  linearsearch();
}


Method-2/

#include <iostream>
using namespace std;
int linearsearch(int X){
     int X;
    int Finding=2;
    for(int i=0;i<3;i++){
        for(int j=0; j<3;j++){
            if(X==Finding){
                cout<<" Element found "<< Finding << " at grid "  << i << j << endl;
            }
        }
    }
    return(0);
    
}
int main(){
    int arr[3][3];
    for(int i=0;i<3;i++){
        for(int j=0; j<3;j++){
            cin>> arr[3][3];
            }
        }
    }
    int X=arr[3][3];
  linearsearch(X);
}


Q-/ Wap to find out the smallest number of a matrix.
A-12/
#include <iostream>
using namespace std;
int small(int arr[3][3], int s){
    for(int i=0;i<3;i++){
        for(int j=0; j<3;j++){
            if(s>arr[i][j]){
                s=arr[i][j];
            }
            }
        }
    cout<< s;

    return(0);
}
int main(){
    int arr[3][3];
    for(int i=0;i<3;i++){
        for(int j=0; j<3;j++){
            cin>> arr[3][3];
            }
        }
    int s=arr[0][0];
    small(arr, s);
}

// ----------------------------------------------------------------------------------------------------------------------  


what is call by reference and call by value in functions?
Call by Value:

In call by value, a copy of the actual parameter's 
value is passed to the function. Changes made to the 
parameter inside the function do not affect the original argument.

example:
#include <iostream>
using namespace std;
int modify(int a) {
    a = a + 10; // This change won't affect the original variable
    return a;
}
int main() {
    int num = 5;
    modify(num);
    cout << num; // Output will be 5
    cout<< modify(num); // Output will be 15
    return 0;
}


Call by Reference:
In call by reference, a reference (or pointer) to the actual parameter is passed to the function.
Changes made to the parameter inside the function do affect the original argument.
example:
#include <iostream>
using namespace std;
void modify(int &a) {
    a = a + 10; // This change will affect the original variable
}
int main() {
    int num = 5;
    modify(num);
    cout << num; // Output will be 15
    return 0;
}

 Difference between Call by Value and Call by Reference:
1. Call by Value:
    - Passes a copy of the variable's value to the function.
    - Changes made to the parameter do not affect the original variable.
    - Used when you want to protect the original data from being modified.
    - Generally safer but can be less efficient for large data structures.

2. Call by Reference:
    - Passes a reference (or address) of the variable to the function.
    - Changes made to the parameter do affect the original variable.
    - Used when you want the function to modify the original data.
    - More efficient for large data structures since no copy is made.    

Good Example of both:
#include <iostream>
using namespace std;
void callByValue(int a) {
    a = a + 10; // This change won't affect the original variable
}
void callByReference(int &b) {
    b = b + 10; // This change will affect the original variable
}
int main() {
    int num1 = 5;
    int num2 = 5;

    callByValue(num1);
    cout << "After Call by Value: " << num1 << endl; // Output will be 5

    callByReference(num2);
    cout << "After Call by Reference: " << num2 << endl; // Output will be 15

    return 0;
}    



