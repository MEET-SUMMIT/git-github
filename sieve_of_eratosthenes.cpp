//to find prime number less than n
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
using namespace std;
int main(){ int i,j,k;
    constexpr int n=1000;
    vector<int>num(n-1);
    for(i=0;i<n-1;++i){
        num[i]=i+2;
    }
    for(i=0;i<n-1;i++){
        if(num[i]==0)
        continue;
        else{
          for (j = i+1,k=0; j < n-1; j++)
          {if (num[j]%num[i]==0)
          {num[j]=0;
            k++;
          }
          }
          if(k==0)
           break;
        }
    }for ( i = 0; i < n-2; i++)
    {
       if(num[i]!=0)
       cout<<num[i]<<"\n";
    }

}
