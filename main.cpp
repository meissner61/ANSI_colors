#include <iostream>
#include <string>

using namespace std;

int main()
{
	string msg = "Test";

	cout << "***ANSI escape code color sheet***" << endl;
	cout << "" << endl;
	cout << "\033[0m"<<"Reset Everything " + msg << endl;
	cout << "" << endl;
	cout << "\033[1;31m bold red text\033[0m"<< endl;;
	cout << "\x1B[32m green \033[0m" << endl;

    cout << "\n\n\n\n\n\n\n";

    for (int i = 0; i < 11; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            int n = 10 * i + j;
            if (n > 185) break;
            cout << "\033[" << n << "m " << n<<"\033[m";
        }
        cout << endl;
    }

    cout << "\n\n\n\n\n\n\n";

    int i, j, n;

    for (i = 0; i < 11; i++) 
    {
        for (j = 0; j < 10; j++) 
        {
            n = 10 * i + j;
            if (n > 108) break;
            printf("\033[%dm %3d\033[m", n, n);
        }
        printf("\n");
    }

}
