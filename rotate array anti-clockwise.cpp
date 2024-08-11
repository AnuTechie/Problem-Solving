#include <iostream>
#include <algorithm> // for std::reverse
using namespace std;

int main()
{
    int arr[20][20], n;
    cin >> n;
    int i, j;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    // Transpose the matrix
    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }

    //in anti clockwise direction, we've to reverse the column.
    //for clockwise direction, we have to reverse the row.
    for(j = 0; j < n; j++)
    {
        for(i = 0; i < n/2; i++)
        {
            swap(arr[i][j], arr[n-i-1][j]);
        }
    }
 /*   for(i=0;i<n;i++)
    {
    	reverse(arr[][j].begin(),arr[][j].end());
	}
*/
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

