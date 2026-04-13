#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int N, M;
    int pow = 0;
    double result;

    cout << "Enter your base number: ";
    cin >> N;
    cout << "Enter your exponent: ";
    cin >> M;
    
    
    if ( M == 0){

        result = 1;
        cout << N << " to the " << M << " is " << result << endl;
    }

    for (int i=N;pow!=M;i*=N){
        
        result = i;
        pow++;

        cout << result << " ";

        // if (pow == M)
        //     cout << "\n" << N << " to the " << M << " is " << result;
        
    }
    // cout << N << " to power number: " << M;

    // TODO

    cout << endl;

    return 0;
}
