//Revers Array
#include<iostream>
using namespace std;
class Array
{
    public:
        void Reverse(int *Arr,int N)
        {
            for(int i=(N-1);i>=0;i--)
            {
                cout<<Arr[i]<<" ";
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
    obj.Reverse(Arr,N);
}