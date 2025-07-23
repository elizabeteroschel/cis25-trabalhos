#include "Transaction.h"

Transaction::Transaction(std::string d, std::string desc, std::string cat, double amt, bool income)
    : date(d), description(desc), category(cat), amount(amt), isIncome(income) {}

std::string Transaction::getDate() const { return date; }
std::string Transaction::getDescription() const { return description; }
std::string Transaction::getCategory() const { return category; }
double Transaction::getAmount() const { return amount; }
bool Transaction::getIsIncome() const { return isIncome; }
