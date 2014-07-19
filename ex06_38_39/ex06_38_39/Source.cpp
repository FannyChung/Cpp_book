/*编写一个猜数字游戏的程序，程序随机选择一个 l 到1000 的数
I have a number between 1 and 1000．
Can you guess my number?
Please type your first guess．
然后游戏者输人第一个结果。程序响应如下：
1. Excellent! You guessed the number!
Would you like to play again (y or n)?
2. Too low. Try again.
3. Too high. Try again.

如果游戏考猜错，则程序进行循环．直到猜对。计算游戏者已猜过的
次数。如果次数值为10 以下，则打印“Either you know the secret or you got
lucky!”。如果10 次猜中，则打印“Ahak! You know the secrete”。如果超过10 次才猜中，
则打印“You should be able to do better!”*/
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
	    	    cout<<"你真行！"<<endl;
	        }else
		        cout<<"你可以做得更好！"<<endl;
			cout<<"Would you like to play again(y or n):";
			cin>>ctn;
		} 
	}while(ctn=='y');
	
	
}