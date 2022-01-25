//Find maximum sum of contiguous subarray(kadane's Algorithm)
//complexity O(n^2)
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
            for(int i=0;i<N;i++)
            {
                int sum=0;
                for(int j=i;j<N;j++)
                {
                    sum=sum + Arr[j];
                    if(sum > maxsum)
                    {
                        maxsum=sum;
                    }
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