/*）编写一个递归函数power ( base, exponent )，当函数被调用时，返回
base exponent
例如，power( 3, 4 ) = 3 * 3 * 3 * 3。假设指数exponent 是一个大于或等于0 的整
数。提示：递归步骤使用关系式
base exponent = base · base exponent - 1
和当指数 exponen=1 时，递归终止条件发生，因为此时base1 = base
*/
#include<iostream>
using namespace std;

int power(int,int);

int main(){
	int base,exponent;
	cout<<"输入基数和指数：";
	cin>>base>>exponent;
	cout<<"结果是："<<power(base,exponent)<<endl;
	cin>>base;
	return 0;
}

int power(int base,int exponent){
	if(exponent==1)
		return base;
	else
		return base*power(base,exponent-1);
}