#include "account.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main(void) {




	account_t account1 = account_create(1,300);
	account_t account2 = account_create(2,300);
	account_t account3 = account_create(3,300);
	account_t account4 = account_create(4,300);
	account_t account5 = account_create(5,300);

	account_deposit(account1, 100);
	account_withdraw(account1, 50);
	account_withdraw(account1, 20);
	account_deposit(account1, 200);

	if (account2 == NULL)
	{
		printf("yes");
	}
	printf("AccountNo: %d\n",account_getAccountNo(account1));
	printf("AccountBalance: %lf\n", account_getBalance(account1));
	printf("AccountCreditLimit: %lf\n", account_getCreditLimit(account1));






}