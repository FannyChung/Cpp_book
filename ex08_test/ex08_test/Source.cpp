#include<iostream>
using namespace std;

void mystery(char *,const char *);
int mystery2(const char*);

int main(){
	char string1[80];
	char string2[80];
	cout<<"enter two strings£º"<<endl;
	cin>>string1>>string2;
	mystery(string1,string2);
	cout<<string1<<endl;
	cin>>string1;
	cout<<mystery2(string1)<<endl;

	cin>>string1;
}

void mystery(char *s1,const char *s2){
	while (*s1 != '\0')
	{
		s1++;
	}
	for(;*s1=*s2;s1++,s2++);
	
}

int mystery2(const char *s){
	int x;
	for(x=0;*s!='\0';s++)
		x++;
	return x;
}