#include<iostream>
#include<stack>
using namespace std;

bool check(string str){
    stack<char>s;
    for(int i=0; i<str.length();i++){
        //opening brackets
        if(str[i]=='('){
            s.push(str[i]);
        }
        else{
            if(s.empty()){
                return 0;
            }
            else{
                s.pop();
            }
        }
    }
    return s.empty();
}
int main(){
    string str;
    cout<<"Enter the string of brackets"<<endl;
    cin>>str;
    cout<<check(str)<<endl;
    return 0;
}