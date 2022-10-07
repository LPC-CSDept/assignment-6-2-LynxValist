//

#include <iomanip>
#include <iostream>
using namespace std;

// complete two functions
double nthpowerp(int n)
{
        double pow = 1.0;
        for(int i = 0; i < n; i++){
                pow*=2;
        }
        return pow;
        // return n_th power number
}
double nthpowern(int n)
{
        double pow = 1.0;
        for (int i = n; i < 0; i++){
                pow*=2;
        }
        pow = 1.0/pow;
        return pow;
        // return n_th power number
}
void printout(double result)
{
        cout << "The result is " << setw(10) << fixed << setprecision(5) << result << endl;
}
