#include<iostream>
using namespace std;

int main()
{
	int red,white,bag,flag=0;
	cout<<"enter white balls\n";
	cin>>white;
	cout<<"Enter red balls\n";
	cin>>red;
	cout<<"Enter no. of bags\n";
	cin>>bag;

	if((red+white)<bag)
	{
		cout<<"Answer: 0\n";
	}
	
	else
	{
		if(red>white && bag==red)
		{
			for(int i = 1;i<=red;i++)
			{
				if(red % i == 0)
					flag++;
			}
			cout<<"Answer:"<<flag<<"\n";
		}
		else if(white>red && bag==white)
		{
			for(int i = 1;i<=white;i++)
			{
				if(white % i == 0)
					flag++;
			}
			cout<<"Answer:"<<flag<<"\n";
		}
		else if((red>0 && white>0) && bag==2)
		{
			cout<<"Answer: 1\n";
		}
		
	}
}
