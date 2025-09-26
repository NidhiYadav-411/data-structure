/*PROBLEM STATEMENT: 
Coffee Shop Line (Simple Queue):
Arrival: Customers arrive at the coffee shop and stand in line. Order Processing: The first customer in line gets their order taken, and the barista starts making the coffee.Serving: Once the first customer is served, they leave the queue, and the next customer in line moves forward to be served. Write a program to implement a simple queue*/

#include<iostream>
using namespace std;
class CoffeeShop{
	public:
	int token_queue[10];
	int r;
	int f;
	int isEmpty;
	int isFull;
	int size=5;
	int t;

	CoffeeShop(){
		 r=-1;
		 f=0;
	}
	void enqueue(int t){
		if(r==size-1){
		cout<<"token unavailable"<<endl;
	}
	else{
		r++;
		token_queue[r]=t;
		cout<<"given token no is:"<<t<<endl;
		
	}
  }

	int dequeue (){
		int x=0;
		if(f>r){
			cout<<"empty"<<endl;
		}
		else{
			x=token_queue[t];
			f++;//overflow
			return x;
		}
	}
};
	int main(){
		CoffeeShop obj1;
		int a;
		int choice;
		char b='Y';
		do{
			cout<<"COFFEE SHOP "<<endl;
			cout<<"1-Issue token"<<endl;
			cout<<"2-process order"<<endl;
			cout<<"exit"<<endl;
			cout<<"enter choice: ";
			cin>>choice;
			
			
			switch(choice){
				case 1:
				cout<<"enter token no : ";
				cin>>a;
				obj1.enqueue(a);
				break;
				case 2:
				obj1.dequeue();
				break;
				case 3:
				cout<<"exit"<<endl;
				return 0;
				default:
				cout<<"invalid choice"<<endl;
			}
			cout<<"do you want to continue"<<endl;
			cin>>b;
		
		}while(b=='y'||b=='Y');
	
	      return 0;	
}
