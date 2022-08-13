#include<iostream>

using namespace std;

int main()
{
    char A[]="welcome";
    int i;
    for(int i=0; A[i] != '\0' ; i++){
        A[i] =A[i];

    }
    cout<<A<<"ok";
    return 0;
}