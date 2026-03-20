ARRAY
Array is a collection of items stored at contiguous memory locations. 
The idea is to store multiple items of the same type together. 
This makes it easier to calculate the position of each element by simply adding an offset to a base value, i.e., 
the memory location of the first element of the array (generally denoted by the name of the array).

pregiven values 
Q-1/ WAP TO FIND OUT THE SUM OF ALL ELEMENTS OF A 2D ARRAY wihtout cin.
A-1/
#include <bits/stdc++.h>
using namespace std;
int main() {
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}},s=0;
   for(int i=0; i<3; i++){
     for(int j=0; j<3; j++){
      s=s+a[i][j];
     }


Q-1/Write a program to input a one dimensional array and display the elements of the array.
Q-2 Wrire a program to find out the addition of two arrays.
Q-3/ Write a program to find out the Multiplication of two array.

A-1/ #include <iostream>
using namespace std;
int main() {
}

A-2/
#include <bits/stdc++.h>
using namespace std;
int main() {
    int a[6], b[6],s[6];
    for(int i=0; i<6; i++){
        cin>> a[i];
    }
    for(int i=0; i<6; i++){
        cin>> b[i];
    }
    for(int i=0; i<6; i++){
     s[i]=a[i]+b[i];
        cout<< s[i]<< " ";
    }   
}

A-3/ 
#include <bits/stdc++.h>
using namespace std;
int main() {
    int a[6], b[6], i,s;
    for(int i=0; i<6; i++){
        cin>> a[i];
    }
    for(int i=0; i<6; i++){
        cin>> b[i];
    }
    for(int i=0; i<6; i++){
     s=a[i]*b[i];
        cout<< s[i]<< " ";
    }   
}


Q-4/ Write the program to find out the sum of all the numbers of an array.
A-4/ 

#include <bits/stdc++.h>
using namespace std;

int main() {
    int s=0,d=0,a[5],b[5], sum;
 for(int i=0; i<5; i++){
     cin>> a[i];
     s=s+a[i];
 }
 for(int i=0; i<5; i++){
    cin>> b[i];
    d=d+b[i];
 }
   sum=s+d;
   cout<< sum;
}


Q-5/ Write a program to find out the sum of even numbers and all odd numbers of an array.
A-5/ 
#include <bits/stdc++.h>
using namespace std;
int main() {
    int a[6], evenSum=0, oddSum=0;
    for(int i=0; i<6; i++){
        cin>> a[i];
        if(a[i] % 2 == 0){
            evenSum += a[i];
        } else {
            oddSum += a[i];
        }
    }
    cout<< "Sum of even numbers: " << evenSum << endl;
    cout<< "Sum of odd numbers: " << oddSum << endl;
}

Q-6/ Write a program to find out the sum of all even index variable and all odd index variable of an array.
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[5], s=0,d=0;
	for(int i=0; i<5; i++){
	 cin>> a[i];
	 if(i%2==0){
	  s+= a[i];
	 }
	 else{
	     d+=a[i];
	 }
	    
	}
	cout<< s << endl;
	cout<< d << endl;    
}

Q-7/ WAP to find the Biggest Number of an array.
A-7/ 
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>> n;
    int a[n];
    int Big= a[0];
    for(int i=0; i<n; i++){
        if(Big< a[i]){
            Big= a[i];
        }
    }
}

Q-8/ WAP to find the Smallest Number of an array. (COMBINED ANWER OF 7-8 WITH LOCATION)
A-8/
#include <iostream>
using namespace std;
int main(){
    int n,loc=0,lox=0;
    cin>> n;
    int a[n];
    for (int i=0; i<n; i++){
        cin>> a[i];
    }
    int Big= a[0];
    for(int i=0; i<n; i++){
        if(Big< a[i]){
            Big= a[i];
            loc=i;
        }
    }
    int small= a[0];
    for(int i=0; i<n; i++){
        if(small > a[i]){
            small = a[i];
            lox=i;
        }
    }
    
    cout<< " Biggest value of the array is " << Big << " and the location is " << loc << endl ;
    cout<< " Largest value of the array is " << small << " and the location is " << lox;
}



Q-9/ WAP to find out the smallest number of an array and 
also find out the index of that smallest number.
A-9/ 
#include <bits/stdc++.h>\using namespace std;

int main() {

for(int i=0; i<10; i++){
   
cin>> a[i];
}
small=a[0];

for(i=0; i<10; i++){
    if(a[i]<small){
    small=a[i];
    loc=i;
    }
}
cout<< "Smallest number is" << small << "for at loc"<< loc+1;
}


Q-10/ WAP to find out the linear search of an array for multiple similar items.
A-10/
#include <bits/stdc++.h>
using namespace std;

int main() {
 int n,item, c=0;
 cin>> n;
 int a[n];
 cin>> item;
 for(int i=0; i<n; i++){
 
     cin>> a[i];
    }
for(int i=0; i<n; i++){
    
   if(a[i]==item){
   cout<< "Item Found at loc "<< ++i;
   c++;
   }
}  
    if(c==0){
    cout<< "NOT FOUND";
    }
}


#include <iostream>
using namespace std;
int main(){
    int n,loc=0;
    cin>>n;
    int a[n];
    int item=4;
    int c=0;
    for(int i=0; i<n;i++){
        cin>> a[i];
    }
    for(int i=0; i<n; i++){
        if(a[i] == item){ //by DR.swayamshukla
            c++; 
            loc=i;
        }
    }
    if(c>0){
        cout<< item << " item found at " << "location " << loc;
    }
    if(c==0){
        cout<< "No item found";
    }
}




Q-11/ WAP for whether a given number is available in the list or not.

