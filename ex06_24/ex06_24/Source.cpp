/*�ֱ�����������ʵ�ֻ���������(square)������(diamond)��������
(triangle)����main ��������ѭ���ṹǶ��switch �ṹʵ�ֶԸ���ͼ�κ�����
���ò��ԡ�
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
		cout<<"���β�����ʾż���У����������롣\n";
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