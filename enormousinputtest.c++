#include<iostream>
using namespace std;

//accept function
void accept(int *x)
{
    scanf("%d",x);
}
int main()
{
    int n,k,x,j;
    cin>>n>>k;
    int count=0;
    if(n<=10000000 && k<=10000000)
    {
        for(int i=0;i<n;i++)
        {
            x=0;
            accept(&x);
            if(x%k==0)
            {
                count++;
            }
        }
        cout<<count;
    }
    
}