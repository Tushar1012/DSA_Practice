// #include <iostream>
// using namespace std;
// int main()
// {
//     int i, n, j;
//     cout << "ENter value  of n:   \n ";
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= 2 * n - 1; j++)
//         {
//             if (j >= n - (i - 1) && j <= n + (i - 1))
//             {
//                 cout << "*";
//             }
//             else
//             {
//                 cout << " ";
//             }
//         }
//         cout << "\n"
//              << endl;
//     }
//     return 0;
// }


#include<iostream>

using namespace std;

int main()
{
    int n,result=0,rem,q;
    cout <<"enter n  ";
    cin>>n;
    q=n;
    while(q!=0){
        rem =   q % 10;
        result = result * 10 + rem;
        q=q /10;
    }
    if(result == n){

    cout<<"yes";
    }
    else{

    cout<<"no";
    }
    return 0;
}
