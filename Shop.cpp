#include <iostream>
using namespace std;

class person {
private:
    string name;
    int year;
    string address;
public:
    void set(string nm, string ad, int yr) {
        name = nm;
        address = ad;
        year = yr;
    }
    void display() const {
        cout << "Name: " << name << "\nAddress: " << address << endl;
    }
};

class bank : public person {
private:
    int id;
    static int tempId;
    double bal;
public:
    static int getId() {
        return tempId++;
    }
    void set(string nm, string ad, int yr, double b) {
        person::set(nm, ad, yr);
        id = getId();
        bal = b;
    }
    void display() const {
        person::display();
        cout << "ID: " << id << "\nBalance: " << bal << endl;
    }
};

int bank::tempId = 1;

class shop : public bank {
private:
    string items[2];
public:
    //Show bal
    //show items
    // 1. Buy 2. 3.Exit
};

int main() {
    bank p1;
    p1.set("Hoover", "Duhok", 2004, 2000);
    p1.display();


    return 0;
}
