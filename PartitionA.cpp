//Three way partition of Array
#include<iostream>
using namespace std;
class Array
{
    public:
        void PartitionA(int *Arr,int N,int lowval,int highval)
        {
            int i=0,start=0,end=N-1;
            for(i=0;i<=end;)
            {
                if(Arr[i] < lowval)
                {
                    if(i==start)
                    {start++;
                    i++;}
                    else
                    {swap(Arr[i++],Arr[start++]);}
                }
                else if(Arr[i]>highval)
                {swap(Arr[i],Arr[end--]);}
                else
               { i++;}
            }
           
        }
            
};
int main()
{
    int N,lowval,highval;
    cout<<"Enter Size of First Array \n";
    cin>>N;

    int *Arr = new int[N];

    cout<<"Enter No of element \n";
    for(int i=0;i<N;i++)
    {
        cin>>Arr[i];
    }
    cout<<"Enter lower value \n";
    cin>>lowval;
    cout<<"Enter high value \n";
    cin>>highval;
    Array obj;
    obj.PartitionA(Arr,N,lowval,highval);
    for(int i=0;i<N;i++)
    {
        cout<<Arr[i]<<" ";
    }
}