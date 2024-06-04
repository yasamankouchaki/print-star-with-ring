//print the star based on the number with for.
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout<<("pleas Enter number: ");
    cin>>num;
    for (int i=1;i<=num;i++) {
        for (int j=1;j<=i;j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
