#include <iostream>
using namespace std;

int C=0;

int main()
{

    int r, c, a[100][100], b[100][100], sum[100][100], i, j;
       C++;

    cout << "Enter number of rows (between 1 and 100): ";
       C++;
    cin >> r;
       C++;

    cout << "Enter number of columns (between 1 and 100): ";
       C++;
    cin >> c;
       C++;

    cout << endl << "Enter elements of 1st matrix: " << endl;
       C++;

    // Storing elements of first matrix entered by user.
    for(i = 0; i < r; ++i){
           C++;

       for(j = 0; j < c; ++j)
       {
              C++;
           cout << "Enter element a" << i + 1 << j + 1 << " : ";
              C++;
           cin >> a[i][j];
              C++;
       }
    }

    // Storing elements of second matrix entered by user.
    cout << endl << "Enter elements of 2nd matrix: " << endl;
       C++;
    for(i = 0; i < r; ++i){
   C++;

       for(j = 0; j < c; ++j)
       {
              C++;
           cout << "Enter element b" << i + 1 << j + 1 << " : ";
              C++;
           cin >> b[i][j];
              C++;
       }
    }
    // Adding Two matrices
    for(i = 0; i < r; ++i){
   C++;
        for(j = 0; j < c; ++j){
                   C++;
            sum[i][j] = a[i][j] + b[i][j];
           C++;
        }
    }
    // Displaying the resultant sum matrix.
    cout << endl << "Sum of two matrix is: " << endl;
       C++;
    for(i = 0; i < r; ++i){

   C++;
        for(j = 0; j < c; ++j)
        {
               C++;
            cout << sum[i][j] << "  ";
               C++;
               if(j == c - 1){
                       C++;
                cout << endl;
                   C++;
            }
        }
    }
    cout<<"and the value of the count is :"<<C;
    return 0;
}
