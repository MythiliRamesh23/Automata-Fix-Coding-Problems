#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector < int > list {
        10,
        10,
        10,
        10,
        };

    auto size = list.size();
     
    for (auto element: list)
        cout << element << " ";

    cout << endl;
    cout << "";

   
    return 0;
}
