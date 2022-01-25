//Rearrange the array alternatively positive and negative
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
        }
        void RearrangeA(int *Arr,int N)
        {
            SortArray(Arr,N);
            int Crr[N];
            int small=0,large=N-1;
            for(int i=0,k=0;i<N;i++)
            {
                if(i%2==0)
                {
                    Crr[i]=Arr[small];
                    small++;
                }
                if(i%2==1)
                {
                    Crr[i]=Arr[large];
                    large--;
                }
               
            }
            for(int j=0;j<N;j++)
            {
                cout<<Crr[j]<<" ";
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
    obj.RearrangeA(Arr,N);
}