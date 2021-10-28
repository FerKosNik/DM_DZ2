#pragma once


template <typename T>
void Swap(T*& s1, T*& s2) {
    T* tt;
    tt = s1;
    s1 = s2;
    s2 = tt;
};