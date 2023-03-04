#pragma once

#include "Button.h"
#include "TextEdit.h"

#include <memory>

class GUIFactory
{
public:
    GUIFactory() {}
    virtual ~GUIFactory() {}

    virtual std::shared_ptr<Button> createButton() = 0;
    virtual std::shared_ptr<TextEdit> createTextEdit() = 0;
};