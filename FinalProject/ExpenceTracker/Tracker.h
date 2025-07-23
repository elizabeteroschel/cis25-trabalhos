#ifndef TRACKER_H
#define TRACKER_H

#include <vector>
#include "Transaction.h"

class Tracker {
private:
    std::vector<Transaction> transactions;

public:
    void addTransaction(const Transaction& t);
    void displayTransactions();
    void filterByCategory(const std::string& category);
    void summaryReport();
    void saveToFile(const std::string& filename);
    void loadFromFile(const std::string& filename);
};

#endif
