#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter n = ";
    cin >> n;
    int ans = 1;

    //cout << INT32_MAX = 2147483647;

        if ( ans < INT32_MAX/2 )
        {

            for( int i = 0; i <= 30; i++ )
            {

                    if ( n == ans)
                    {
                        cout << "True";
                        break ;
                    }

                    ans = ans * 2;
                    
                   // continue;

            }

                
        }
                if ( n != ans)
                    {
                    cout << "False";
                    }

            return 0;
}