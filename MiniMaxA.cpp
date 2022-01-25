//Find minimum and maximum element from Array
#include<iostream>
using namespace std;
class Array
{
    public:
        Array()
        {
            int *Arr=NULL;
            int N=0;
        }
        void MiniMax(int *Arr,int N)
        {
            int Max=Arr[0];
            int Min=Arr[0];
            for(int i=0;i<N;i++)
            {
               if(Arr[i] > Max)
               {
                   Max=Arr[i];
               }
               else if(Arr[i] < Min)
               {
                    Min=Arr[i];
               }
            }
            cout<<"Maximum Element is :"<<Max<<"\n";
            cout<<"Minium Element is :"<<Min<<"\n";
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
    obj.MiniMax(Arr,N);
}