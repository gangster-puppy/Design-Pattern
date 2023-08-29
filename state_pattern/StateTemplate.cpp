#include <iostream>
#include "StateTemplate.h"
#include "ContextTemplate.h"
using namespace std;

void NomorlStateTemplate::doPaint(ContextTemplate* ctx) {
    cout << "Now is NomorlStateTemplate paint!" << endl;
    // 根据状态类的种类自动设置ctx的成员变量值
    ctx->setHoverState(false);
    ctx->setSelectState(false);
    // 也可以在这里面转到别的状态下去 ctx->changeState() ...
}

void HoverUnselectStateTemplate::doPaint(ContextTemplate* ctx) {
    cout << "Now is HoverUnselectStateTemplate paint!" << endl;
    ctx->setHoverState(true);
    ctx->setSelectState(false);
}

void HoverSelectStateTemplate::doPaint(ContextTemplate* ctx) {
    cout << "Now is HoverSelectStateTemplate paint!" << endl;
    ctx->setHoverState(true);
    ctx->setSelectState(true);
}

void UnhoverSelectStateTemplate::doPaint(ContextTemplate* ctx) {
    cout << "Now is UnhoverSelectStateTemplate paint!" << endl;
    ctx->setHoverState(false);
    ctx->setSelectState(true);
}