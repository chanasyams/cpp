#include <iostream>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

int main() {
    int q;
    cin >> q;
    
    map<string, int> m;
    
    while(q--) {
        int type;
        cin >> type;
        
        string name;
        if (type == 1) {
            int marks;
            cin >> name >> marks;
   
            m[name] += marks;
        } 
        else if (type == 2) {
            cin >> name;
            m.erase(name);
        } 
        else if (type == 3) {
            cin >> name;
        
            auto it = m.find(name);
            if (it != m.end()) {
                cout << it->second << endl;
            } else {
                cout << 0 << endl;
            }
        }
    }
    
    return 0;
}
