#pragma once

#include "GUIFactory.h"
#include "MacOSButton.h"
#include "MacOSTextEdit.h"

class MacOSGUIFactory : public GUIFactory
{
public:
    MacOSGUIFactory() : GUIFactory()
    {}
    virtual ~MacOSGUIFactory() {}

    virtual std::shared_ptr<Button> createButton() override
    {
        return std::make_unique<MacOSButton>();
    }

    virtual std::shared_ptr<TextEdit> createTextEdit() override
    {
        return std::make_shared<MacOSTextEdit>();
    }
};