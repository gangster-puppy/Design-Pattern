#include "ContextTemplate.h"
#include "StateTemplate.h"

void ContextTemplate::changeState(IStateBase* state){m_state = state;}

// 将绘制的动作全部交给状态类去处理，不过也要把本类的指针传过去，因为状态类会更改当前类的成员变量。
void ContextTemplate::paintTags(){m_state->doPaint(this);} 

bool ContextTemplate::getHoverState(){return m_isHover;}
void ContextTemplate::setHoverState(bool hover){m_isHover = hover;}
bool ContextTemplate::getSelectState(){return m_isSelect;}
void ContextTemplate::setSelectState(bool select){m_isSelect = select;}