#include <iostream>
#include <limits>
using namespace std;

// ввод вещественного
float readf()
{
    float x;
    while (!(cin >> x))
    {
        cout << "ќшибка, повторите= ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    return x;
}

// ввод целого > 0
int readi()
{
    int x;
    while (!(cin >> x) || x <= 0)
    {
        cout << "¬ведите >0= ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    return x;
}

int main()
{
    setlocale(0, "rus");
    // 1
    cout << "1 задание\n";

    cout << "A: ";
    float A = readf();

    cout << "N: ";
    int N = readi();

    float p = 1;
    for (int i = 1; i <= N; i++)
    {
        p *= A;
        cout << "A^" << i << " = " << p << endl;
    }

    //  2
    cout << "\n2 задание\n";
    cout << "C\tF\n";

    for (float C = 15; C <= 30.001f; C += 1.5f)
    {
        cout << C << "\t" << 1.8f * C + 32 << endl;
    }

    //  3 
    cout << "\n3 задание\n";
    cout << "N= ";
    int n = readi();

    bool ok = false;
    while (n > 0)
    {
        if (n % 10 == 2)
        {
            ok = true;
            break;
        }
        n /= 10;
    }

    if (ok) cout << "TRUE\n";
    else cout << "FALSE\n";

    return 0;
}