#include <iostream>
using namespace std;

class Stack{
    int arr[100];
    int top;
 
    public:
        Stack() {
            top= -1;
        }

        //Push operation
        void push(int item){
            if(top==99){
                cout<<"Stack Overflow"<<endl;
            }
            else{
                top++;
                arr[top]=item;
                cout<<item<<" Has been added to Stack"<<endl;
            }
        }
        void pop(){
            if(top==-1){
                cout<<"Stack Underflow"<<endl;
            }
            else{
                cout<<arr[top]<<" Has been Discarded from the stack"<<endl;
                top--;
            }
        }
        void peek(){
            if(top==-1){
                cout<<"Stack is Empty"<<endl;
            }
            else{
              cout<<arr[top]<<" Is the Peek of the Stack"<<endl;
            }
        }
        void display(){
            if(top==-1){
                cout<<"Stack is Empty"<<endl;
            }
            else{
                for(int i=0; i<=top;i++){
                    cout<<"Element's in the STACK"<<endl;
                    cout<<arr[i]<<" ";
                }
            }
            
        
    }
};

int main(){
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.display();
    s.peek();
    s.pop();
    s.peek();
    s.display();

    return 0;

    
}
