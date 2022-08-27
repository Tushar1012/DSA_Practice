// #include <iostream>
//done
// using namespace std;

// int main()
// {
//     char A[]="hellot";
//    // char B[7];
//     char t;
//     cout<<A<<endl;
  
//     for (int i = 0; A[i] != '\0'; i++) {
//         /* code */
//         i=i-1;
    
    
//     for(int j=0; i>=0; i--, j++){
//         B[j]=A[i];
//          cout<<B<<endl;
//     }
//     B[j]='\0';
//     cout<<B<<"hllo";
//       cout<<B<<endl;
//     return 0;
//     }
// }

//dd
#include<iostream>

using namespace std;

int main()
{
    char A[]="Python";
    char t;
    int i,j;
    for (int  j = 0; A[j] !='\0'; j++)
    {
        /* code */
        j=j-1;
    }
    
    for(i=0; i<j; i++,j--)
    {
        t=A[i];
        A[i]=A[j];
        A[j]=t;
        printf("%s",A);
    }
    cout<<A<<endl;
    printf("%s",A);
    
    return 0;
}

