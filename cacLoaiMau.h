

#pragma once
#include <iostream>
using namespace std;
class O : public nhomMau {
public:
    string blood(){
        return "O";
    }
};
class A : public nhomMau {
public:
    string blood() {
        return "A";
    }
};
class B : public nhomMau {
public:
    string blood() {
        return "B";
    }
};
class AB : public nhomMau {
public:
    string blood() {
        return "AB";
    }
};
