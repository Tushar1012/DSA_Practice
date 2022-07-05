#include<iostream>

using namespace std;
int fact(int n){
    cout <<n<<endl;
    if(n<=0)
    return 1;
    int prob = fact(n-1);
    return n*prob;
}
int main()
{
    int n;
    cout<<"enter n : ";
    cin>>n;
    int ans =fact(n);
    cout<<ans<<"   this is ans";
}