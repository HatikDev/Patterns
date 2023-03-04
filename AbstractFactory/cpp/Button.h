#pragma once

class Button
{
public:
    Button() {}
    virtual ~Button() {}

    virtual void click() = 0;
};