#include<iostream>
using namespace std;
class stack {
    //Implementation of stack using array
    int *arr;
    int top;
    int size;

    public:
    bool flag;
    //Constructor to initialize stack
    stack(int s){
        size=s;
        arr= new int[s];
        top= -1;
        flag = 1;

    }
        //push function to add an element to the stack
        void push(int value){
        if(top==size-1){
            cout<<"stack overflow"<<endl;
        }
        else {
            top++;
            arr[top]= value;
            cout<<" pushed element is "<<value<<" in stack "<<endl;
            flag = 0;
        }
 }
    
        //pop function to remove an element from the stack
        void pop(){
            if(top==-1){
                cout<<"stack under flow"<<endl;
            }
            else{
                 cout<<"popped element is "<<arr[top]<<" from the stack"<<endl;
                top--;
               if(top==-1){
                   flag = 1;
               }
            }
        }
        //peek function to return the top element of the stack
        int peek(){
            if(top == -1){
                cout<<"stack is empty"<<endl;
                return -1;
            }
            else 
            return arr[top];

        }
        //isEmpty function to check if the stack is empty
        bool isEmpty(){
            return flag == 1;
        }
        //size function to return the size of the stack
        int getSize(){
            return top+1;
        }
        //isFull function to check if the stack is full
    bool isFull(){
        return top==size-1; 
    }
};
int main(){
stack s(5);
s.push(5);
s.push(10);
s.push(15);
s.push(20);
s.push(25);
s.push(30);
s.pop();
s.pop();
cout<<"top element is "<<s.peek()<<endl;
cout<<"size of stack is "<<s.getSize()<<endl;
cout<<"is stack empty "<<s.isEmpty()<<endl;
}