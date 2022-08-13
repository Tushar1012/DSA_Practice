// #include<iostream>
// using namespace std;
// int fib(int n){
// int t0=0,t1=1,s=0;
//     for(int i=2; i<n; i++){
//         s=t1+t0;
//         t0=t1;
//         t1=s;
//     }
//     return s;
// }

// int rfib(int n){
//     if(n<=1)
//     return n;
//     int result =rfib(n-2)+rfib(n-1);
//     return result;

// }
// int main()
// {
//     cout<<rfib(9);
//     return 0;
// }

#include <iostream>
using namespace std;

void reverse(string & str){
    int n=str.length()-1;
    int i=0;
    while(i<=n){
        swap(str[i],str[n]);
        n--;
        i++;
    }
}

int main() {
    string str=" doog ij rahsut ";
    reverse(str);

    cout<<str;
}