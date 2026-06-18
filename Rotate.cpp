#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{

    short int N;
    cin >> N;
    string matrix_array[N];
    for (int input = 0; input < N; input++)
    {
        cin >> matrix_array[input];
    }
    // char corner_00 = matrix_array[0][0];
    // char corner_0n = matrix_array[0][N - 1];
    // char corner_n0 = matrix_array[N - 1][0];
    // char corner_nn = matrix_array[N - 1][N - 1];
    string original_matrix[N];
    for (int matrix_copy = 0; matrix_copy < N; matrix_copy++)
    {
        original_matrix[matrix_copy] = matrix_array[matrix_copy];
    }

    for (int up = 0; up < N - 1; up++)
    {
        matrix_array[0][up + 1] = original_matrix[0][up];
    }
    for (int left = 0; left < N - 1; left++)
    {
        matrix_array[left][0] = original_matrix[left + 1][0];
    }
    for (int down = 0; down < N - 1; down++)
    {
        matrix_array[N - 1][down] = original_matrix[N - 1][down + 1];
    }
    for (int right = 0; right < N - 1; right++)
    {
        matrix_array[right + 1][N - 1] = original_matrix[right][N - 1];
    }

    for (int out = 0; out < N; out++)
    {
        cout << matrix_array[out] << endl;
    }

    return 0;
}