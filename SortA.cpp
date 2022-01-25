//Sort Array without  using sorting algorithm
#include<iostream>
using namespace std;
class Array
{
    public:
        void SortArray(int *Arr,int N)
        {
            int temp=0;
            for(int i=0;i<N;i++)
            {
               for(int j=0;j<N;j++)
               {
                   if(Arr[i] < Arr[j])
                   {
                       temp=Arr[i];
                       Arr[i]=Arr[j];
                       Arr[j]=temp;
                   }
               }
            }
            for(int j=0;j<N;j++)
            {
                cout<<Arr[j]<<" ";
            }
        }
};
int main()
{
    int N;
    cout<<"Enter Size of Array \n";
    cin>>N;
    int *Arr = new int[N];
    cout<<"Enter No of element\n";
    for(int i=0;i<N;i++)
    {
        cin>>Arr[i];
    }
    Array obj;
    obj.SortArray(Arr,N);
}