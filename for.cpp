 //question 1. print numbers 100 to 200 
// #include <iostream>
// using namespace std;
// int main(){
//     for(int i=100; i<=200; i++)
//     cout<<i<<endl;

// }


//question 2. print alphabet
// #include<iostream>
// using namespace std;
// int main(){
//     char name;
//     for(name='a'; name<='z'; name=name+1)
//     cout<<name<<" ";
// }


// question. 3. print reverse numbers
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=n; i>=1; i--)
//     cout<<i<<endl;
// }



//question 4. print numbers in the difference three numbers
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the numbers:"<<endl;
//     cin>>n;
//     for(int i=1; i<=n; i=i+3)
//     cout<<i<<endl;
// }


//question 5. print table
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the numbers:"<<endl;
//     cin>>n;
//     for(int i=1; i<=10; i++)
//     cout<<n<<"*"<<i<<"="<<n*i<<endl;

// }

//  second metod
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the numbers:"<<endl;
//     cin>>n;
//     for(int i=n; i<=10*n; i=i+n)
//     cout<<i<<endl;
// }

//question 6. find the power of the numbers
// #include<iostream>
// using namespace std;
// int main(){
//     int pow,n,num;
//     cout<<" enter the numbers:"<<endl;
//     cin>>n;
//     cout<<"enter the power:"<<endl;
//     cin>>pow;
//     num =n;
//     for(int i=1;i<pow; i=i+1)
//     {
//         num =num *n;
    
//         cout<<num;
//     }
// }



//question 7.sum of natural numbers
// #include<iostream>
// using namespace std ;
// int main(){
//     int num,sum ;
//     cout<<"enter the numbers:"<<endl;
//     cin>>num;
//     sum =0;
//     for(int i=1; i<=num; i++)
//     {
//         sum =sum+i;
//     }
//     cout<<sum<<endl;

// }



//question 8.sum of n natural numbers
// #include<iostream>
// using namespace std;
// int main(){
// int num ,sum;
// cout<<"enter the numbers:"<<endl;
// cin>>num;
// sum=0;
// for(int i=1; i<=num; i++)
// sum =sum + (i*i);
// cout<<sum<<endl;
// }


// question  9. find the factorial numbers
// #include<iostream>
// using namespace std;
// int main(){
//     int num,fact;
//     cout<<"enter the numbers:"<<endl;
//     cin>>num;
//     fact=1;
//     for(int i=1;i<=num; i++)
//     fact=fact*i;
//     cout<<fact<<endl;

// }



// //question 10. check the prime numbers 
// #include<iostream>
// using namespace std;
// int main(){
//     int num ;
//     cout<<"enter  the numbers:"<<endl;
//     cin>>num;
//     if(num<2)
//     {
//     cout<<"not prime and composite"<<endl;
//     return 0;
//     }
//     else
//     {
//         for(int i=2; i<num; i++)
//         {
//             if(num%i==0)
//         {
//             cout<<"composite numbers"<<endl;
//         return 0;
//         }
//        }
//         cout<<"prime numbers"<<endl;
//         return 0;

//     }
//     return 0;
// }


