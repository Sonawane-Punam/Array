//Find largest consicative consequence(......Array must be sorted......)
//1 2 3 5 7        o/p= 3 (1 2 3)
#include<iostream>
#include<stdbool.h>
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
        int consequence()
        {
            int ans=0,icnt=0;
            for(int i=0;i<N;i++)
            {
                if(Arr[i]==(Arr[i-1]+1))
                {icnt++;}
                else
                {icnt=0;}
                if(icnt > ans)
                {ans=icnt;}
            }
            return ans+1;
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
    int ret=obj.consequence();
    cout<<"largest consequence is :"<<ret;
}