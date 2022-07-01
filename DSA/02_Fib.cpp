// // fibonachi program
// #include<iostream>

// using namespace std;
// int fib(int n){
//     int t0=0,t1=1,s=0;
//     if(n<=1) return n;
//     for (int  i = 2; i <= n; i++)
//     {
//         s = t0+t1;
//         t0=t1;
//         t1 =s;
//     }
//     return s;
// }

// int main()
// {   
    
//     cout << fib(8);
    
//     return 0;
// }.

// #include<iostream>

// using namespace std;
// int rfib(int n)
//     {
//         if(n <=1) return n;
//         return rfib(n-2)+ rfib(n-1);
//     }

// int main()
// {
//     cout << rfib(7);
//     return 0;
// }



#include<iostream>

using namespace std;

int main()
{
    double j=11;
    
    double *p= &j;
    cout <<sizeof(p)<<endl;
    
   
    return 0;
}
