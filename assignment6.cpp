#include <iostream> 
#include <fstream> 
#include <string> 
using namespace std; 
 
class Item { 
public: 
    string name; 
    int quantity; 
 
    void saveToFile() { 
        ofstream out("items.txt"); 
        if (out.is_open()) { 
            out << name << "," << quantity << endl; 
            out.close(); 
            cout << "Item saved to file." << endl; 
        } else { 
            cout << "Unable to open file for writing." << endl; 
        } 
    } 
}; 
 
int main() {
    Item item;
    item.name = "Apple";
    item.quantity = 10;
    item.saveToFile();
    return 0;
}
