/*6.(Class Template) Write a class template to represent a generic vector.
Include member functions to perform the following tasks:
 To create the vector.
 To modify the value of a given element.
 To multiply the vector by a scalar value.
 To display the vector in the form (10, 20, 30,…..)*/
#include<iostream>
#include<iomanip>
using namespace std;
template<class T>
class vector
{
    float *p;
    int size;
    public:
    void create_vector(T a);
    void set_elements(int i,T value);
    void modify(void);
    void muluply(T b);
    void display(void);

};

template<class T>
void vector<T>::create_vector(T a)
{
    size=a;
    p=new float[size];
}

template<class T>
void vector<T>::set_elements(int i,T value)
{
    p[i]=value;
}

template<class T>
void vector<T>::muluply(T b)
{
    for(int i=0;i<size;i++)
    p[i]=b*p[i];
}

template<class T>
void vector<T>::display(void)
{
    cout<<"p["<<size<<"](";
    for(int i=0;i<size;i++)
    {
        if(i==size-1)
        cout<<p[i];
        else
        
            cout<<p[i]<<",";
        
         
    }
    cout<<")"<<endl;
}

template<class T>
void vector<T>::modify(void)
{
    int i;
    cout<<"to edit to a given elements enter position of elements:";
    cin>>i;
    i--;
    cout<<"Now enter new value if"<<i+1<<"th elements:";
    T v;
    cin>>v;
    p[i]=v;
    cout<<"Now new content:"<<endl;
    display();
    cout<<"to delete an elements enter position of the elements:";
    cin>>i;
    i--;
    for(int j=0;j<size;j++)
    {
        p[j]=p[j+1];
    }
    size--;
    cout<<"New contents:"<<endl;
    display();
}

int main()
{
    vector<float>v;
    int s;
    cout<<"enter size of vector:";
    cin>>s;
    v.create_vector(s);
    cout<<"enter"<<s<<" the elemnts one by one:"<<endl;
    for(int i=0;i<s;i++)
    {
        float x;
        cin>>x;
        v.set_elements(i,x);
    }
    cout<<"New contents:"<<endl;
    v.display();
    cout<<"multiply this vector by a scalar quantity enter this quantity :";
    float m;
    cin>>m;
    v.muluply(m);
    cout<<"New contents:"<<endl;
    v.display();
    v.modify();
    return 0;
}




