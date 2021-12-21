#include <bits/stdc++.h> 

using namespace std;

void accept(int *x,int *y)
{
    scanf("%d%d",x,y);
}

void print(int x,int y)
{
    if(x>=1 && x<=10000 && y>=1 && y<=10000)
    {
        int c;
        c=x%y;
	   cout<<c;
    
    }
}

int main()
{
	int t;
	cin>>t;
	int x,y;
	if(t>=1 && t<=1000)
	{
	    for(int i=0;i<t;i++)
	    {
	        accept(&x,&y);
	        print(x,y);
	        cout<<"\n";
	        }
	        
	    }
	return 0;
}