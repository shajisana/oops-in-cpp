#include <iostream>
#include <cmath>
using namespace std;

class octal {
    int a;
public:
    octal()
    {
       a = 0;
    }


    octal(int d) {
        a = 0;
        int i = 1;
        while (d > 0) {
            a = a + (d % 8) * i;
            d = d / 8;
            i = i * 10;
        }
    }


    octal operator=(int dec) {
        return octal(dec);
   }


    octal operator-(octal &o) {
        int d1 = 0, d2 = 0, i = 0;
        int tempA = a, tempB = o.a;


        while (tempA != 0) {
            d1 = d1 + (tempA % 10) * pow(8, i++);
            tempA = tempA / 10;
        }


        i = 0;
        while (tempB != 0) {
            d2 = d2 + (tempB % 10) * pow(8, i++);
            tempB = tempB / 10;
        }

        int diff = d1 - d2;

        octal temp;
        temp.a = 0;
        i = 1;
        while (diff > 0) {
            temp.a = temp.a + (diff % 8) * i;
            diff = diff / 8;
            i = i * 10;
        }

        return temp;
    }

    void display() {
        cout << a << endl;
    }
};

int main() {
    int n1 = 23;
    int n2 = 15;

    octal o1 = n1;
    cout<<"octal form of 23 :";
    o1.display();
    octal o2 = n2;
    cout<<"octal form of 15:";
    o2.display();

    octal o3 = o1 - o2;
    cout<<"difference:";
    o3.display();

    return 0;
}
