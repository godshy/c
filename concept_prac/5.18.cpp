#include "iostream"

int main()
{
    using namespace std;

    char ch;
    int count = 0;
    cin.get(ch);
    while (!cin.fail())
    {
        cout << ch;
        ++ count;
        cin.get(ch);
    }
    cout << "\n" << count << "characters read\n";
    return 0;
}