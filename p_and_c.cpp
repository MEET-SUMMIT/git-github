#include ".\std_lib_facilities.h"
using namespace std;
int permutation(int a,int b);
int combination(int a,int b);
int factorial(int a);
int main()
try{
    cout<<"for permutation press 1"
    <<"\nfor combination press 2 :";
    int choice;
    cin>>choice;
    if(choice==1||choice==2){
    cout<<"enter two numbers:";
    int a=0,b=0;
    cin>>a>>b;
    if(a-b<0||a==0||b==0)error("invalid input");
    switch (choice)
    {
    case 1:
        cout<<"no of permutation are "<<permutation(a,b);
        break;
    case 2:
        cout<<"no of combinations are "<<combination(a,b);
        break;
    }
    }
    else
    error("invalid choice");
}
catch (exception& e){
    cerr<<e.what()<<'\n';
}
catch (...){
    cerr<<"exception"<<'\n';
}
int permutation(int a,int b){
    return factorial(a)/factorial(a-b);
}
int combination(int a,int b){
    return permutation(a,b)/factorial(b);
}
int factorial(int a){
    if(a==0||a==1)
    return 1;
    else
    return a*factorial(a-1);
}