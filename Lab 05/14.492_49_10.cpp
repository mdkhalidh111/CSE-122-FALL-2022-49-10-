
/**CODE NAME : Soldier and Bananas
CODE NO : 546A
**/
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int k, n, w, soln;
    cin >> k >> n >> w;
    soln = k * w * (w+1) / 2;
    cout << max(0, soln - n) << "\n";
}
