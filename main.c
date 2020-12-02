#include <stdio.h>
#include "myBank.h"
#include <stdlib.h>
#include <ctype.h>
int main(){
	new_account = 900;
	char user_answer; 
	printf("Please choose a transaction type:\n O-Open Account\n B-Balance Inquiry\n D-Deposit\n W-Withdrawal\n C-Close Account\n I-Interest\n P-Print\n E-Exit\n\n");
	scanf("%s",&user_answer);
	while(user_answer!='E'&&user_answer!='e'){
		switch(user_answer){
			case 'O': 
				account_number = findNewAccount(++new_account);
				if(account_number>950){
					printf("All accounts are opened");
					break;
				}
				printf("Please enter amount for deposit:\n");
				if(scanf("%lf",&amount)==1)
					pressO(account_number,amount);
				else{
					printf("Unvalid amount for deposit");
				}
				break;
			case 'o':
				account_number = findNewAccount(++new_account);
				if(account_number>950){
					printf("All accounts are opened");
					break;
				}
				printf("Please enter amount for deposit:\n");
				if(scanf("%lf",&amount)==1)
					pressO(account_number,amount);
				else{
					printf("Unvalid amount for deposit");
				}
				break;
			case 'B':
				printf("Please enter account number:\n");
				if(scanf("%d",&account_number)==1){
					pressB(account_number);
				}
				else {
					printf("Unvalid account number input");
				}
				break;
			case 'b':
				printf("Please enter account number:\n");
				if(scanf("%d",&account_number)==1){
					pressB(account_number);
				}
				else {
					printf("Unvalid account number input");
				}
				break;
			case 'D':
				printf("Please enter account number:\n");
				if(scanf("%d",&account_number)==1){
						pressD(account_number);
					}
					else{
						printf("Unvalid amount for deposit");
					}
				}
				else {
					printf("Unvalid account number input");
				}
				break;
			case 'd':
				printf("Please enter account number:\n");
				if(scanf("%d",&account_number)==1){
						pressD(account_number);
					}
				}
				else {
					printf("Unvalid account number input");
				}
				break;
			case 'W':
				printf("Please enter account number:\n");
				if(scanf("%d",&account_number)==1){
						pressW(account_number);
				}
				else {
					printf("Unvalid account number input");
				}
				break;
			case 'w':
				printf("Please enter account number:\n");
				if(scanf("%d",&account_number)==1){
						pressW(account_number);
				}
				else {
					printf("Unvalid account number input");
				}
				break;
			case 'C':
				printf("Please enter account number:\n");
				if(scanf("%d",&account_number)==1){
					pressC(account_number);
				}
				else {
					printf("Unvalid account number input");
				}
				break;
			case 'c':
				printf("Please enter account number:\n");
				if(scanf("%d",&account_number)==1){
					pressC(account_number);
				}
				else {
					printf("Unvalid account number input");
				}
				break;
			case 'I':
				printf("Please enter interest rate\n");
				if(scanf("%d",&rate)==1)
					pressI(rate);
				else{
					printf("That not a int");
				}
				break;
			case 'i':
				printf("Please enter interest rate\n");
				if(scanf("%d",&rate)==1)
					pressI(rate);
				else{
					printf("That not a int");
				}
				break;
			case 'P':
				pressP();
				break;
			case 'p':
				pressP();
				break;
			default:
				printf("Unvalid input \n");
			}
		printf("\n\nPlease choose a transaction type:\n O-Open Account\n B-Balance Inquiry\n D-Deposit\n W-Withdrawal\n C-Close Account\n I-Interest\n P-Print\n E-Exit\n\n");
		scanf("%s",&user_answer);
	}
	pressE();
	printf("goodbye\n");
	return 0;
}

