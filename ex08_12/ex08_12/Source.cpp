//¹êÍÃÈüÅÜ
#include<iostream>
using namespace std;
#include<ctime>

void wugui(int *location){
	int i=1+rand()%10;
	if(i<=5)
		*location+=3;
	else if(i<=7)
		*location-=6;
	else
		*location+=1;
}

void tuzi(int *location){
	int i=1+rand()%10;
	if(i<=2);
	else if(i<=4)
		*location+=9;
	else if(i<=5)
		*location-=12;
	else if(i<=8)
		*location+=1;
	else
		*location-=2;
}

int main(){
	srand(time(0));
	int ti=1;
	int wi=1;
	cout<<"BANG!!!!!"<<endl;
	cout<<"AND THEY'RE OFF!!!!"<<endl;
	char a[101];
	a[100]='\0';
	string ouch="OUCH!!!";

	while (true)   
	{
   		tuzi(&ti);
   		wugui(&wi);
		//cout<<"ÍÃ£º"<<ti<<"  ¹ê£º"<<wi<<endl;

		if(ti<1)
			ti=1;
		if(wi<1)
			wi=1;
		for (int i = 0; i < 100; i++)
		{
			a[i]=' ';
		}
		bool iseq=(ti==wi);
		if (!iseq)
		{
			a[ti-1]='T';
			a[wi-1]='H';
			
		}else
		{
			for (int j = 0; j < 7; j++)
			{
				a[ti-1+j]=ouch[j];
			}
		}
		
		cout<<a<<endl;
		if(ti>=70&&wi>=70){
			cout<<"Æ½¾Ö!"<<endl;
			break;
		}else if(ti>=70){
			cout<<"ÍÃ×ÓÓ®£¡"<<endl;
			break;
		}else if(wi>=70){
			cout<<"ÎÚ¹êÓ®£¡"<<endl;
			break;
		}
	}
	cin>>wi;
}