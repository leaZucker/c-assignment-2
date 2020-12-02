#include <stdio.h>
#include "myBank.h"
void pressO(int account_number, double amount){
		int index = account_number-901;
		int open = bank[index][2];
		if(open != OPEN){
			bank[index][0] = account_number;
			bank[index][1] = amount;
			bank[index][2] = OPEN;
			printf("Account number : %d , amount: %.2lf \n",(int)account_number,bank[index][1]);
		}
	}
void pressB(int account_number){
	if(account_number >900&&account_number<950){
		int index = account_number-901;
		int open = bank[index][2];
		if(open == OPEN){
			bank[index][0] = account_number;
			printf("Account number : %d , amount: %.2lf \n",(int)account_number,bank[index][1]);
		}
		else printf("the account is close try to open it first or a diffrent account number \n");
	}
	else printf("unvalid account number return to starting menu \n");
}

void pressD(int account_number, double amount){
	if(account_number >900&&account_number<950){
		int index = account_number-901;
		int open = bank[index][2];
		if(open == OPEN){
			bank[index][0] = account_number;
			bank[index][1] += amount;
			printf("Account number : %d , amount: %.2lf \n",(int)account_number,bank[index][1]);
		}
		else printf("the account is close try to open it first or a diffrent account number \n");
	}
	else printf("unvalid account number return to starting menu \n");
}

void pressW(int account_number, double amount){
	if(account_number >900&&account_number<950){
		int index = account_number-901;
		int open = bank[index][2];
		if(open == OPEN){
			bank[index][0] = account_number;
			bank[index][1] -= amount;
			printf("Account number : %d , amount: %.2lf \n",(int)account_number,bank[index][1]);
		}
		else printf("the account is close try to open it first or a diffrent account number\n");
	}
	else printf("unvalid account number return to starting menu \n");
}

void pressC(int account_number){
	if(account_number >900&&account_number<950){
		int index = account_number-901;
		int open = bank[index][2];
		if(open == OPEN){
			bank[index][0] = account_number;
			bank[index][1] = 0;
			bank[index][2] = CLOSE;
			printf("Account number : %d closed \n",(int)account_number);
		}
		else printf("the account is close try to open it first or a diffrent account number \n");
	}
	else printf("unvalid account number return to starting menu \n");
}


void pressI(int interest_rate){
	for(int i = 0; i<50; i++){
		int open = bank[i][2];
		if(open == OPEN){
			float new_amount = bank[i][1]*interest_rate;
			bank[i][1] = new_amount;
		}	
	}
}

void pressP(){
	for(int i = 0; i<50; i++){
		int open = bank[i][2];
		if(open == OPEN){
			printf("Account number : %d , amount: %.2lf \n",(int)bank[i][0],bank[i][1]);
		}	
	}
}
void pressE(){
	for(int i = 0; i<50; i++ ){
		int open = bank[i][2];
		if(open == OPEN){
			bank[i][2] = CLOSE;
		}
	}
}
int findNewAccount(int new_account){
	if(new_account>950){
		for(int i = 0;i<BANK_MEMBERS;i++){
			if(bank[i][2]==CLOSE){
				new_account = bank[i][0];
				break;
						}
					}
	}				
	return new_account;						
}
