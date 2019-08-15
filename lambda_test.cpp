///
/// @file
// Created by Praveenkumar Karunakaran on 24.04.19, 
///

#include <iostream>
#include <vector>
#include <algorithm>
#include <typeinfo>
#include <array>

using namespace std;

namespace ct
{
/*
auto find_first_multiple(const vector<int>& vi,const int& i)
{
    return find_if(begin(vi),end(vi),[i](int x){return x%i==0;});
}
 */
template<typename T,typename Container>
auto find_first_multiple(const Container& C,const T& i)
{
    return find_if(begin(C),end(C),[i](T x){return x%i==0;});
}
}

int main ()
{
    using namespace ct;

    vector<int> vi{3, 5, 4, 12, 15, 7, 9};
    int vi1[]= {3, 5, 4, 12, 15, 7, 9};

    for (int i= 2; i < 10; ++i) {
        auto it= find_first_multiple(vi1, i);
        if ( it != end(vi1))
            cout << "The first multiple of " << i << " is " << *it << endl;
        else
            cout << "There is no multiple of " << i << endl;
    }

    for (int i= 2; i < 10; ++i) {
        auto it= find_first_multiple(vi, i);
        if ( it != end(vi))
            cout << "The first multiple of " << i << " is " << *it << endl;
        else
            cout << "There is no multiple of " << i << endl;

    }
    return 0;
}



