// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     int arr[n];
//     for(int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     for(int i = n - 1; i >= 0; i--) {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"please enter any number : \n";
    cin>>n;
    if (n<0){
        cout<<"you enetred negative number negative number\n";
    }
        
    else {
          cout<<"you entered positive number \n";
    }
    
    cout<<"Hi its me Sneha , lets start DSA \n";
    cout<<sizeof(n);

    return 0;

}
