#pragma once

#include "TextEdit.h"

class WindowsTextEdit : public TextEdit
{
public:
    WindowsTextEdit() : TextEdit()
    {}
    virtual ~WindowsTextEdit() {}

    virtual void getText() override
    {
        std::cout << "It's windows text edit" << std::endl;
    }
};