#pragma once
#include <iostream>
#include "ContextTemplate.h"
using namespace std;

class IStateBase{
public:
    virtual void doPaint(ContextTemplate* ctx) = 0;
};

template <typename T>
class IStateTemplate : public IStateBase{
public:
    static T* GetInstance(){
        static T instance;  
        return &instance;  
    }
    
    IStateTemplate(const IStateTemplate &) = delete;
    IStateTemplate(IStateTemplate &&) = delete;
    IStateTemplate& operator=(const IStateTemplate&) = delete;
    IStateTemplate& operator=(IStateTemplate &&) = delete;
// 因为需要继承该模板类，所以这里不能用private限定
protected:
    IStateTemplate() {}
    virtual ~IStateTemplate() {}
};

class NomorlStateTemplate : public IStateTemplate<NomorlStateTemplate>{
    virtual void doPaint(ContextTemplate* ctx) override;
};

class HoverUnselectStateTemplate : public IStateTemplate<HoverUnselectStateTemplate>{
    virtual void doPaint(ContextTemplate* ctx) override;
};

class HoverSelectStateTemplate : public IStateTemplate<HoverSelectStateTemplate>{
    virtual void doPaint(ContextTemplate* ctx) override;
};

class UnhoverSelectStateTemplate : public IStateTemplate<UnhoverSelectStateTemplate>{
    virtual void doPaint(ContextTemplate* ctx) override;
};

