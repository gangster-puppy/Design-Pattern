#include "Context.h"
#include "State.h"

void Context::changeState(IState* state){m_state = state;}

// 将绘制的动作全部交给状态类去处理，不过也要把本类的指针传过去，因为状态类会更改当前类的成员变量。
void Context::paintTags(){m_state->doPaint(this);} 

bool Context::getHoverState(){return m_isHover;}
void Context::setHoverState(bool hover){m_isHover = hover;}
bool Context::getSelectState(){return m_isSelect;}
void Context::setSelectState(bool select){m_isSelect = select;}