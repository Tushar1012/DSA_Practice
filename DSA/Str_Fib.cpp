//count string value
// #include<iostream>

// using namespace std;
//  int length (char str[]){
//      if(str[0] == '\0'){
//          return 0;
//      }
//      int smalloutput=length(str+1);
//      return 1+ smalloutput;
//  }

// int main()
// {
//     char str[23];
//     cin>>str;
//     int i= length(str);
//     cout<<i;
// }
#include<iostream>

using namespace std;
int length (char str[]){
     if(str[0] == '\0'){
         return 0;
     }
     int smalloutput=length(str+1);
     return 1+ smalloutput;
 }
 void removeX(char s[]){
     if(s[0] == '\0'){
         return;
     }

     if(s[0]!='x')
     {
         removeX(s+1);
     }
     else{
         int i=1;
         for (; s[i]!='\0'; i++)
         {
            s[i-1]=s[i];
         }
         s[i-1]=s[i];
         removeX(s);
     }
 }

int main()
{
    char str[23];
    cin>>str;
    int l= length(str);
    cout << l<<endl;
    removeX(str);
    cout << str<<endl;
      l= length(str);
    cout << l<<endl;
    //cout<<i;
}