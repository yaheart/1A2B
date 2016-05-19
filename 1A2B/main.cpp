#include <iostream>
using namespace std;

void ab(char*, char*);

int main()
{
    char* a = new char[4];
    char* b = new char[4];

    cout << "input 4 number: ";
    for ( int i=0; i<4; ++i )
        { cin >> a[i];
        }
    cout << "input 4 number: ";
    for ( int i=0; i<4; ++i )
        { cin >> b[i];
        }
    cout << "Ans: ";
    ab(a, b);

    delete [] a;
    delete [] b;
    return 0;
}

void ab(char* x, char* y)
{
    int a=0, b=0;

    for ( int i=0; i<4; ++i )
        { if ( x[i]==y[i] )
             { ++a;
             }
        }
    for ( int i=0; i<4; ++i )
        { for ( int j=0; j<4; ++j )
              { if ( x[i]==y[j] )
                   { ++b;
                   }
              }
        }

    b=b-a;

    cout << a << "A" << b << "B" << endl;
    return;
}

