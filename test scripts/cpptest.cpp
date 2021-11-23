#include <string>

#define def 10;

using namespace std;

class class0
{
public:
    class0(int a, int b) : a(a), b(b) {};
    int a;

private:
    int b;
    void boo();
};

class class1 : private class0
{
};

struct test
{
    int a = 1;
    char b = 'b';
    std::string s = "string";

    int foo()
    {
        return 0;
    }
};

void JustAfunction(test &a, test *b)
{
    test c = a;
    test *d = b;
}

enum enum_case
{
    one,
    two,
    three
};

int main()
{
    int a = 0xFFFFFF;

    int arr[16];
    arr[0] = def;

    test t;
    t.a = 0;
    t.foo();

    for (size_t i = 0; i < 20; i++)
    {}

    while (true)
    {}

    test *t1 = new test;
    t1->a = 0;
    delete t1;

    class0 c(0,0);
    c.a = 10;

    test *ptest = new test;
    ptest->a = 50;

    enum_case case_test = one;
    switch (ptest->a)
    {
    case one:
        break;
    
    default:
        break;
    }
}
