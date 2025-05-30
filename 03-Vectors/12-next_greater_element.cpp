#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

vector<int> searchInSecondArray(const vector<int>& num1, const vector<int>& num2) {
    unordered_set<int> num2Set(num2.begin(), num2.end());
    vector<int> result;

    for (int x : num1) {
        if (num2Set.find(x) != num2Set.end()) {
            result.push_back(x);
        }
    }

    return result;
}

int main() {
    vector<int> num1 = {1, 2, 3, 4};
    vector<int> num2 = {3, 4, 5, 6};

    vector<int> result = searchInSecondArray(num1, num2);

    cout << "Elements from num1 found in num2: ";
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
