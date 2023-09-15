#include "ICommand.h"
#include "Document.h"

class SaveCommand : public ICommand{
public:
    SaveCommand(Document* doc) : m_doc(doc) {}
    virtual void execute(const string& from) override{
        m_doc->setText(from);
        m_doc->save();
    }
private:
    Document* m_doc;
};