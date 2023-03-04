#include <iostream>
#include <memory>

#include "GUIFactory.h"
#include "WindowsGUIFactory.h"
#include "MacOSGUIFactory.h"

int main(int argc, char* argv[])
{
    std::cout << "What is your operating system? (win/mac) ";
    std::string answer;
    std::cin >> answer;

    std::shared_ptr<GUIFactory> factory;
    if (answer == "win") {
        factory = std::make_shared<WindowsGUIFactory>();
    } else if (answer == "mac") {
        factory = std::make_shared<MacOSGUIFactory>();
    } else {
        std::cout << "Unknown system" << std::endl;
        exit(1);
    }

    auto button = factory->createButton();
    button->click();

    auto textEdit = factory->createTextEdit();
    textEdit->getText();
}