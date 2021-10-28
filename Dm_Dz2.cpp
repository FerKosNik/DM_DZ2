
#include <iostream>
#include <vector>
#include <tuple>
#include "Swap.h"
using namespace std;

template <typename T>
void Show(T p) {
    for (auto n : p)
    {
        std::cout << n << "  =  " << *n << std::endl;
    }
};

template <typename T>
void SortPointers(vector<T> t)
{
    for (auto n : t) {
        for (int k = 1; k < t.size(); ++k) {
            if (*n > *(n+1) )
            {
                T temp; 
                temp = n; 
                n+1 = temp; 
                ++n;
            };
        };
    };
    return t;
}

int main()
{
    int* p1 = new int;
    *p1 = 111;
    int* p2 = new int(2222);
    cout << "p1: " << p1 << " value = " << *p1 << endl;
    cout << "p2: " << p2 << " value = " << *p2 << endl;
    Swap(p1, p2);
    
    cout << "p1: " << p1 << " value = " << *p1 << endl;
    cout << "p2: " << p2 << " value = " << *p2 << endl;
    return 0;

    //int const sizeVec = 10;
    //vector <pair<int,int>> vecPoint;
    ////vector <int> vec;
    //for (int i = 0; i < sizeVec;++i) {
    //    vecPoint[i].second = i*2;
    //    vecPoint[i].first = *(&vecPoint[i].second);
    //}
    //
    //for (auto n : vecPoint)
    //{
    //    std::cout << n.first << "  =  " << n.second << std::endl;
    //}

};