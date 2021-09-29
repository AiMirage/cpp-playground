#include <iostream>

using namespace std;

class Int
{
private:
    int n;

public:
    Int() : n(0){};

    Int(int v) : n(v){};

    void Set(int v)
    {
        n = v;
    };

    int Get() const
    {
        return n;
    };

    Int Add(const Int &i) const
    {
        Int temp;

        temp.Set(n + i.Get());

        return temp;
    };

    // Not logical :)
    void Add(const Int &x, const Int &y)
    {
        n += x.Get() + y.Get();
    }
};

int main(int argc, char const *argv[])
{
    Int a(10), b(5), c;
    c = a.Add(b);
    c.Add(a,b);
    cout << c.Get() << endl;
    return EXIT_SUCCESS;
}
