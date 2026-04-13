#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    int q;
    cin >> q;
    while(q--) {
        int val;
        cin >> val;
        

        auto it = lower_bound(v.begin(), v.end(), val);
        
    
        int index = (it - v.begin()) + 1;
  
        if (*it == val) {
            cout << "Yes " << index << endl;
        } else {
            cout << "No " << index << endl;
        }
    }
    
    return 0;
}
