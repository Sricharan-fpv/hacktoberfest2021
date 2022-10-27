#include <conio.h>
#include <iostream>
using namespace std;
class complex
{
    int real, imagen;

public:
    void setdata(int x, int y)
    {
        real = x;
        imagen = y;
    }
    complex operator+(complex &c)
    {
        complex temp;
        temp.real = real + c.real;
        temp.imagen = imagen + c.imagen;
        return temp;
    }
    void showsum()
    {
        cout << "Sum is " << real << "," << imagen << endl;
    }
    complex operator-(complex &c)
    {
        complex ans;
        ans.real = real - c.real;
        ans.imagen = imagen - c.imagen;
        return ans;
    }
    void showsubraction()
    {
        cout << "Subracion is " << real << "," << imagen << endl;
    }
    complex operator*(complex c)
    {
        complex temp;

        /* if (a,b)(c,d) then formula of multiplication is (ac-bd,ad+bc) */
        temp.real = (real * c.real) - (imagen * c.imagen);
        temp.imagen = (real * c.imagen) + (imagen * c.real);

        return temp;
    }
    void showmulti()
    {
        cout << "Multiplicaion is " << real << ","
             << imagen << endl;
    }
};
int main()
{
    int x, y, z, k;
    complex c1, c2, c3;
    cout << "Enter first complex number:";
    cin >> x >> y;
    cout << "Enter second complex number";
    cin >> z >> k;
    c2.setdata(x, y);
    c1.setdata(z, k);
    c3 = c1 + c2;
    c3.showsum();
    c3 = c1 - c2;
    c3.showsubraction();
    c3 = c1 * c2;
    c3.showmulti();
}
