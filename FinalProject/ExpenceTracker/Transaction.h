#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <string>

class Transaction {
private:
    std::string date;
    std::string description;
    std::string category;
    double amount;
    bool isIncome; // true = income, false = expense

public:
    Transaction(std::string date, std::string desc, std::string cat, double amt, bool income);
    std::string getDate() const;
    std::string getDescription() const;
    std::string getCategory() const;
    double getAmount() const;
    bool getIsIncome() const;
};

#endif
