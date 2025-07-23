#include "Tracker.h"
#include <iostream>
#include <fstream>
using namespace std;

void Tracker::addTransaction(const Transaction& t) {
    transactions.push_back(t);
}

void Tracker::displayTransactions() {
    for (const auto& t : transactions) {
        cout << t.getDate() << " | " << t.getDescription() << " | " << t.getCategory()
             << " | " << (t.getIsIncome() ? "+" : "-") << t.getAmount() << endl;
    }
}

void Tracker::filterByCategory(const std::string& category) {
    for (const auto& t : transactions) {
        if (t.getCategory() == category) {
            cout << t.getDate() << " | " << t.getDescription() << " | " << t.getAmount() << endl;
        }
    }
}

void Tracker::summaryReport() {
    double income = 0, expenses = 0;
    for (const auto& t : transactions) {
        if (t.getIsIncome())
            income += t.getAmount();
        else
            expenses += t.getAmount();
    }
    cout << "Total Income: $" << income << "\nTotal Expenses: $" << expenses
         << "\nBalance: $" << (income - expenses) << endl;
}

void Tracker::saveToFile(const std::string& filename) {
    ofstream file(filename);
    for (const auto& t : transactions) {
        file << t.getDate() << "," << t.getDescription() << "," << t.getCategory()
             << "," << t.getAmount() << "," << t.getIsIncome() << "\n";
    }
    file.close();
}

void Tracker::loadFromFile(const std::string& filename) {
    ifstream file(filename);
    string date, desc, category;
    double amount;
    bool income;
    while (getline(file, date, ',')) {
        getline(file, desc, ',');
        getline(file, category, ',');
        file >> amount;
        file.ignore(1); // skip comma
        file >> income;
        file.ignore(); // skip newline
        transactions.emplace_back(date, desc, category, amount, income);
    }
    file.close();
}
