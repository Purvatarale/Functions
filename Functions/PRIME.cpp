#include<iostream>
using namespace std;
int main()
{
	int a,i,j,r1,r2,k,count1,count2;
	cout<<"Enter you number";
	cin>>k;
	for(i=2; i<k; i++)
	{
		count1=0;
		for(j=2; j<i; j++)
		{
			r1=i%j;
			if(r1==0)
			count1=count1+1;
			else
			count1=count1;
		}
		if(count1>0)
		cout<<"";
		else
		{
			a=k-i;
			count2=0;
			for(j=2; j<a; j++)
		{
			r2=a%j;
			if(r2==0)
			count2=count2+1;
			else
			count2=count2;
		}
		    if (count2>0)
		    cout<<"";
		    else
		    cout<<k<<"="<<i<<"+"<<a<<endl;
	
		}
		
	}

	
	
}
