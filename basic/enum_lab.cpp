#include <iostream>
#include <string>

namespace TestEnum {
    enum class Traffic_light { green, yellow, red };
    Traffic_light& operator++(Traffic_light& t)
    {

        switch (t) {
        case Traffic_light::green:
            return t = Traffic_light::yellow;
        case Traffic_light::yellow:
            return t = Traffic_light::red;
        case Traffic_light::red:
            return t = Traffic_light::green;
        }
    }
}

using namespace std;

#if 1
int main()
#else
int main_TestEnum()
#endif
{
    printf("%d\n", 1);
    TestEnum::Traffic_light t = TestEnum::Traffic_light::red;
    printf("%d\n", 2);

    return 0;
}