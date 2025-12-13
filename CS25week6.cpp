#include <iostream>
#include <string>

using namespace std;

// 1. Define the struct
struct Item {
    string name;
    int id;
};

// 2. Binary search function (search by id)
int binarySearch(Item* items, int size, int targetId) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = (left + right) / 2;

        if (items[mid].id == targetId) {
            return mid; // found
        }
        else if (items[mid].id < targetId) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    return -1; // not found
}

int main() {
    const int SIZE = 100;

    // 3. Dynamically allocate array of Items
    Item* items = new Item[SIZE];

    // 4. Populate with sample data
    // Names are sorted alphabetically
    // IDs are also increasing, so binary search works
    for (int i = 0; i < SIZE; i++) {
        items[i].id = i + 1;
        items[i].name = "Item" + to_string(i + 1);
    }

    // 5. Ask user for ID
    int searchId;
    cout << "Enter an ID to search for: ";
    cin >> searchId;

    // 6. Search
    int result = binarySearch(items, SIZE, searchId);

    // 7. Display result
    if (result != -1) {
        cout << "Item found!" << endl;
        cout << "ID: " << items[result].id << endl;
        cout << "Name: " << items[result].name << endl;
    } else {
        cout << "Item not found." << endl;
    }

    // 8. Free memory
    delete[] items;

    return 0;
}
