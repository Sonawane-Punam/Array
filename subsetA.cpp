//check array is subset of another array
#include<iostream>
using namespace std;
class Array
{
    private:
        int *Arr=NULL;
        int *Brr=NULL;
        int N=0,M=0;
    public:
        Array(int *Crr,int *Drr,int n,int m)
        {
            Arr=Crr;
            Brr=Drr;
            N=n;
            M=m;
        }
        bool subsetA()
        {
            int icnt=0;
            for(int i=0;i<M;i++)
            {
               for(int j=i;j<N;j++)
               {
                    if(Brr[i]==Arr[j])
                    {
                        icnt++;
                        j=N;
                    }
               }
            }
            if(icnt==M)
            {return true;}
            else
            {return false;}
        }
};
int main()
{
    int N,M;
    cout<<"Enter Size of Array \n";
    cin>>N;
    int *Arr = new int[N];
    cout<<"Enter No of element\n";
    for(int i=0;i<N;i++)
    {
        cin>>Arr[i];
    }

    cout<<"Enter Size of Array \n";
    cin>>M;
    int *Brr = new int[M];
    cout<<"Enter No of element\n";
    for(int i=0;i<M;i++)
    {
        cin>>Brr[i];
    }
    Array obj(Arr,Brr,N,M);
    bool bret=obj.subsetA();
    if(bret==true)
    {cout<<"It is subset of array";}
    else
    {cout<<"It is not subset of array";}
}