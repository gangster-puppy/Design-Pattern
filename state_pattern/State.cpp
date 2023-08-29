#include <iostream>
#include "State.h"
#include "Context.h"
using namespace std;

// 静态函数定义时不能加static，只在头文件中声明的时候需要加
NomorlState* NomorlState::GetInstance(){
    static NomorlState state;
    return &state;
}

void NomorlState::doPaint(Context* ctx) {
    cout << "Now is NomorlState paint!" << endl;
    // 根据状态类的种类自动设置ctx的成员变量值
    ctx->setHoverState(false);
    ctx->setSelectState(false);
}

HoverUnselectState* HoverUnselectState::GetInstance(){
    static HoverUnselectState state;
    return &state;
}

void HoverUnselectState::doPaint(Context* ctx) {
    cout << "Now is HoverUnselectState paint!" << endl;
    ctx->setHoverState(true);
    ctx->setSelectState(false);
}

HoverSelectState* HoverSelectState::GetInstance(){
    static HoverSelectState state;
    return &state;
}

void HoverSelectState::doPaint(Context* ctx) {
    cout << "Now is HoverSelectState paint!" << endl;
    ctx->setHoverState(true);
    ctx->setSelectState(true);
}

UnhoverSelectState* UnhoverSelectState::GetInstance(){
    static UnhoverSelectState state;
    return &state;
}

void UnhoverSelectState::doPaint(Context* ctx) {
    cout << "Now is UnhoverSelectState paint!" << endl;
    ctx->setHoverState(false);
    ctx->setSelectState(true);
}