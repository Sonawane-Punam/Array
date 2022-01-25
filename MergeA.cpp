//Merge 2 Sort Array 
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
        void SortArray()
        {
            int MArr[N+M];
            int k=0;
            for(int i=0,k=0;i<N;i++)
            {
                MArr[k]=Arr[i];
                k++;
            }
            k=N;
            for(int i=0;i<M;i++)
            {
                MArr[k]=Brr[i];
                k++;
            }

            int temp=0;
            for(int i=0;i<(N+M);i++)
            {
               for(int j=0;j<(N+M);j++)
               {
                   if(MArr[i] < MArr[j])
                   {
                       temp=MArr[i];
                       MArr[i]=MArr[j];
                       MArr[j]=temp;
                   }
               }
            }
            for(int j=0;j<(N+M);j++)
            {
                cout<<MArr[j]<<" ";
            }
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
    for(int i=0;i<N;i++)
    {
        cin>>Brr[i];
    }
    Array obj(Arr,Brr,N,M);
    obj.SortArray();
}