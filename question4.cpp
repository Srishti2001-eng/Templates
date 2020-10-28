/*4 (Non-type as function parameters) Write a program to demonstrate the
concept behind function templates with non-type as function parameters by
taking sorting an array of numbers as an examples.*/

#include<iostream>
using namespace std;

template< class T, int n>
void sorting(T a[n]){
    for(int i=0; i<n-1; i++){
        for (int j=n-1; i<j; j--){
            if (a[j]<a[j-1]){
                    swap(a[j],a[j-1]);
            }
        }
    }  
}

template< class T>
void swap(T x, T y)
{
    T temp=x;
    x=y;
    y=temp;
}

template< class T,int n>
void display(T x[])
{
    for(int i=0;i<n;i++){
        cout<<x[i]<<",";
    }
}

int main(){
    int a[10]={80,45,2,78,96,46,32,10,52,30};
    sorting<int,10>(a);
    display<int,10>(a);
    return 0;
}
