//cyclic rotate an array by one
#include<iostream>
using namespace std;
class Array
{
    public:
       
        void CyclicA(int *Arr,int N)
        {
            int temp=0;
            for(int i=(N-1);i>0;i--)
            {
                temp=Arr[i];
                Arr[i] = Arr[i-1];
                Arr[i-1] = temp;
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

    cout<<"Enter size of array \n";
    cin>>N;

    int *Arr= new int[N];
    cout<<"Enter the Elements \n";
    for(int i=0;i<N;i++)
    {
        cin>>Arr[i];
    }
    Array obj;
    obj.CyclicA(Arr,N);
}