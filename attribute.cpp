#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <sstream>

using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    cin.ignore();

    map<string, string> attr_map;
    vector<string> tag_stack;

    for (int i = 0; i < n; ++i) {
        string line;
        getline(cin, line);

        if (line.substr(0, 2) == "</") {
            tag_stack.pop_back();
        } else {
            line = line.substr(1, line.length() - 2); 
            stringstream ss(line);
            string tag_name;
            ss >> tag_name;

            tag_stack.push_back(tag_name);

            string current_path = "";
            for (int j = 0; j < tag_stack.size(); ++j) {
                current_path += (j == 0 ? "" : ".") + tag_stack[j];
            }

            string attr_name, eq, attr_val;
            while (ss >> attr_name >> eq >> attr_val) {
                if (attr_val.back() == '>') attr_val.pop_back();
                if (attr_val.front() == '"') attr_val.erase(0, 1);
                if (attr_val.back() == '"') attr_val.pop_back();
                attr_map[current_path + "~" + attr_name] = attr_val;
            }
        }
    }

    for (int i = 0; i < q; ++i) {
        string query;
        getline(cin, query);
        if (attr_map.find(query) != attr_map.end()) {
            cout << attr_map[query] << endl;
        } else {
            cout << "Not Found!" << endl;
        }
    }

    return 0;
}
