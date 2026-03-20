#include <iostream>
using namespace std;

    void insertionsort(int a[], int n){
        int i,j,key;
    for (i=1; i<n; i++){ //5
        key=a[i];
        for(j=i-1;j>=0;j--){
            if(a[j]>key)
            a[j+1]=a[j];
            else
            break;
        }
        a[j+1]=key;
    }
}
    void printarray(int a[],int n){
      for(int i=0;i<n;i++){
      cout<<a[i]<<" ";
      }  
      
    }
    int main(){
      int a[]={10,42,8,60,2};
      int n=sizeof(a) /sizeof(a[0]);
      insertionsort(a,n);
      
      printarray(a,n);
      return 0;

    }
    

    
