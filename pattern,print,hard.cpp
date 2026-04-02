// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the numbers:"<<endl;
//     cin>>n;
//     // question 1. print left angle triangle 
//     for(int i=1; i<=n; i++)
//     {
//         // space print
//      for(int j=1; j<=n-i; j++)
//      {
//         cout<<"  ";
//      }
//      // star print
//      for(int j=1; j<=i; j++)
//      {
//         cout<<"* ";
//      }
//      cout<<endl;
//     }
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the numbers:"<<endl;
//     cin>>n;
//     //question 2. print  left angle triangle in numbers
//     for(int i=1; i<=n; i++)
//     {
//         // print space
//         for(int j=1; j<=n-i; j++)
//         {
//             cout<<"  ";
//         }
//         //print number
//         for(int j=1; j<=i; j++)
//         {
//             cout<<i<<" ";
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
//   // question 3. print like(1,12,123,1234)
//     for(int i=1; i<=n; i++)
//     {
//        // print space
//         for(int j=1;j<=n-i; j++)
//         {
//             cout<<"  ";
//         }
//        // print numbers
//         for(int j=1; j<=i; j++)
//         {
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
// }


// #include <iostream>
// using namespace std;
// int main(){
//  int n;
//  cout<<"enter the numbers:"<<endl;
//  cin>>n;
//  // question 4. print like (a,ab,abc,abcd,abcde) right se
//  for(int i=1;i<=n; i++)
//  {
//         // space print
//    for(int j=1; j<=n-i; j++)
//    {
//         cout<<"  ";
//    }
//    // print character
//    for(char name='A'; name<='A'+i-1; name+=1)
//    {
//         cout<<name<<" ";
//    }
//    cout<<endl;
//  }

// }



// #include<iostream>
// using namespace std;
// int main(){
//      int n;
//      cout<<"enter the numbers:"<<endl;
//      cin>>n;
//      // question 5.print piramed
//      for(int i=1; i<=n;i++)
//      {
//        for(int j=1; j<=n-i; j++ )
//        //print space 
//        {
//           cout<<"  ";
//        }
//        for(int j=1; j<=2*i-1; j++)
//        //print star
//        {
//           cout<<"*"<<" ";
//        }
//        cout<<endl;
//      }
// }

// #include<iostream>
// using namespace std;
// int main(){
//      int n;
//      cout<<"enter the numbers:"<<endl;
//      cin>>n;
//      // question 6. print peramid in numbers
//      for(int i=1; i<=n; i++)
//      {
//           // print space
//           for(int j=1; j<=n-i; j++)
//           {
//                cout<<"  ";
//           }
//           //print numbers increasing 
//           for(int j=1; j<=i; j++)
//           {
//                cout<<j<<" ";
//           }
//           //print numbers decreasing
//           for(int j=i-1; j>=1; j--)
//             {
//                cout<<j<<" ";
//             }
          
//           cout<<endl;
//      }
//}



// #include<iostream>
// using namespace std;
// int main(){
//      int n;
//      cout<<"enter the numbers:"<<endl;
//      cin>>n;
//        // question 7. print ulta piramid like(*******,*****,***,*)
//      for(int i=n; i>=1; i--)
//      {
//        //print space
//       for(int j=1; j<=n-i; j++)
//       {
//       cout<<"  ";
//       }
//       // print star
//       for(int j=1; j<=2*i-1; j++)
//       {
//           cout<<"*"<<" ";
//       }
//       cout<<endl;
//      }
// } 



// #include<iostream>
// using namespace std;
// int main(){
//      int n;
//      cout<<"enter the numbers:"<<endl;
//      cin>>n;
//      //  question 8.print rectagle ke andhar diamond
//     for(int i=n; i>=1; i--)
//     {
//      for(int j=1; j<=i; j++)
//      // print star
//      {
//           cout<<"*"<<" ";
//      }
//      //print space
//      for(int j=1; j<=2*n-2*i; j++)
//      {
//           cout<<"  ";
//      }
//      //print star
//      for(int j=1; j<=i; j++)
//      {
//           cout<<"*"<<" ";
//      }
//      cout<<endl;
//     }
//     for(int i=1; i<=n; i++)
//     {
//      for(int j=1; j<=i; j++)
//      // print star
//      {
//           cout<<"*"<<" ";
//      }
//      //print space
//      for(int j=1; j<=2*n-2*i; j++)
//      {
//           cout<<"  ";
//      }
//      //print star
//      for(int j=1; j<=i; j++)
//      {
//           cout<<"*"<<" ";
//      }
//      cout<<endl;
//     }
// }


// #include<iostream>
// using namespace std;
// int main(){
//      int n;
//      cout<<"enter the numbers:"<<endl;
//      cin>>n;
//   //question 9. print butter fly
//      for(int i=1; i<=n; i++)
//      {
//           //print star
//           for(int j=1; j<=i; j++)
//           {
//                cout<<"*"<<" ";
//           }
//           //print space
//            for(int j=1; j<=2*n-2*i; j++)
//            {
//                cout<<"  ";
//            }
//            //print star
//            for(int j=1;j<=i; j++ )
//            {
//                cout<<"*"<<" ";
//            }
//           cout<<endl;
//      }


//       for(int i=n-1; i>=1; i--)
//      {
//           //print star
//           for(int j=1; j<=i; j++)
//           {
//                cout<<"*"<<" ";
//           }
//           //print space
//            for(int j=1; j<=2*n-2*i; j++)
//            {
//                cout<<"  ";
//            }
//            //print star
//            for(int j=1;j<=i; j++ )
//            {
//                cout<<"*"<<" ";
//            }
//           cout<<endl;
//      }
// }


#include<iostream>
using namespace std;
int main(){
     int n;
     cout<<"enter the nimbers:"<<endl;
     cin>>n;
     // question 10. print diamond
     for(int i=1; i<=n; i++)
     {
          // print space 
          for(int j=1; j<=n-i; j++)
          {
               cout<<" ";
          }
          //print star
          for(int j=1; j<=i; j++)
          {
               cout<<"*"<<" ";
          }
          cout<<endl;
     }

     
     for(int i=n; i>=1; i--)
     {
          // print space
          for(int j=1; j<=n-i; j++)
          {
               cout<<" ";
          }
          //print star
          for(int j=1; j<=i; j++)
          {
               cout<<"*"<<" ";
          }
          cout<<endl;
     }
}