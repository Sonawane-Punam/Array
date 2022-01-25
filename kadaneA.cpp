//kadane's Algorithm
//complexity O(n)
#include<iostream>
using namespace std;
class Array
{
    private:
        int *Arr=NULL;
        int N=0;
    public:
        Array(int *Brr,int n)
        {
            Arr=Brr;
            N=n;
        }
        int subarray()
        {
            int maxsum=0;
            int currentsum=0;
            for(int i=0;i<N;i++)
            {
                currentsum=currentsum + Arr[i];
                if(currentsum > maxsum)
                {
                    maxsum=currentsum;
                }
                if(currentsum < 0)
                {
                    currentsum=0;
                }
            
            }
            return maxsum;
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
    Array obj(Arr,N);
    int ret=obj.subarray();
    cout<<"Maximum sum is :"<<ret<<"\n";
}