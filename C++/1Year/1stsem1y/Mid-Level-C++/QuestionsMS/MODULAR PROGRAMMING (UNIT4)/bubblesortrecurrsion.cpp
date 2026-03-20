#include <iostream>
using namespace std;
int sb(int,int,int,int);

int main(){
    int a[11];
    int beg=0,end=11;
    int item = 6;
    for(int i=0; i<11;i++){
        cin>> a[i];
    }
    if(mid)
    cout<< "item found at"<< sb(a, item);


}

int sb(int a[11],int item,int beg, int end){
    int mid= (beg+end)/2;
    if(a[mid]==item){
        return mid;
    }
    else-if(a[mid]>item){
        
        return sb(a,item,beg,mid-1);
    }
    else-if(a[mid]<item){
        return sb(a,item,mid+1,end);
    }
}

#include <iostream>
using namespace std;
int sb(int,int,int,int);

int main(){
    int a[11];
    int beg=0,end=11;
    int item = 6;
    for(int i=0; i<11;i++){
        cin>> a[i];
    }
   
    cout<< "item found at"<< sb(a, item,beg, end);


}

int sb(int a[11],int item,int beg, int end){
    int mid= (beg+end)/2;
    if(a[mid]==item){
        return mid;
    }
    else-if(a[mid]>item){
        
        return sb(a,item,beg,mid-1);
    }
    else-if(a[mid]<item){
        return sb(a,item,mid+1,end);
    }
}