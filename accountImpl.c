#pragma once
#include"Account.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>


typedef struct account {
	int accountNo;
	double creditLimit;
	double balance;
}account;


account_t account_create(int accountNo,double creditLimit) {
	account_t _newAccount = calloc(sizeof(account), 1);

	if (_newAccount == NULL) {
		return NULL;
	}

	_newAccount->accountNo = accountNo;
	_newAccount->creditLimit = creditLimit;

	return _newAccount;
}

AccountStatus account_withdraw(account_t self, double amount)
{
	if (amount < self->balance && amount < self->creditLimit) {
		self->balance = self->balance - amount;
		return OK;
	}
	else
	{
		return OVER_MAX_CREDIT_LIMIT;
	}

}

AccountStatus account_deposit(account_t self, double amount)
{
	if (self->accountNo != NULL) {
		self->balance = self->balance + amount;
		return OK;
	}
	else
	{
		return ACCOUNT_NOT_INSTANTIATED;
	}
}

double account_getBalance(account_t self)
{
	return self->balance;
}

double account_getCreditLimit(account_t self)
{
	return self->creditLimit;
}

int account_getAccountNo(account_t self)
{
	return self->accountNo;
}


void account_destory(account_t self) {
	if (self != NULL) {
		free(self);
	}
}



