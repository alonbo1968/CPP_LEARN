// Ex21_hash_map.cpp : 
//

#include <iostream>
#include <map>
#include <unordered_map>

using namespace std;

unordered_map <string, int> area_code({{"Haifa", 04},{"Tel-Aviv", 03}}); //Initialized Map  using initilizer list
unordered_map <string, int> country_code;//Un-Initialized hash Map
map <int, string> ABC;

int main()
{
    std::cout << "*** Demonstrate Hash Maps - area code table ***\n";

    std::cout << "  Print the area-code hash map:" << endl;
    for (auto iterator : area_code) {
        cout << iterator.first << ':' << iterator.second << " >> ";
    }
    cout << endl << endl;

    std::cout << "*** Demonstrate Hash Maps - country code table *** "<< endl;
    cout << "Add element using insert() method:" << endl;

    country_code.insert({"ISRAEL", 972});
    cout << "Israel Country Code = " << country_code["ISRAEL"] << endl;
    country_code.insert({"UK", 44});
    cout << "UK Country Code = " << country_code["UK"] << endl;

    cout << "\nAdd element using [] operator: " <<endl;
    country_code["USA"] = 1;
    cout << "USA Country Code = " << country_code["USA"] << endl;

    country_code["JAPAN"] = 82;
    cout << "JAPAN Country Code = " << country_code["JAPAN"] << endl;

    cout << "\nRemove element using erase() method, and the correct value:\n";
    if (country_code.count("JAPAN") == true) { //Check if element exists
        country_code.erase("JAPAN");//Remove this wrong element
        country_code["JAPAN"] = 81;
        cout << "JAPAN Country Code = " << country_code["JAPAN"] << endl;
    }

    cout << endl << "Get Hash Map size: " << country_code.size() << endl;

    cout << endl << "Print Hash Map elements:" << endl;
    for (auto it : country_code) {
        cout << it.first << ":" << it.second << " >> ";
    }
    cout << endl << endl;

    std::cout << "*** Demonstrate ordered Hash Maps *** " << endl;

    map <int, string> ABC;
    ABC[4] = 'D';
    ABC[2] = 'B';
    ABC[3] = 'C';
    ABC[1] = 'A';

    cout << "Print Hash Map elements:" << endl;
    for (auto index : ABC) {
        cout << index.first << ":" << index.second << " >> ";
    }
    cout << endl;

}

