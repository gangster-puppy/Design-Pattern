#include "CommandSender.h"
#include "SaveCommand.h"
#include "Document.h"

int main(){
    // 从用户交互直接到业务逻辑了：在菜单栏上点击文档保存按钮（信号槽） 和 键盘输入ctrl+s快捷键（事件处理）
    // 加入中间层：菜单栏      -->  |
    //           ctrl+s     -->  |保存命令-->执行保存
    //           其他入口...  -->  |

    // 1.创建命令接收者
    Document doc;
    // 2.创建命令，并关联至接收者
    ICommand *cmd = new SaveCommand(&doc);
    // 3.创建发送者，并关联命令
    Button btn;
    btn.setCommand(cmd);
    Shortcut sct;
    sct.setCommand("ctrl+s", cmd);

    // 4.发送命令
    btn.click();
    sct.press();

    delete cmd;
    return 0;
}