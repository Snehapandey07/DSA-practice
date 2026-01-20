/* Date : 19.01.26 */
/* Array concept */
/*Array is a data structure that store data same type in contagious memory */
/* to define array in program : int mark[5] = {90, 99, 79, 89, 96} ; or int mark[90,65,33]; */

#include <iostream>
using namespace std;

int main() {
    int sizeofarr = 5;
    int price[sizeofarr];

    for (int i = 0; i < sizeofarr; i++) {
        cout << "Enter the value of array element " << i << " : ";
        cin >> price[i];
    }

    cout << "\nArray elements are:\n";
    for (int i = 0; i < sizeofarr; i++) {
        cout << price[i] << " ";
    }

    return 0;
}
