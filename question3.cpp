/*3 (Function Template) Write a template function to search for a given key
element from an array. Illustrate how you perform search in integer,
character as well as double arrays using the same template function.*/
#include<iostream>
#include<string.h>

using namespace std;

template<class t>
class array
{

    t a[30],se;int size; 
    public:
    void get()
   {
        cout<<"\n Enter the size of array";
        cin>>size;
        cout<<"\n Enter "<<size<<" elements";

        for(int i=0;i<size;i++)
        {
            cin>>a[i];
        }

}
void search()

{

    cout<<"\n Enter the elements to search";
    cin>>se;
    int f=0;
    for(int i=0;i<size;i++)
    if(a[i]==se)
    { 
        f=1;
        cout<<"\n Element found at position"<<i+1;
        break;

    }
    if(f==0)
    cout<<"\n Element not found";

}

};

 

int main()

{

    array<int>objin;
    array<char>objch;
    cout<<"\n searching integers";
    objin.get();
    objin.search();
    cout<<"\n searching characters";    
    objch.get();
    objch.search();    
    return 0;

}