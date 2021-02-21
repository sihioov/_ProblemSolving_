/*
정수 배열이 주어졌을 때, 합이 최대가 되는 부분 배열을 찾아 출력하시오.

단, 부분 배열의 원소들은 연속된 원소들로 구성되어야 합니다.

Input: [-2, 1, -3, 4, -1, 2, 1, -5, -4]

Output : [4, -1, 2, 1]

Input : [8, -7, -3, 5, 6, -2, 3, -4, 2]

Output : [5, 6, -2, 3]
*/

#include <iostream>

void MaximumSubarrySum(int* arry, int length);

int main()
{

    //int test[9] = { -2, 1, -3, 4, -1, 2, 1, -5, -4 };
    int test[9] = { 8, -7, -3, 5, 6, -2, 3, -4, 2 };
    MaximumSubarrySum(test, 9);
    
}



void MaximumSubarrySum(int* arry, int length)
{
    
    int currentMaxSum = arry[0] + arry[1];
    int start = 0;
    int end = 0;
    int arryLength = 0;
    int* result = {0};

    for (int i = 0; i < length; i++)
    {
        int totalSum = arry[i];
        for (int j = i+1; j < length; j++)
        {
            totalSum += arry[j];
            if (totalSum > currentMaxSum)
            {
    
                currentMaxSum = totalSum;
                start = i;
                end = j;
                arryLength = end - start + 1;
              
            }
        }
    }


    for (int i = start; i < end+1; i++)
    {
        printf("%d ", arry[i]);
    }

    
    return result;
}
