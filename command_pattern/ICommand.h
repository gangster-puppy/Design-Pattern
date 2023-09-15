#pragma once
#include<iostream>
using namespace std;

class ICommand{
public:
    virtual ~ICommand(){}
    virtual void execute(const string& from) = 0;
};