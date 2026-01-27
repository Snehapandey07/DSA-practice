/*Date : 25.01.26*/
/*To find single number using XOR operator in a vector*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec = {4,9,8,4,8};

    int ans = 0;
    for (int vals : vec) {
        ans = ans ^ vals;
    }

    cout << "Single number is: " << ans << endl;
    return 0;
}
