#include <iostream>

class Singleton
{
public:
    static Singleton* getInstance()
    {
        if (!Singleton::instance)
            Singleton::instance = new Singleton;
        return Singleton::instance;
    }

    static bool isExist()
    {
        return Singleton::instance;
    }

    static bool deleteInstance()
    {
        if (Singleton::instance)
        {
            delete Singleton::instance;
            Singleton::instance = nullptr;
            return true;
        }
        return false;
    }

private:
    Singleton() {}
    ~Singleton() {}

    static Singleton* instance;
};

Singleton* Singleton::instance = nullptr;

int main(int argc, char* argv[])
{
    std::cout << "is exist: " << Singleton::isExist() << std::endl;
    std::cout << "creating singleton..." << std::endl;
    auto* singleton = Singleton::getInstance();
    std::cout << "is exist: " << Singleton::isExist() << std::endl;

    std::cout << "singleton address: " << std::hex << singleton << std::endl;
    std::cout << "getting another singleton address" << std::endl;
    singleton = Singleton::getInstance();
    std::cout << "singleton address: " << std::hex << singleton << std::endl;

    std::cout << "deleting singleton address" << std::endl;
    singleton->deleteInstance();
    std::cout << "is exist: " << Singleton::isExist() << std::endl;

    return 0;
}