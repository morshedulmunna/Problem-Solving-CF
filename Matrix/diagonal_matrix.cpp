#include <bits/stdc++.h>
using namespace std;

struct Matrix
{
    int A[5];
    int n;
};

// Setting Data in the Matrix
void Set(struct Matrix *m, int i, int j, int x)
{
    if (i == j)
        m->A[i - 1] = x;
}

// Getting Single Value of Matrix
int Get(struct Matrix m, int i, int j)
{
    if (i == j)
        return m.A[i - 1];
    else
        return 0;
}

// Display All Data from the matrix
void Display(struct Matrix m)
{
    for (int i = 0; i < m.n; i++)
    {
        for (int j = 0; j < m.n; j++)
        {
            if (i == j)
                cout << m.A[i] << " ";
            else
                printf("0 ");
        }
        cout << endl;
    }
}

// Main function
int main()
{

    struct Matrix m;
    m.n = 5;

    Set(&m, 1, 1, 5);
    Set(&m, 2, 2, 9);
    Set(&m, 3, 3, 5);
    Set(&m, 4, 4, 3);
    Set(&m, 5, 5, 7);

    Display(m);

    return 0;
}