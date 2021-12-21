#include <iostream>
using namespace std;

void accept(int *x)
{
    scanf("%d",x);
}

int main()
 {
	// your code goes here
	int t;
	int x,y;
	
	cin>>t;
	if(t>=1 && t<=1000)
	{
	    for(int i=0;i<t;i++)
	    {
	        x=0;
	        accept(&x);
	        y=0;
	        y=x;
	        int count=0;
	        while(x!=0)
	        {
	            x=x/10;
	            count++;
	        }
	        int rem=0;
	   		int sum=0;
	        for(int j=0;j<count;j++)
	        {
                rem=y%10;
                y=y/10;
                sum+=rem;
            }
            cout<<sum;
            cout<<"\n";
	        
	    }    
	}
	return 0;
}
