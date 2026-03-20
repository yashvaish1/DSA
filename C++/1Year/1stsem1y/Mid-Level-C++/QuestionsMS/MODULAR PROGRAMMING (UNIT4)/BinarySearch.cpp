Binary Search 
-------------------
Binary search is the most efficient searching algorithm.
 It works on the principle of divide and conquer. 

The basic idea is to divide the array into two halves and compare the target value with the middle element of the array.
 If the target value is equal to the middle element,
  the search is complete. 

  If the target value is less than the middle element,
   the search continues in the left half of the array.

   If the target value is greater than the middle element, 
   the search continues in the right half of the array. 
   This process is repeated until the target value is found or 
   the array is exhausted.


   Ex-1; 
   #include <iostream>
   using namespace std;

   int main(){
   int item = 10230;
   int beg=0, end=11000;

   while(beg <= end){
    int mid= (beg+end)/2;
    if(item == mid){
        cout<< "item found";
    }
    else-if(item < mid){
        beg=0;
        end= mid-1;
    }
    else{
        beg= mid+1;
        end=11000;
    }
   }


   }


#include <iostream>
using namespace std;
int sb(int[],int,int,int);
int main(){
    int a[11];
    int beg=0,end=10;
    int item = 6;
    for(int i=0; i<11;i++){
        cin>> a[i];
    }
   
    cout<< "item found at"<< sb(a, item,beg, end);
}
