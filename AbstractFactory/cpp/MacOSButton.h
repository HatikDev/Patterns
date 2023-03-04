#pragma once

#include "Button.h"

class MacOSButton : public Button
{
public:
    MacOSButton() : Button()
    {}
    virtual ~MacOSButton() {}

    virtual void click() override
    {
        std::cout << "MacOS button clicked" << std::endl;
    }
};