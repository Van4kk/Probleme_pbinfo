#include <iostream>
#include <math.h>
#include <cmath>

using namespace std;

void prob1(){

    int a, b, c, d;

    cin >> a;

    b = a * a * a;
    c = (a * b) + b;
    d = (c / 10) + b % 100;

    cout << a <<' '<< b <<' '<< c<<' '<< d <<endl;

}

void prob2(){

    int x, y, z;
    cin >> x;

    y = x % 100;
    z = x / 10 % 10 + x % 10;

    cout << y <<' '<< z <<endl;

}

int prob3(){

    int a;

    cin >> a;

    if(a % 100 > 50)
       return a = a - a % 100;
    else
       return a = a + 100 - a % 100;

    cout << a <<endl;

}

void prob4(){

    // n = numar natural de exact 4 cifre

    int n, m, s, z, u;

    cin >> n;

    u = n % 10;
    z = n / 10 % 100;
    s = n / 100 % 10;
    m = n / 1000;

    cout << m <<' '<< s <<endl;
    cout << u * z << endl;

}

void prob5(){

    int a, b, c;

    cin >> a >> b >> c;

    if((a * b) < 0)
        cout << "Exista numar negativ";
    else
        if((b * c) < 0)
            cout << "Exista numar negativ";
        else
            cout << "Numere pozitive";

}

void prob6(){

    int a, b, c, d;

    cin >> a >>b;

    c = a + b;
    d = a * b;

    int x;

    if(c > d){
        x = c;
        c = d;
        d = x;
    }

    if(a%2==0)
        cout << c <<' '<< d <<endl;
    else
        cout << d <<' '<< c <<endl;

}

double prob7(double x, double  y, double z){
/*
    //--------E1---------
    cin >> x;

    if(x<0){
       return x = 3 * x - 1;
    }
    else if(x >= 0){
       return x = 2 - x;
    }

    //--------E2---------
    cin >> x;

    if(x<10){
        return x = 5 * x;
    }
    else if(0 =< x && x <= 10){
        return x = 2 - x;
    }
    else if(x > 10){
        return x = 3 + x;
    }
*/

    //--------E3---------
    double rez, rez1, rez2, rez3, rez4, aec, bec, cec, delta;

    cin >> x >> y >> z;

    if(x != z){
        if(rez1 < rez2){
            cout << "Minimul este: ";
            return rez1 = x * y;
        }
        else{
            cout << "Minimul este: ";
            return rez1 = x + z;
        }

        rez3 = 2 * z;
        rez4 = x - y;
        if(rez3 > rez4){
            cout << "Maximul este: " << rez3;
        }
        else{
            cout << "Maximul este: " << rez4;
        }
    }
    else{
        if(x < 10){
            return x * x - 5;
        }
        else if(x >= 10 && x <= 50){
            return 3 * x + 2;
        }
        else if(x>50){
            rez = 2 * x * x + 3 * x - 5;
            cout << rez <<endl;

            aec = 2;
            bec = 3;
            cec = -5;

            delta = (bec * bec) - (4 * aec * cec);
            cout << "\u0394 este: " << delta <<endl;

            if(delta > 0){
                double sqdelta = sqrt(delta);

                double x1 = (-bec + sqdelta) / 2 * aec;
                cout << "x1 = " << x1 <<endl;

                double x2 = (-bec - sqdelta) / 2 * aec;
                cout << "x2 = " << x2 <<endl;
            }
            else{
                cout << "\u0394 = " << delta << ", adica este negativa";
                cout << "\nEcuatia nu este valida !";
            }

        }
    }

}

void prob8(){

    int a, b;
    cout << "Introduce-ti 2 numare mai jos.." <<endl;

    cout << "Primul numar: ";cin >> a;
    cout << "\nAl doilea numar: ";cin >> b;

    cout << "Care din aceste 2 numere este par ?" <<endl;



    if(a % 2 == 0){
        cout << "Numarul " << a <<" este par" <<endl;
        /*if(a % 2 == 0 && b % 2 == 0){
            cout<<"Cele doua numere "<< a <<" si "<< b << " sunt pare." <<endl;
        }
        else{
            cout<<"Cele doua numere "<< a <<" si "<< b << " sunt inpare." <<endl;
        }*/
    }
    else{
        cout << "Numarul " << b <<" este par" <<endl;
    }
}

void prob9(){

    int a, b;
    cout << "Introduce-ti 2 numare mai jos.." <<endl;

    cout << "Primul numar: ";cin >> a;
    cout << "\nAl doilea numar: ";cin >> b;

    cout << "Care din aceste 2 numere este pozitiv ?" <<endl;



    if(a > 0 || a && b > 0 ){
        cout << "Numarul " << a <<" este pozitiv" <<endl;
    }
    else{
        cout << "Numarul " << b <<" este pozitiv" <<endl;
    }
}

//to be continued...

int main(){

    int a, b, c, d;
    /*
    cout << "Problema 1: " << endl;
    prob1();

    cout << "Problema 2: " << endl;
    prob2();

    cout << "Problema 3: " << endl;
    prob3();

    cout << "Problema 4: " << endl;
    prob4();

    cout << "Problema 5: " << endl;
    prob5();

    cout << "Problema 6: " << endl;
    prob6();

    cout << "Problema 7: " << endl;
    cout << prob7E1(a);
    cout << "Problema 7: " << endl;
    cout << prob7E2(a);
    cout << "Problema 7: " << endl;
    cout << prob7E3(a);


    cout << "Problema 7: " << endl;
    cout << prob7(a, 0, 0);


    cout << "Problema 8: \n" << endl;
    prob8();
    */

    cout << "Problema 9: " << endl;
    prob9();

    /*
    cout << "Problema 10: " << endl;
    prob10();

    cout << "Problema 11: " << endl;
    prob11();

    cout << "Problema 12: " << endl;
    prob12();

    cout << "Problema 13: " << endl;
    prob13();

    cout << "Problema 14: " << endl;
    prob14();

    cout << "Problema 15: " << endl;
    prob15();

    cout << "Problema 16: " << endl;
    prob16();

    cout << "Problema 17: " << endl;
    prob17();

    cout << "Problema 18: " << endl;
    prob18();

    cout << "Problema 19: " << endl;
    prob19();

    cout << "Problema 20: " << endl;
    prob20();
    */

    return 0;

}
