#include <iostream>
using namespace std;

//class for savingsAccount
class savingsAccount{
	//private data memeber
	float savingBalance;
	
	public:
		static float annualInterestRate;
		//declaring member functions
		savingsAccount(float balance); //for declaring the values
		void calculateMonthlyInterest(); //calculating the savings
		float display(); 
		static void modifyInterestRate(float value);
};
//initializing static data member of the class
float savingsAccount::annualInterestRate = 3;

//defining constructor of the class
savingsAccount::savingsAccount(float balance){
	this->savingBalance = balance;
}
//defining calculate monthly interest
void savingsAccount::calculateMonthlyInterest(){
	this->savingBalance = (this->annualInterestRate/12) + this->savingBalance;
}
//defining display function
float savingsAccount::display(){
	return this->savingBalance;
}
//defining static funtion of class
void savingsAccount::modifyInterestRate(float value){
	savingsAccount::annualInterestRate = value;
}

int main(){
	//instantiate the objects of the class
	savingsAccount saver1(2000),saver2(3000); 
	//calculating the monthly interest
	saver1.calculateMonthlyInterest();
	saver2.calculateMonthlyInterest();
	//print the net balance of the savor
	cout<<"the balance of saver1 is: "<<saver1.display()<<endl;
	cout<<"the balance of saver2 is: "<<saver2.display()<<endl;
	//changing annual interest rate
	savingsAccount::modifyInterestRate(4);
	
	//againg caluting the balance after changing in the interst rate
	//calculating the monthly interest
	saver1.calculateMonthlyInterest();
	saver2.calculateMonthlyInterest();
	//print the net balance of the savor
	cout<<"after changing in the monthly Interest Rate \n";
	cout<<"the balance of saver1 is: "<<saver1.display()<<endl;
	cout<<"the balance of saver2 is: "<<saver2.display()<<endl;
}

