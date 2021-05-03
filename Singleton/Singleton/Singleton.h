#ifndef DESIGN_PATTERNS_SINGLETON_H
#define DESIGN_PATTERNS_SINGLETON_H

class Singleton
{
public:
    virtual ~Singleton();
    Singleton *m_Singleton;

    static Singleton* getInstance();
    void singletonOperation();

private:
    static Singleton * instance;

    Singleton();

};

#endif //DESIGN_PATTERNS_SINGLETON_H
