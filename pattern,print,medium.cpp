//    #include<iostream>
//   using namespace std;
// int main(){
//     int n;
//     cout<<"enter the numbers:"<<endl;
//     cin>>n;
//     // question 1.right angle print
//     for(int i=1; i<=n; i++)
//     {
//         for(int j=1; j<=i; j++)
//         {
//         cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
   
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the numbers:"<<endl;
//     cin>>n;
//     //question 2.  digit like(12,123,1234,12345)
//     for(int i=1; i<=n; i++)
//     {
//         for(int j=1; j<=i+1; j++)
//     {
//         cout<<j<<" ";
//     }
//     cout<<endl;
// }
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the numbers:"<<endl;
//     cin>>n;
//     //question 3. print like(1,22,333,4444,55555)
//     for(int i=1; i<=n; i++)
//     {
//         for(int j=1; j<=i; j++)
//         {
//             cout<<i<<" ";
//         }
//         cout<<endl;
//     }
// }


#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the numbers:"<<endl;
    cin>>n;
    //question 4. print like(1,21,321,4321,54321)
    for(int i=1; i<=n; i++)
    {
        for(int j=i; j>=1; j--)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the numbers:"<<endl;
//     cin>>n;
//     // question 5.print(like a,bb,ccc,dddd)
//     for(int i=1; i<=n; i++)
//     {
//         char name = 'a'+i-1;
//         for(char j=1; j<=i; j++)
//         {
//             cout<<name<<" ";
//         }
//         cout<<endl;
//     }
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the numbers:"<<endl;
//     cin>>n;
//     // question 6. iulta right angle print
//     for(int i=1; i<=n;i++)
//     {
//         for(int j=1;j<=n-(i-1); j++)
//         {
//         cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
// }


// #include<iostream>
// using namespace std;
// int main(){
//    int n;
//    cout<<"enter the numbers:"<<endl;
//    cin>>n;
//      //question 7. print like (12345,1234,123,12,1)
//    for(int i=1; i<=n; i++)
//    {
//       for(int j=1; j<=n-(i-1); j++)
//       {
//          cout<<j<<" ";
//       }
//       cout<<endl;
//    }
// }


// #include<iostream>
// using namespace std;
// int main(){
//    int n;
//    cout<<"enter the numbers:"<<endl;
//    cin>>n;
//    // question 8.print(like 5,54,543,54321)
//    for(int i=1; i<=n; i++)
//    {
//       for(int j=n; j>=n-i+1; j--)
//       {
//          cout<<j<<" ";
//       }
//       cout<<endl;
//    }
// }