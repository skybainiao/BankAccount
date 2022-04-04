#pragma once
#include<stdbool.h>
typedef enum AccountStatus {
	OK,
	OVER_MAX_CREDIT_LIMIT,
	ACCOUNT_NOT_INSTANTIATED
}AccountStatus;

typedef struct account* account_t;

account_t account_create(int accountNo, double creditLimit);
AccountStatus account_withdraw(account_t self,double amount);
AccountStatus account_deposit(account_t self,double amount);
double account_getBalance(account_t self);
double account_getCreditLimit(account_t self);
int account_getAccountNo(account_t self);
void account_showAccount(account_t self);



