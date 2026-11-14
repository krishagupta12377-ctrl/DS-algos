#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int value){
        data = value ;
        next = NULL; 
    }
};

class stack{
    node* top;
    int size;
    public:
    stack(){
        top = NULL;
        size = 0; //actual size of stack  
    }
    //push 
void push(int value){
    node *temp = new node(value);
    if(temp == NULL){  //this is because if heap is full 

        cout<<"stack overflow"<<endl;
        return;}
else{
    temp->next = top;
    top = temp;
    size++;
    cout<<"pushed element is "<<value<<" in stack"<<endl;
}
    //edge case for stack overflow is not handled here as linked list can grow dynamically until memory is exhausted
}
    //pop 
    void pop(){
        if(top == NULL){
            cout <<"stack underflow"<<endl;
            return ;
        }
        else{
            node* temp = top;
            cout<<"popped element is" << temp->data<<endl;
            top = top->next;
            delete temp; 
            size --;
        }
    }
    //peek
    int peek(){
        if(top == NULL){
            cout<<"stack is empty"<<endl;
            return -1;
        }
        else{
            return top->data;
        }    }
    //isEmpty
    bool isEmpty(){
        return top == NULL;
    }
    //Is size 
    int getSize(){
        return size;

    }
};


int main(){
    stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout<<"Top element is: "<<s.peek()<<endl;
    cout<<"Stack size is: "<<s.getSize()<<endl;
    s.pop();
    cout<<"Top element after pop is: "<<s.peek()<<endl;
    return 0;                                           
}