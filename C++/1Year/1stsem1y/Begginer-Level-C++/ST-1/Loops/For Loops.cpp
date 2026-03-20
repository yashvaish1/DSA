
CONCEPTTTTTTTTTTT

FOR LOOPS
    - Used when the number of iterations is known beforehand.
    - Syntax:
        for (initialization; condition; increment/decrement) {
            // Code to be executed
        }
    - Example:
        for (int i = 0; i < 5; i++) {
            cout << i << " ";
        }
    - Output: 0 1 2 3 4

    - Best suited for iterating over arrays or collections where the size is known.


WHILE LOOPS
    - Used when the number of iterations is not known beforehand.
    - Syntax:
        while (condition) {
            // Code to be executed
        }
    - Example:
        int i = 0;
        while (i < 5) {
            cout << i << " ";
            i++;
        }
    - Output: 0 1 2 3 4

    - Best suited for scenarios where the loop needs to continue until a certain condition is met, such as reading input until EOF.

    DO WHILE LOOPS
    - Similar to while loops, but guarantees that the code block is executed at least once.
    - Syntax:
        do {
            // Code to be executed
        } while (condition);
    - Example:
        int i = 0;  
        | do {
            cout << i << " ";
            i++;
        } while (i < 5);
    - Output: 0 1 2 3 4
    - Best suited for scenarios where the code block must be executed at least once, such as menu-driven programs where the menu should be displayed at least once before checking for exit conditions.

    DIFFERNECE BETWEEN FOR, WHILE AND DO WHILE LOOPS
    - For loops are ideal when the number of iterations is predetermined, 
    while loops are better 
    for situations where the number of iterations is uncertain. 
    Do while loops ensure at least one execution of the code block,
     making them suitable
     for scenarios where initial execution is necessary before condition checking.





     FOR LOOP QUESTION'S

     Q-1 WRITE A PROGRAM TO PRINT ALL EVEN NUMBERS FROM 2 TO X USING FOR LOOP.
     A-1) #include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
    cin>>x;
 for (int i=2; i<=x; i++)
 {
     if(i%2==0){
         cout<<i<< " ";
     }
 }

}
 -----------------------------------------------------------------------------------------------------------------------
     Q-2 WRITE A PROGRAM TO PRINT ALL ODD NUMBERS FROM X TO Y USING FOR LOOP.
     +
--------------------------------------------------------------------------------------------------------------------------
     Q-3 WRITE A PROGRAM TO PRINT ADDITION OF X TO Y USING FOR LOOP.
     A-3 #include <bits/stdc++.h>
using namespace std;

int main() {

 int x,y,s=0;
 cin>> x>>y;
 for(x;x<=y;x++){
     s=s+x;
 }
  cout<<"Addition of numbers from x to y is " << s << endl;
}
-----------------------------------------------------------------------------------------------------------
     Q-4 WRITE A PROGRAM TO PRINT ADDITION OF ALL NUMBERS FROM 10 TO 1.
---------------------------------------------------------------------------------------------------------------

     Q-5 WRITE A PROGRAM TO ADD OF ALL NUMBERS THAT NUMBERS ARE DIVISIBLE BY 11 UPTO 500.
     #include <bits/stdc++.h>
using namespace std;

int main() {
    int s=0;
    int n;
    cin>>n;
	for ( n; n<=500; n++){
	
	    if (n%11==0){
	        s=s+n;
	    }
	}
	cout<< s;
	

}
 -------------------------------------------------------------------------   
     Q-6 WRITE A PROGRAM TO PRINT FACTORIAL OF A NUMBER N.
     ANS-6)
     #include <bits/stdc++.h>
using namespace std;

int main() {
    int n,s,i=1;
    cin>> n;
	for (n;n>=i ;n--){
	    s=s+n;
	    
	}
	cout<< s;

}

     Q-7 WRITE A PROGRAM TO CHECK WHETHER THE NUMBER IS PALINDROME OR NOT
        ANS-7) 
     Q-8 WRITE A PROGRAM TO PRINT FIBONACCI SERIES UPTO N TERMS.
        ANS-8)  



        