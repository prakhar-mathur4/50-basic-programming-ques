#include <bits/stdc++.h>
using namespace std;
 
bool isPrime(int a)
{
    if (a <= 1)
        return false;
 
    for (int i = 2; i < a; i++)
        if (a % i == 0)
            return false;
 
    return true;
}
 
int main()
{
    isPrime(11) ? cout << " true\a" : cout << " false\a";
    isPrime(15) ? cout << " true\a" : cout << " false\a";
    return 0;
}




/*Time Complexity: O(n) 
Auxiliary Space: O(1) /*