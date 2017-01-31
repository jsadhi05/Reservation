#include<iostream>
#include<conio.h>
#include<string.h>

class C1{
public:
	char name[50][30],status[50],name1[30];
	int pnr[50][6];
	void book(){
		int p[6];
		
		
		for(int i=0;i<6;i++)
		{p[i]=(rand()%6);}
		
		int a[20],no,j=0,l;
		std::cout<<"Enter no of tickets";
		std::cin>>no;
		std::cout<<"Enter the seat numbers";
				for(int i=0;i<no;i++)
		{
			std::cin>>a[i];
		}
		j=0;
				for(int i=0;i<50;i++)
		{
			if(a[j]==i)
			{
				std::cout<<"Enter the name";
				gets(name1);
				l=strlen(name1);
				for(int k=0;k<l;k++)
				{
					name[i][k]=name1[k];
				}
				j++;
			}
		}
		j=0;
		
		for(int i=0;i<50;i++)
		{
			if(a[j]==i)
			{status[i]='B';
			j++;
			}
		}


		j=0;
		for(int i=0;i<50;i++)
		{
			if(a[j]==i)
			{
				for(int t=0;t<6;t++)
				{
					pnr[i][t]=p[t];
				}
				j++;
			}
		}
	
	std::cout<<"Sucessfull   Your PNR:";
	for(int i=0;i<6;i++)
		std::cout<<p[i];
	std::cout<<"\n";
	
	
	}










	void cancel()
	{
		int p[6];
		std::cout<<"Enter ur PNR";
		for(int i=0;i<6;i++)
			{std::cin>>p[i];}
		int m[10],f,t=0;

		for(int i=0;i<50;i++)
		{
			f=0;
			for(int j=0;j<6;j++)
				{if(pnr[i][j]==p[j])
					{f++;}
				}
			if(f==6)
			{m[t]=i;
			 t++;
			}
		}
		std::cout<<"Out of";
		do
		{
			std::cout<<m[t-1]<<" ";
			t--;
		}
		while(t!=0);
		std::cout<<"How many and what all seats do u want to cancel";
		int n,temp;
		std::cin>>n;
		for(int i=0;i<n;i++)
		{
			std::cin>>m[i];
		}
		for(int i=0;i<n;i++)
		{
			temp=m[i];
			pnr[temp][6]= ('0','0','0','0','0','0');
			name[temp][30] =('0');
			status[temp]='A';
		}
	}


void view(){
	for(int i=0;i<50;i++)
	{
		std::cout<<"Seat No: "<<i<<"  Status "<<status[i]<<"\n";
	}
	std::cout<<"A:Avilable B:Booked \n";
}

void aview(){
	std::cout<<"Password:";
	char a[4];
	gets(a);
	if(a=="pass")
	{
	for(int i=0;i<50;i++)
	{
		std::cout<<"Seat No: "<<i<<"  Status  "<<status[i]<<"Name:";puts(name[i]);std::cout<<"\n";
	}
	std::cout<<"A:Avilable B:Booked \n";
}
}


C1(){
	for(int i=0;i<50;i++)
	{status[i]='A';
	name[i][1]=('\0');
	}
	


}


};

class C2{
public:
	char name[50][30],status[50],name1[30];
	int pnr[50][6];
	void book(){
		int p[6];
		
		
		for(int i=0;i<6;i++)
		{p[i]=(rand()%6);}
		
		int a[20],no,j=0,l;
		std::cout<<"Enter no of tickets";
		std::cin>>no;
		std::cout<<"Enter the seat numbers";
				for(int i=0;i<no;i++)
		{
			std::cin>>a[i];
		}
		j=0;
				for(int i=0;i<50;i++)
		{
			if(a[j]==i)
			{
				std::cout<<"Enter the name";
				gets(name1);
				l=strlen(name1);
				for(int k=0;k<l;k++)
				{
					name[i][k]=name1[k];
				}
				j++;
			}
		}
		j=0;
		
		for(int i=0;i<50;i++)
		{
			if(a[j]==i)
			{status[i]='B';
			j++;
			}
		}


		j=0;
		for(int i=0;i<50;i++)
		{
			if(a[j]==i)
			{
				for(int t=0;t<6;t++)
				{
					pnr[i][t]=p[t];
				}
				j++;
			}
		}
	
	std::cout<<"Sucessfull   Your PNR:";
	for(int i=0;i<6;i++)
		std::cout<<p[i];
	std::cout<<"\n";
	
	
	}










	void cancel()
	{
		int p[6];
		std::cout<<"Enter ur PNR";
		for(int i=0;i<6;i++)
			{std::cin>>p[i];}
		int m[10],f,t=0;

		for(int i=0;i<50;i++)
		{
			f=0;
			for(int j=0;j<6;j++)
				{if(pnr[i][j]==p[j])
					{f++;}
				}
			if(f==6)
			{m[t]=i;
			 t++;
			}
		}
		std::cout<<"Out of";
		do
		{
			std::cout<<m[t-1]<<" ";
			t--;
		}
		while(t!=0);
		std::cout<<"How many and what all seats do u want to cancel";
		int n,temp;
		std::cin>>n;
		for(int i=0;i<n;i++)
		{
			std::cin>>m[i];
		}
		for(int i=0;i<n;i++)
		{
			temp=m[i];
			pnr[temp][6]= ('0','0','0','0','0','0');
			name[temp][30] =('0');
			status[temp]='A';
		}
	}


void view(){
	for(int i=0;i<50;i++)
	{
		std::cout<<"Seat No: "<<i<<"  Status "<<status[i]<<"\n";
	}
	std::cout<<"A:Avilable B:Booked \n";
}

void aview(){
	std::cout<<"Password:";
	char a[4];
	gets(a);
	if(a=="pass")
	{
	for(int i=0;i<50;i++)
	{
		std::cout<<"Seat No: "<<i<<"  Status  "<<status[i]<<"Name:";puts(name[i]);std::cout<<"\n";
	}
	std::cout<<"A:Avilable B:Booked \n";
}
}


C2(){
	for(int i=0;i<50;i++)
	{status[i]='A';
	name[i][1]=('\0');
	}
	


}


};






		
void main()
{
	int c;
	C2 obj2;
	C1 obj1;
	a:
	std::cout<<"Select Coach 1.Coach One 2.Coach Two";
	std::cin>>c;
	switch(c)
	{case(1):
	{
	
	std::cout<<"1.Booking 2.Calcelation 3.View";
	int n;
	std::cin>>n;
	if(n==1)
	{obj1.book();}
	else if(n==2)
	{obj1.cancel();}
	else if(n==3)
	{obj1.view();}
	else if(n==4)
	{obj1.aview();}
	goto a;
	}
	case(2):
	{
	
	std::cout<<"1.Booking 2.Calcelation 3.View";
	int n;
	std::cin>>n;
	if(n==1)
	{obj2.book();}
	else if(n==2)
	{obj2.cancel();}
	else if(n==3)
	{obj2.view();}
	else if(n==4)
	{obj2.aview();}
	goto a;
	}

	}
}


