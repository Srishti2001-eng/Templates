/*8. (Class Template) Design a generic stack class which can be used to create
integer, character or floating point stack objects. Provide all necessary data
members and member functions (push, pop, display &amp; default constructor)
to operate on the stack.*/

#include<iostream>
using namespace std;

template<class T,int size>
class stack{
    T *a;
    int top;
    public:
        stack(){
            top=-1;
            a=new T[size];
        }
        void push(T data){
            if(top>=size-1)
                cout<<"Stack Overflow"<<endl;
             else {
                top++;
                a[top]=data;
            }
        }
        T pop(){
            if(top<=-1){
                cout<<"Stack Underflow"<<endl;
            }
            else{
                T x=a[top];
                top--;
                return x;
            }   
        }
        void display(){
            if(top>=0) {
                cout<<"Stack elements are:";
                for(int i=top; i>=0; i--)
                    cout<<a[i]<<" ";
                cout<<endl;
            } 
            else
                cout<<"Stack is empty";
        }
};

int main()
{
    stack<int,5> s;
    stack<char,5>s1;
    stack<float,5>s2;
    for(int i=0;i<5;i++){
        s.push(i);
    }
        s.display();
    for(int i='A';i<'F';i++){
        s1.push((char)i);
    }
        s1.display();
    s2.push(10.1);
    s2.push(20.1);
    s2.push(30.1);
    s2.push(40.1);
    s2.push(50.1);
    s2.display();

}