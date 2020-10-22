#include<iostream>
#define ARR_MAX 5

using namespace std;
template <class T>

T find_min(T ARR[])
{
    int i=0;
    T min=ARR[0];
    for(int i=0;i<ARR_MAX;i++)
    if(ARR[i]<min)
    min=ARR[i];
    return min;
}

int main()
{
    int I_min;
    float F_min;
    char  C_min;

    int I[5]={20,3,46,12,78};
    float F[5]={2.2,5.6,7.8,1.2,9.0};
    char C[5]={'a','A','%','+','K'};

    I_min=find_min(I);
    F_min=find_min(F);
    C_min=find_min(C);

    cout<<"Minimum value in interger array= "<<I_min<<endl;
    cout<<"Minimum value in float array= "<<F_min<<endl;
    cout<<"Minimum value in char array= "<<C_min<<endl;

    return 0;

}




