 #include<iostream>
#include<iomanip>
#include<fstream>
#include<sstream>
#include<cmath>
#include<cstdlib>
#include<string>
#include<list>
#include <forward_list>
#include<vector>
#include<unordered_map>
#include<algorithm>
#include <array>
#include <regex>
#include<random>
#include<stdexcept>
#include<exception>
using namespace std;
void fibonacci(vector <int>v,int n){
    for (size_t i = 0; i < n; i++)
    {
       cout<<v[i]<<" ";
       v.push_back(v[i]+v[i+1]);
    }
    
}
int main(){
    vector<int>v={1,1};
    cout<<"enter the number of terms :";
    int n=0;
    cin>>n;
 /*   if(n<2)
    for (size_t i = 0; i < n; i++)
    {
       cout<<v[i]<<" ";
    }
    else*/
    fibonacci(v,n);
    return 0;
    
}