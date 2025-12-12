#include<iostream>
#include <fstream> 
#include <string> 

using namespace std;

//module 6
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
   void loadFromFile() { 
       ifstream in("items.txt"); 
       if (in.is_open()) { 
           string line; 
           while (getline(in, line)) { 
               cout << "File content: " << line << endl; 
           } 
           in.close(); 
       } else { 
           cout << "Unable to open file for reading." << endl; 
       } 
   } 
};


//module11
class Product {
    int id;
    string name;
    float price;
public:
    Product(int i, string n, float p) : id(i), name(n), price(p) {
        cout << "Constructor called\n";
    }
    ~Product() {
        cout << "Destructor called\n";
    }
    void printDetails() {
        cout << "ID: " << id << ", Name: " << name << ", Price: $" << price << endl;
    }
};


int main() { 
    //module 6
    Item tool; 
    tool.name = "Screwdriver"; 
    tool.quantity = 10; 
 
    tool.saveToFile(); 
    tool.loadFromFile();


   //module 11
    Product p(101, "Notebook", 4.99);
    p.printDetails();
 
    return 0; 
} 
