//Count Inversion using merge sort
//8,4,2,1
//{(8,2) (8,4),(8,1),(4,2),(4,1),(2,1)}
#include<iostream>
using namespace std;
class Array
{
    public:
        int Inversion(int *Arr,int N)
        {
            int Icout=0;
            for(int i=0;i<N;i++)
            {
                for(int j=i;j<N;j++)
                {
                    if(Arr[i] > Arr[j])
                    {
                        Icout++;
                    }
                }
            }
            return Icout;
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
    int ret=obj.Inversion(Arr,N);
    cout<<"Inversion count is :"<<ret;
}