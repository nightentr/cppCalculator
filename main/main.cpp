#include <iostream>

using namespace std;

/*
int nr intregi fara zecimale
float nr rationale pana la 7 zecimale
double nr rationale pana la 15 zecimale
char un singur caracter
singur text
bool 0 - false 1 - true

*/

int main()

{
    int a, b, operatie ;
    cout << " " << endl;

    cout << "  Welcome to Calculator Optimus" << endl;
cout << "  TYPE ONLY NUMBERS !" << endl;

     cout << "A = ";
    cin >> a;

        cout << "b = ";
    cin >> b;

            cout << "Type a NUMBER and Select an Operation " << endl;
            cout << "1. + (a+b)" << "\n";
            cout << "2. - (a-b)" << "\n";
            cout << "3. * (a*b)" << "\n";
            cout << "4. / (a/b)" << "\n";
            cout << "5. % (a%b)" << "\n";
            cout << "6. TO BE ADDED" << "\n";

            cin >> operatie;
            cout << " " << endl;
            cout << " " << endl;
            cout << " " << endl;
            cout << " " << endl;

            switch(operatie){
                  case 1:
                cout << a+ b;
break;
                  case 2:
                cout << a- b;
break;
                  case 3:
                cout << a* b;
break;
                  case 4:
                cout << a/ b;
break;
                  case 5:
                cout << a% b;
break;
            }



    return main();
}
