#include <iostream>

using namespace std;

int main (){
    
    int first = 5;
    int last = 20;
    int power = 4;
    int sum = 0;
    int multy = 0;

    for (int i = first; i <= last ; i++){
        multy = 1;

        for (int j = 1; j <= power; j++)
        {
            multy *= i;
            if (j == power)
            {
                cout << multy  << " /";
            }
        }
        sum += multy;
    }

    cout << "    " << '\n';
    cout << "Summation: " << sum;
    return 0;
}