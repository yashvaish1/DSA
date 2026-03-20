ANS-1

#include <iostream>
using namespace std;
int PDrome(int num){
    int rem,memory,store=0;
    memory=num;
    for(num=num; num!=0; num=num/10){
        rem=num%10; //provide's the last value
        store=store*10+rem; //adds the last value to the value before by mul it to 10
    }
    if(memory==store){
    cout<< "it's a PALINDROME";
    }
    else{
        cout<< "it's not a palindrome";
    }
    return(0);
}

int main(){
    int n;
    cin>>n;
    PDrome(n);
}

ANS-2/
#import <iostream>
using namespace std;

int armS(int n){
    

}
int main(){
    int n;
    cin>>n;
    armS(n);
    return(0);
}