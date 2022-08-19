// #include<iostream>
// using namespace std;
// int  j(int i,int n){
//     //Base case
//     if(i>n)
//     return ;
//     cout<<"Tushar";
//     return j(i+1,n);

// }

// int main()
// {
//     int n;
//     cout<<"entrer n";
//    // cin>>n;
//     cout<<j(1,5);
//     //cout <<hlo;
//     return 0;
// }

#include<iostream>

using namespace std;
void helo(int i,int n){
    if(i>n)
    return ;
    cout<<'HLo';
    int nice=helo(i+1,n);
    return nice;
}

int main()
{
    int i;
    int n=5;
    cout<<helo(i,n);
    return 0;
}