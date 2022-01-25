//Sort Array without  using sorting algorithm
#include<iostream>
using namespace std;
class Array
{
    public:
        void Intersection(int *Arr,int *Brr,int N,int M)
        {
            int *Crr = new int(N);
            int k=0;
            for(int i=0;i<N;i++)
            {
               for(int j=0;j<M;j++)
               {
                   if(Arr[i] == Brr[j])
                   {
                        Crr[k]=Arr[i];
                        k++;
                   }
               }
            }
            cout<<"Intersection of Array is : ";
            for(int i=0;i<k;i++)
            {
                cout<<Crr[i]<<" ";
            }
            printf("\n");
        }
        void UnionA(int *Arr,int *Brr,int N,int M)
        {
            int crr[N+M];
            int icnt=0;
            int k = 0;
            for(int i=0,k = 0; i<N; i++)
            {
                crr[k]=Arr[i];
                k++;
            }

            k = N;
            for(int i = 0; i < M; i++)
            {
                int flag = 0;
                for(int j = 0; j < N; j++)
                {
                    if(Brr[i] == Arr[j])
                    {
                        flag = 1;
                        //j =  N;
                    }
                }
                if(flag == 0)
                {
                    crr[k] = Brr[i];
                    k++;
                }
            }
            cout<<"Union of Array is : ";
            for(int z=0;z<k;z++)
            {
                cout<<crr[z]<<" ";
            }
            printf("\n");
        }
};
int main()
{
    int N,M;
    cout<<"Enter Size of First Array \n";
    cin>>N;

    int *Arr = new int[N];

    cout<<"Enter elements in first array\n";
    for(int i=0;i<N;i++)
    {
        cin>>Arr[i];
    }

    cout<<"Enter Size of second Array : \n";
    cin>>M;
    int *Brr = new int[M];

    cout<<"Enter elements in second array\n";
    for(int i=0;i<M;i++)
    {
        cin>>Brr[i];
    }

    Array obj;
    obj.Intersection(Arr,Brr,N,M);
    obj.UnionA(Arr,Brr,N,M);
}