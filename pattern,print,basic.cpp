// #include<iostream>
// using namespace std;
// int main(){
//     //  question 1.star printing
//     int n;
//     cout<<"enter the numbers:"<<endl;
//     cin>>n;
//     for(int i=1; i<=n; i++)
//       {
//         for(int j=1; j<=n; j++)
//         {
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//       }
// }



// #include<iostream>
// using namespace std;
// int main(){
//   int n;
//   cout<<"enter the numbers:"<<endl;
//   cin>>n;
// //question 2. numbers printing like (1111,2222)
// for(int i=1; i<=n; i++)
// {
//   for(int j=1; j<=n; j++)
//   {
//   cout<<i;
//   }
//      cout<<endl;
// }
// }



// #include<iostream>
// using namespace std;
// int main(){
//   int n;
//   cout<<"enter the numbers:"<<endl;
//   cin>>n;
//   // question 3. print numbers like(12345,12345)
//   for(int i=1; i<=n; i++)
//   {
//     for(int j=1; j<=n; j++)
//     {
//       cout<<j ;
//     }
//     cout<<endl;
//   }
// }



// #include<iostream>
// using namespace std;
// int main(){
//   int n;
//   cout<<"enter the numbers:"<<endl;
//   cin>>n;
//   //question 4.print numbers reverse like(54321,54321)
//   for(int i=n; i>=1; i--)
//   {
//     for(int j=n; j>=1; j--)
//     {
//       cout<<j<<" ";
//     }
//     cout<<endl;
//   }
// }



// #include<iostream>
// using namespace std;
// int main(){
//   int n;
//   cout<<"enter the numbers:"<<endl;
//   cin>>n;
//  // question 5 .print numbers square of numbers like(1=1,2=4,3=9)
//   for(int i=1; i<=n;i++)
//   {
//     for(int j=1; j<=n; j++)
//     {
//     cout<<j*j<<" ";
//     }
//     cout<<endl;
//   }
// }


// #include<iostream>
// using namespace std;
// int main(){
//   int n;
//   cout<<"enter the numbers:"<<endl;
//   cin>>n;
//   // question 6. print a b c d like(aaaa,bbbbb,cccc)
//   for(int i=1; i<=n; i++)
//   {
//     char name='a'+i-1;
//     for(int j=1; j<=n; j++)
//     {
//       cout<<name<<" ";
//     }
//     cout<<endl;
//   }
// }


#include<iostream>
using namespace std;
int main(){
  // question 7 print abcd like (abcd ,abcd,abcd)
  for(int i=1; i<=5; i++)
  {
    for(char j='a'; j<='e'; j++)
    {
    cout<<j<<" ";
  }
  cout<<endl;
  }
}
