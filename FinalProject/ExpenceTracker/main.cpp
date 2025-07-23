#include <iostream>
#include "Tracker.h"

using namespace std;

int main() {
    Tracker tracker;
    tracker.loadFromFile("data.txt");

    int choice;
    do {
        cout << "\n1. Add Transaction\n2. View Transactions\n3. Filter by Category\n4. Summary\n5. Save & Exit\nChoice: ";
        cin >> choice;

        if (choice == 1) {
            string date, desc, category;
            double amount;
            int type;

            cout << "Date (YYYY-MM-DD): "; cin >> date;
            cout << "Description: "; cin.ignore(); getline(cin, desc);
            cout << "Category: "; getline(cin, category);
            cout << "Amount: $"; cin >> amount;
            cout << "1. Income  2. Expense: "; cin >> type;

            tracker.addTransaction(Transaction(date, desc, category, amount, type == 1));
        }
        else if (choice == 2) tracker.displayTransactions();
        else if (choice == 3) {
            string cat;
            cout << "Enter category: ";
            cin.ignore(); getline(cin, cat);
            tracker.filterByCategory(cat);
        }
        else if (choice == 4) tracker.summaryReport();

    } while (choice != 5);

    tracker.saveToFile("data.txt");
    cout << "Saved. Goodbye!\n";
    return 0;
}
