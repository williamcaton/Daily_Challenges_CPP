#include <iostream>

using namespace std;

int main()
{
    int input;
    cout << "how many to count for?";
    cin >> input;
    for (int i = 0; i < input; i++){
        cout << i;
        if (i%3 == 0){
            cout << "fizz";
        }
        if (i%5 == 0){
            cout << "buzz";
        }
        cout << "\n";
    }
    return 0;
}
