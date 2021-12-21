#include <iostream>
using namespace std;
void accept(int *x)
{
    scanf("%d",x);
}

int length(int x)
{
    int count=0;
    while(x!=0)
    {
        x=x/10;
        count++;
    }
    return (count);
}

int main() 
{
	// your code goes here
	int t,x,count;
	cin>>t;
	if(t>=1 && t<=100000)
	{
	    for(int i=0;i<t;i++)
	    {
	        accept(&x);
	        count=length(x);
	        int rem=0;
	        int a=0;
	        for(int i=0;i<count;i++)
	        {
	            rem=x%10;
	            x=x/10;
	            if(rem==4)
	            {
	                a++;
	            }
	            
	        }
	        cout<<a;
	        cout<<"\n";
	    }
	}
	return 0;
}
