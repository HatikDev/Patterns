#pragma once

#include "TextEdit.h"

class MacOSTextEdit : public TextEdit
{
public:
    MacOSTextEdit() : TextEdit()
    {}
    virtual ~MacOSTextEdit() {}

    virtual void getText() override
    {
        std::cout << "It's MacOS text edit" << std::endl;
    }
};