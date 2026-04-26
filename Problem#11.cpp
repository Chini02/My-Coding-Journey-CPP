#include <iostream>

using namespace std;

int GenerateRandomNumbers(int From, int To) {
    int RandomNum = rand() % (To - From + 1) + From;

    return RandomNum;
}
///
void FillFirstMatrice(int Arr1[3][3], short Rows, short Cols) {

    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            Arr1[i][j] = GenerateRandomNumbers(1, 10);
        }
    }
}
///
void FillSecondMatrice(int Arr2[3][3], short Rows, short Cols) {

    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            Arr2[i][j] = GenerateRandomNumbers(1, 10);
        }
    }
}
///
int SumOfMatrice(int Arrs[3][3], short Rows, short Cols) {
    int sm = 0;
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            sm += Arrs[i][j];
        }
    }
    return sm;
}
///
void PrintMatrice(int Arr[3][3], short Rows, short Cols) {

    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            cout << Arr[i][j] << "\t";
        }
        cout << endl;
    }
}




int main()
{
    srand((unsigned)time(NULL));

    int Arr1[3][3], Arr2[3][3];

    cout << "The First Matrice: " << endl;
    FillFirstMatrice(Arr1, 3, 3);
    PrintMatrice(Arr1, 3, 3);

    cout << "The Second Matrice: " << endl;
    FillFirstMatrice(Arr2, 3, 3);
    PrintMatrice(Arr2, 3, 3);
    int ResultOfFirstMatrice = SumOfMatrice(Arr1, 3, 3);
    int ResultOfSecondMatrice = SumOfMatrice(Arr2, 3, 3);
    if (ResultOfFirstMatrice == ResultOfSecondMatrice)
    {
        cout << "\nYes: Boath Matrices Are equal";
        cout << "\nThe Sum of the First Matrice is: " << ResultOfFirstMatrice << endl;
        cout << "The Sum of the Second Matrice is: " << ResultOfSecondMatrice << endl;
    }
    else {
        cout << "\nNo: Matrices Are Not equal";
        cout << "\nThe Sum of the First Matrice is: " << ResultOfFirstMatrice << endl;
        cout << "The Sum of the Second Matrice is: " << ResultOfSecondMatrice << endl;
    }
}