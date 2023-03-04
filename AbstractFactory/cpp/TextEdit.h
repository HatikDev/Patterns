#pragma once

class TextEdit
{
public:
    TextEdit() {}
    virtual ~TextEdit() {}

    virtual void getText() = 0;
};