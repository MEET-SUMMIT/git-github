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
int main(){
    int b=0,i=0,c=0,j,k,seed;
    cout<<"enter a number:";
    cin>>seed;
    vector <int> v(4);
    srand(seed);
    for (j = 0; j < 4; j++)
    {v[j]=rand()%9;
    for(k=0;k<j;)
     {if (v[j]==v[k])
     {
      v[j]=rand()%9;
      k=0;
      continue;
     }
     else
     k++;
     }
    }
   cout<<v[0]<<v[1]<<v[2]<<v[3];
  vector<int> guess(4);
    cout<<"guess the 4 digit number\n";
    while (b!=4)
    {b=0;
    c=0;
      cin>>i;
    guess[0]=i/1000;
     guess[1]= (i%1000)/100;
      guess[2]=((i%1000)%100)/10;
       guess[3]=((i%1000)%100)%10;
    for (j = 0; j < 4; j++)
    {
       for (k = 0; k < 4; k++)
       {
           if(v[j]==guess[k]&&j==k)
           b++;
           else if (v[j]==guess[k]&&j!=k)
           c++;

       }

    }
    cout<<b<<" bull "<<c<<" cows \n";
    if(b!=4)
        cout<<"guess again\n";
     }
     char wanna_play;
     cout<<"if want to play again enter Y else N :";
     cin>>wanna_play;
     if(wanna_play=='Y'||wanna_play=='y')
     main();
    return 0;
    }
