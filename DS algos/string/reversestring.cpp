#include<iostream>
using namespace std; 
int main(){
    string s = "krisha ";
    int start = 0;
    int end = s.size() - 1;
    while(start<end)
{
    swap(s[start],s[end]);
    start++;
    end--;
}
cout<<s<<endl;
//size of string without using inbuilt function
int size = 0;
while(s[size]!='\0'){
    size++;
}
cout<<size<<endl;
//pallindrom check
string s1 = "madam";
int start1 = 0;
int end1 = s1.size() - 1;
bool isPallindrome = true;
while(start1 < end1){
    if(s1[start1] != s1[end1]){
        isPallindrome = false;
        break;
    }
    start1++;
    end1--;
}
if(isPallindrome){
    cout<<"The string is a palindrome."<<endl;
}
else{
    cout<<"The string is not a palindrome."<<endl;
}
return 0;
}