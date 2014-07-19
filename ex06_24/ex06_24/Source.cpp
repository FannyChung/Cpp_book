/*分别用三个函数实现绘制正方形(square)、菱形(diamond)、三角形
(triangle)，在main 函数中用循环结构嵌套switch 结构实现对各种图形函数的
调用测试。
*/
#include"iostream"
using namespace std;

void displaySquare(char,int);
void displayDiamond(char,int);
void displayTriangle(char,int);

int main(){
	int x;
	char a,ctn;
	int size;
	
	do{
		cout<<"Choose the shape to graph\n"
			<<"1 for square\n2 for diamond\n3 for triangle\n";
		cin>>x;
		cout<<"Enter a character and size:";
		cin>>a>>size;
		switch (x)
		{
		case 1:
			displaySquare(a,size);
			break;
		case 2:
			displayDiamond(a,size);
			break;
		case 3:
			displayTriangle(a,size);
			break;
		default:
			break;
		}
		cout<<"do you want to continue(y or n)?:";
		cin>>ctn;
	}while(ctn=='y');
}

void displaySquare(char a,int size){
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cout<<a;
		}
		cout<<endl;
	}
}

void displayDiamond(char a,int size){
	if(size%2==0)
		cout<<"菱形不能显示偶数行，请重新输入。\n";
	else{
		for (int i = 0; i < size; i++)
		{
			if(i<=size/2){
				for (int j = 0; j < size/2-i; j++)
				{
					cout<<' ';
				}
				for (int j = 0; j < 2*i+1; j++)
				{
					cout<<a;
				}
			}else{
				for (int j = 0; j < i-size/2; j++)
				{
					cout<<' ';
				}
				for (int j = 0; j < 2*size-2*i-1; j++)
				{
					cout<<a;
				}
			}

			cout<<endl;
		}
	}
}

void displayTriangle(char a,int size){
	for (int i = 0; i < size; i++){
		for (int j = 0; j < size-1-i; j++)
		{
			cout<<' ';
		}
		for (int j = 0; j < 2*i+1; j++)
		{
			cout<<a;
		}
		cout<<endl;
	}
}