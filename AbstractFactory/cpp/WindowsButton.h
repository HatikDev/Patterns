#pragma once

#include "Button.h"

class WindowsButton : public Button
{
public:
    WindowsButton() : Button()
    {}
    virtual ~WindowsButton() {}

    virtual void click() override
    {
        std::cout << "windows button clicked" << std::endl;
    }
};