#include <iostream>
#include <set>
#include <map>
using namespace std;



void sets() {
    set<int> mySet;
    mySet.insert(11);
    mySet.insert(12);
    mySet.insert(13);
    mySet.insert(14);
    mySet.insert(11);
    mySet.insert(9);
    cout << *mySet.find(11) << endl;
    mySet.erase(12);
    for (auto& x : mySet) {
        cout << x.first << " " << x.second << " ";
    }
}

void maps() {
    map<string, int> myMap;

}


int main() {
    sets();
    return 0;
}