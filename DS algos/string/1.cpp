#include<iostream>
using namespace std;
int main (){
    string s;
    getline(cin,s);
    cout<<s<<endl;
    cout<<s.size()<<endl ;
    //append
    string s1 = "hello ";
    string s2 = "world";
    string s3 = s1.append(s2); //a also we can use s1+s2
    cout<<s3<<endl;
    // escape charachter use 
    string s4 = "hello is \"a\" world";
    cout<<s4<<endl;
    return 0;
}