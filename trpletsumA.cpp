//trplet sum of Array
#include<iostream>
using namespace std;
class Array
{
    public:
        void trpletsum(int *Arr,int N,int sum)
        {
            int newsum=0;
            for(int i=0;i<N;i++)
            {
               for(int j=i+2;j<N;j++)
               {
                    newsum=Arr[i]+Arr[i+1]+Arr[j];
                    if(newsum==sum)
                    {
                        cout<<"["<<Arr[i]<<" "<<Arr[i+1]<<" "<<Arr[j]<<"]";
                    }
               }
            }
        }
};
int main()
{
    int N,sum;
    cout<<"Enter Size of Array \n";
    cin>>N;
    int *Arr = new int[N];
    cout<<"Enter No of element\n";
    for(int i=0;i<N;i++)
    {
        cin>>Arr[i];
    }
    cout<<"Enter Sum\n";
    cin>>sum;
    Array obj;
    obj.trpletsum(Arr,N,sum);
}