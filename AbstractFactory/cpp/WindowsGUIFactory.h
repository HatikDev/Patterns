#pragma once

#include "GUIFactory.h"
#include "WindowsButton.h"
#include "WindowsTextEdit.h"

class WindowsGUIFactory : public GUIFactory
{
public:
    WindowsGUIFactory() : GUIFactory()
    {}
    virtual ~WindowsGUIFactory() {}

    virtual std::shared_ptr<Button> createButton()
    {
        return std::make_shared<WindowsButton>();
    }

    virtual std::shared_ptr<TextEdit> createTextEdit()
    {
        return std::make_shared<WindowsTextEdit>();
    }
};