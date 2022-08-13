// //sum of array
// #include<iostream>

// using namespace std;
// int Getsum(int *arr,int size){
//     if(size==0)
//     return 0;
//     if(size==1)
//     return arr[0];
//     int num=arr[0]+Getsum(arr+1,size-1);
//     return num;
// }

// int main()
// {
//     int arr[5]={1,1,4,1,3};
//     int size=5;
//     //cout <<"hello";
//     int sum =Getsum(arr,size);
//     cout<< sum<< "   is here";
//     return 0;
// }

//linear search on recursion



// #include<iostream>

// using namespace std;

// bool search(int *arr,int size , int key){
//     // base case
//     if(size==0)
//     return false;

//     if(arr[0]==key){
//     return true;
//     }
//     else{
//         bool sum=search(arr+1,size-1,key);
//          return sum;
//     }
   

// }


// int main()
// {
//     int arr[5]={1,21,2,1,3};
//     int size=5;
//     int key=21;
//     //cout <<"hello";
//     bool sum =search(arr,size,key);
//     if(sum){
//     cout<<"preaset je";
        
//     }
//     else{
//     cout<< "not found ";

//     }
//   //  cout<< sum<< "   is here";
//     return 0;
// }


// binary search on array

#include<iostream>

using namespace std;
bool ReverseST(string str, int i,int j){
    if(i>j)
        return true;

    if(str[i] != str[j])
        return false;
    else{
        return ReverseST(str,i+1, j-1);
    }
}
int main()
{
    string str="abbaabba";
    bool isPalinro = ReverseST(str,0,str.length()-1);
    if (isPalinro){
        cout<<"op success";
    }
    else{
    cout<<"op fail";
    }
  
}


