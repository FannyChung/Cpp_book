/*��дһ����������Ϸ�ĳ��򣬳������ѡ��һ�� l ��1000 ����
I have a number between 1 and 1000��
Can you guess my number?
Please type your first guess��
Ȼ����Ϸ�����˵�һ�������������Ӧ���£�
1. Excellent! You guessed the number!
Would you like to play again (y or n)?
2. Too low. Try again.
3. Too high. Try again.

�����Ϸ���´���������ѭ����ֱ���¶ԡ�������Ϸ���Ѳ¹���
�������������ֵΪ10 ���£����ӡ��Either you know the secret or you got
lucky!�������10 �β��У����ӡ��Ahak! You know the secrete�����������10 �βŲ��У�
���ӡ��You should be able to do better!��*/
#include<iostream>
#include<ctime>

using namespace std;

int main(){
	srand(time(0));
	int r=1+rand()%1000;
	int g;
	char ctn;
	int num=0;

	do{
		cout<<"I have a number between 1 and 1000.\n Can you guess my number?Please type your first guess.";
		cin>>g;

		while (g!=r){
			num++;
			if(g<r){
				cout<<"Too low. Try again."<<endl;
			}else{
				cout<<"Too high.Try again."<<endl;
			}
			cin>>g;
		} 
	   

		if(g==r){
			cout<<"Exellent! You guessed the number!\n";
			 if(num<10){
	    	    cout<<"�����У�"<<endl;
	        }else
		        cout<<"��������ø��ã�"<<endl;
			cout<<"Would you like to play again(y or n):";
			cin>>ctn;
		} 
	}while(ctn=='y');
	
	
}