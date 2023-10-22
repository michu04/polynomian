#include <iostream>
#include <algorithm>
#include <vector>
#include "polynomian.h"
using namespace std;

int main(){
//pierwsza liczba wektoru to wyraz wolny
    vector<double> a = {1,2,3};
    vector<double> b = {1,2,3,4};

    cout << st(a) << "\n";
    cout << st(b) << "\n";

    for(auto el : add(a,b)) cout << el << " ";
    cout << "\n";

    for(auto el : substract(a,b))
        cout << el << " ";
    cout << "\n";

    for(auto el : multiply(a,b))
        cout << el << " ";
    cout << "\n";
return 0;}
