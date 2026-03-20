Questions today
1. write a program to sum of digit of a input number.
2. write a program to reverse of a number.
3. write a program to find out whether a given number is palindrome or not. (for eg 121 is palindrome)
4. write a program to find out whether a given number is armstrong or not. (for eg 153=1^3+5^3+3^3)
----------------------------------------------------------------------------------------------------------------
Ans.1) 
Sum of the digits//
#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, s=0,d;
	cin>> n;
	while(n>0){
	    d=n%10;
	    s=s+d;
	    n=n/10;
	}
	cout<< s;
}
----------------------------------------------------------------------------------------------------------------
Ans.2)
       //reverse of a number//
#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, s=0,d;
	cin>> n;
	while(n>0){
	    d=n%10;
	    s=s*10+d;
	    n=n/10;
	}
	cout<< s;
}
----------------------------------------------------------------------------------------------------------------
Ans.3)
       //palindrome//
       #include <bits/stdc++.h>
using namespace std;
int main() {
	int n,t,d,s=0;
	cin>> n;
	t=n;
	while(n>0){
	    d=n%10;
	    s=s*10+d;
	    n=n/10;
	}
	if(s==t){
	 cout<< "Palindrone number " << s;   
	}
	else {
	    cout<< "Not a Palindrone Number " << s;
	}
}
----------------------------------------------------------------------------------------------------------------

Ans.4)
       //armstrong//
       #include <bits/stdc++.h>
using namespace std;

int main() {
     int n,d,s=0,t ;
     cin>> n;
     t=n;
     while (n>0){
         d=n%10;
         s=s*10+d*d*d;
         n=n/10;
         
     }
     if(t==s){
         cout<< "Amstrong Number " << s; 
     }
     else {
         cout << "Not a Amstrong Number " << t;
     }
}
----------------------------------------------------------------------------------------------------------------


CONCEPTTTTTTTTTTTTTT

 #Do-while loops

do {
   // code block to be executed
} while (condition);

q.1 print all numbers from 1 to 10 using do while loop.
a.1) #include <bits/stdc++.h>
using namespace std;

int main() {
	int i=1 ;
	do{
	   cout<< i << " ";
	   ++i;
	   
	}while(i<=10);

}

q.2 print all even numbers from 2 to 50 using do while loop.
a.2) #include <bits/stdc++.h>
using namespace std;

int main() {
	int i=2;
	do{
	  if (i%2==0){
	      cout << i << " ";
	      
	  }
	    ++i;
	}while(i<=50);

}


q.3 add of all the even no from 2 to 50 using do while loop. 
  


