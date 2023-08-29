#ifdef USE_TEMPLATE
#include "ContextTemplate.h"
#include "StateTemplate.h"
#else
#include "Context.h"
#include "State.h"
#endif

int main(){
#ifdef USE_TEMPLATE
    ContextTemplate* ctx = new ContextTemplate(NomorlStateTemplate::GetInstance());
    ctx->paintTags();
    ctx->changeState(HoverUnselectStateTemplate::GetInstance());
    ctx->paintTags();
    ctx->changeState(HoverSelectStateTemplate::GetInstance());
    ctx->paintTags();
    ctx->changeState(UnhoverSelectStateTemplate::GetInstance());
    ctx->paintTags();
#else
    Context* ctx = new Context(NomorlState::GetInstance());
    ctx->paintTags();
    ctx->changeState(HoverUnselectState::GetInstance());
    ctx->paintTags();
    ctx->changeState(HoverSelectState::GetInstance());
    ctx->paintTags();
    ctx->changeState(UnhoverSelectState::GetInstance());
    ctx->paintTags();
#endif

    delete ctx;
    return 0;
}