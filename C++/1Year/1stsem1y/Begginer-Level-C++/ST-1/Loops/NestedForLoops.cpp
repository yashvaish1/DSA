Q-1/ write a program to print this pattern.
          *****
          *****
          *****
          *****
A-1/
#include <bits/stdc++.h>
using namespace std;

int main() {
	for(int i=1; i<=4; i++){
	    for (int j=1; j<=5; j++){
	        cout << "*";
	    }
	    cout<< endl;
	}
}


Q-2/ write a program to print this pattern.
          ***
          ***
          ***
          ***
          ***

A-2/ #include <bits/stdc++.h>
using namespace std;

int main() {
	for(int i=1; i<=5; i++){
	 for (int j=1 ; j<=3; j++){
	     cout<< "*";
	 }
	 cout<< endl;
	    
	}
}    

Q-3/ write a program to print this pattern.
          1 1 1 1 1
          2 2 2 2 2
          3 3 3 3 3
          4 4 4 4 4
          5 5 5 5 5 
A-3/ #include <bits/stdc++.h>
using namespace std;
int a=1;
int main() {
 for(int i=1; i<=5; i++){
   for(int j=1; j<=5; j++)
   {
    cout << a <<" ";
    
   }
   cout<< endl;
   ++a;
 }  
}

Q-4/ write a program to print this pattern.
           1 2 3 4 5
           1 2 3 4 5
           1 2 3 4 5
           1 2 3 4 5
A-4/     
           #include <bits/stdc++.h>
using namespace std;

int main() {
    int a=1;
for(int i=1; i<=5; i++){
   for (int j=1; j<=5; j++){
       cout << a << " ";
       ++a;
   }
   cout << endl;
   a=1;
}

}                 

Q-5/ write a program to print this pattern.
          5 5 5 5 5
          4 4 4 4 4 
          3 3 3 3 3
          2 2 2 2 2
          1 1 1 1 1 
A-5/ #include <bits/stdc++.h>
using namespace std;

int main() {
    int a=5;
for(int i=1; i<=5; i++){
   for (int j=1; j<=5; j++){
   cout << a << " "; 
   }
   cout << endl;
   --a;
	
}}


Q-6/ write a program to print this pattern.
                     5 4 3 2 1
                     5 4 3 2 1
                     5 4 3 2 1
                     5 4 3 2 1                          
A-6/ 
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a=5;
for(int i=1; i<=5; i++){
   for (int j=1; j<=5; j++){
       cout << a << " ";
       --a;
   }
   cout << endl;
   a=5;
}

}

Q-7/ write a program to print this pattern.
          *
          * *
          * * *
          * * * *
A-7/
#include <bits/stdc++.h>
using namespace std;

int main() {
for(int i=1; i<=4; i++){
    for (int j=1; j<=i; j++){
        cout << "*";
    }
    cout << endl;
}
}

Q-8/ write a program to print this pattern.
          1
          2 2
          3 3 3 
          4 4 4 4 
          5 5 5 5 5
A-8/ 
#include <bits/stdc++.h>
using namespace std;

int main(){
for(int i=1; i<=5; i++){
    for (int j=1; j<=i; j++){
        cout << i << " ";
    }
    cout<< endl;
}
}

Q-9/ write a program to print this pattern.
          1
          1 2
          1 2 3
          1 2 3 4
          1 2 3 4 5
A-9/          
#include <bits/stdc++.h>
using namespace std;

int main() {
for(int i=1; i<=5; i++){
    for (int j=1; j<=i; j++){
        cout << j << " ";
    }
    cout<< endl;
}
}

Q-10/ write a program to print this pattern.
          5
          4 4
          3 3 3
          2 2 2 2
          1 1 1 1 1

A-10/
#include <bits/stdc++.h>
using namespace std;

int main() {
int a=5;
	for(int i=1; i<=5; i++){
    for (int j=1; j<=i; j++){
    cout << a << " ";
    }
    cout<< endl;
    --a;

}
}

Q-11/
5 
5 4 
5 4 3 
5 4 3 2 
5 4 3 2 1

A-11/
#include <bits/stdc++.h>
using namespace std;

int main() {
int a=5;
	for(int i=1; i<=5; i++){
    for (int j=1; j<=i; j++){
    cout << "*";
    --a;
    }
    a=5;
   cout << endl;
}
    
}

Q-12/ 
 * * * * *
 * * * *
 * * *
 * *
 * 
  
#include <bits/stdc++.h>
using namespace std;

int main() {
 for(int i=5; i>=1; i--){
     for(int j=1; j<=i; j++){
         cout<< "*";
     }
     cout<< endl;
 }
}


Q-13/
1 1 1 1 1
2 2 2 2
3 3 3
4 4
5

#include <bits/stdc++.h>
using namespace std;

int main() {
 for(int i=1; i<=5; i++){
     for(int j=5; j>=i; j--){
         cout<< i << " ";
     }
     cout<< endl;
 }
    
}

Q-14/
5 4 3 2 1
5 4 3 2
5 4 3
5 4
5



#include <bits/stdc++.h>
using namespace std;

int main() {
 for(int i=1; i<=5; i++){
     for( int j=5; j>=i; j--){
        cout<< j << " ";
     }
     cout << endl;
 }

}


Q-15/
 
5 5 5 5 5
4 4 4 4
3 3 3
2 2
1

#include <bits/stdc++.h>
using namespace std;

int main() {
	for(int i=5; i>=1; i--){
	    for(int j=1; j<=i; j++){
	        cout<< i << " ";
	        
	    }
	    cout<< endl;
	}

}


Q-16/
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1

#include <bits/stdc++.h>
using namespace std;

int main() {
for(int i=5; i>=1; i--){
    for(int j=1; j<=i; j++){
        cout<< j << " ";
    }
    cout<< endl;
    
}
}

Q-17/

1 2 3 4 5
2 3 4 5
3 4 5
4 5
5
4 5
3 4 5
2 3 4 5
1 2 3 4 5

Q-18/

#include <bits/stdc++.h>
using namespace std;
