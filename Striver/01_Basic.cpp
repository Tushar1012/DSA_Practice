//print from 1 to n
#include<iostream>

using namespace std;
void print(int i,int n){
    if(i>n)
    return ;
   // cout<<'HLo';
    print(i+1,n);
   cout<<i<<" ";
}

int main()
{
    int i;
    int n=5;
    print(1,n);
    return 0;
}