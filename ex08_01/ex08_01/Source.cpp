#include <iostream>
using std::cout;
using std::cin;
using std::endl;
int main()
{
int a[]={1,3,5,7,9};
int *p[]={a,a+1,a+2,a+3,a+4};
int *p1=a;
cout<<p[0]<<"    "<<p[1]<<"   "<<p[2]<<"   "<<p[3]<<"   "<<p[4]<<endl;
cout<<"Test 1:-------------------------------"<<endl;
cout<<a[4]<<"\t"<<*(a+2)<<"\t"<<*p[1]<<**(p+1)<<"\t"<<**(p+1)+a[2]<<"\t"<<*(p+4)-*(p+0)<<"\t"<<*(a+3)%a[4]<<endl;
cout<<"Test 2:-------------------------------"<<endl;
cout<<*(++p1);
cout<<"\t"<<*(p1+2);
cout<<"\t"<<*(++++p1)<<"\t"<<endl;
cout<<"Test 3:-------------------------------"<<endl;
cout<<sizeof(p1)<<"\t"<<sizeof(*p1)<<"\t"<<&p1<<"\t"<<*p1<<endl;
cin>>a[0];
}