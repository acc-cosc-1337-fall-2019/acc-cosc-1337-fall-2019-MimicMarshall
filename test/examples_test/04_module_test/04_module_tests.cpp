#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "bank_account.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}
TEST_CASE("Test begin balance") 
{
	BankAccount account;
	REQUIRE(account.get_balance() == 500);
}
TEST_CASE("Test begin balance with constructor initializer")
{
	BankAccount account(1000);
	REQUIRE(account.get_balance() == 1000);
}
TEST_CASE("Test Bank Account deposit")
{
	BankAccount account;
	account.deposit(100);
	REQUIRE(account.get_balance() == 600);
}
TEST_CASE("Test Bank Account withdrawal")
{
	BankAccount account;
	account.withdraw(100);
	REQUIRE(account.get_balance() == 400);
}
TEST_CASE("Test Bank Account running account")
{
	BankAccount account;
	account.deposit(100);
	account.withdraw(50);
	REQUIRE(account.get_balance() == 550);
}
