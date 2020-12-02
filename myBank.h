#ifndef _MY_BANK_
#define _MY_BANK_
	#define BANK_MEMBERS 50
	#define BANK_VALUES 3
	#define OPEN 1
	#define CLOSE 0
	
	float bank[BANK_MEMBERS][BANK_VALUES];
	int account_number;
	double amount;
	int rate;
	int new_account;
	
	void pressO(int account_number);
	
	void pressB(int account_number);
	
	void pressD(int account_number);

	void pressW(int account_number);
	
	void pressC(int account_number);
	
	void pressI(int interest_rate);
	
	void pressP();
	
	void pressE();
	
	int findNewAccount(int new_account);
	
#endif
