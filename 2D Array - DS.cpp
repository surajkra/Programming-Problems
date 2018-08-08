*Problem Statement:*

![alt text](Pictures/2D Array - DS.PNG)

#include <bits/stdc++.h>

using namespace std;

// Complete the hourglassSum function below.
int hourglassSum(vector<vector<int>> arr)
{
    int count = 0;
    vector<int> sum(16);
    for (int x = 1; x < arr.size()-1; x++)
    { for (int y = 1; y < arr.size()-1; y++)
        {sum[count] = arr[x-1][y-1]+arr[x-1][y]+arr[x-1][y+1]+arr[x][y]+
                      arr[x+1][y-1]+arr[x+1][y]+arr[x+1][y+1];
            count = count + 1;
            }
        }
    double max = *max_element(sum.begin(), sum.end());

return max;


}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = hourglassSum(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}
