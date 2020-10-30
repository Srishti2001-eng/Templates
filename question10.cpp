/*10.(Class Template) Program to create a class called QUEUE with the
member functions to add and to delete an element from the queue. Using
these functions, implement a queue of integer and double. Demonstrate the
operations by displaying the contents of the queue after every operation.*/

#include<iostream>
using namespace std;

template <class T>
class queue{
    T queue[100]; 
    int n = 100;
    int front = - 1;
    int rear = - 1;
    public:
        void Insert() {
            T val;
            if (rear == n - 1)
                cout<<"Queue Overflow"<<endl;
            else {
                if (front == - 1)
                front = 0;
                cin>>val;
                rear++;
                queue[rear] = val;
            }
        }
        void Delete() {
            if (front == - 1 || front > rear) {
                cout<<"Queue Underflow ";
                return ;
            }
            else{
                cout<<"Element deleted from queue is : "<< queue[front] <<endl;
                front++;;
            }
        }
        void display() {
            if (front == - 1)
                cout<<"Queue is empty"<<endl;
            else {
                cout<<"Queue elements are : ";
                for (int i = front; i <= rear; i++)
                    cout<<queue[i]<<" ";
                    cout<<endl;
                }
            }
};

int main(){
    queue<int> s;
    queue<char>s1;
    queue<float>s2;
    for(int i=0;i<5;i++){
        cout<<"Insert the integer element in queue : "<<endl;
        s.Insert();
    }
    s.display();
    for(int i=0; i<5 ;i++){
        cout<<"Insert the char element in queue : "<<endl;
        s1.Insert();
    }
    s1.display();
    for(int i=0; i<5 ;i++){
        cout<<"Insert the float element in queue : "<<endl;
        s2.Insert();
    }
    s2.display();
}
