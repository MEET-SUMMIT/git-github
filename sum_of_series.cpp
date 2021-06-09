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
int sum_of_Nterms(vector<int>v,int n){
    int sum =0;
    for (size_t i = 0; i < n; i++)
    {
    sum=sum+v[i];
    }
    return sum;
}
int main(){
    vector <int> v;
    int x=0,n=0;
    cout<<"enter number of terms you want to add";
    cin>>n;
    cout<<"enter the series(press | to stop)";
    while (cin>>x)
    v.push_back(x);
    if (n>v.size()||n<1)
    {
        cerr<<"invalid feed";
    }
    else
    cout<<"the sum of series is "<<sum_of_Nterms(v,n);
    return 0;
    
}