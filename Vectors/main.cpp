/*#include <iostream>
#include <vector>
using namespace std;
int main(){
vector <int > vec = {1,2,3};
cout<< vec[0] << endl; 
return 0;
}*/

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec;

    vec.push_back(5);
    vec.push_back(7);
    vec.push_back(9);
    vec.push_back(3);

    cout << "size: " << vec.size() << endl;
    cout << "capacity: " << vec.capacity() << endl;

    return 0;
}
