#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<string, string> database;
    database["John Smith"] = "555-555-5555";
    database["Jane Smith"] = "555-555-5556";
    database["Bob Johnson"] = "555-555-5557";

    cout << "John Smith's phone number: " << database["John Smith"] << endl;
    cout << "Jane Smith's phone number: " << database["Jane Smith"] << endl;
    cout << "Bob Johnson's phone number: " << database["Bob Johnson"] << endl;
    return 0;
}
