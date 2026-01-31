int* selfDividingNumbers(int left, int right, int* returnSize) {
    int* result = (int*)malloc((right - left + 1) * sizeof(int));
    *returnSize = 0;

    for (int num = left; num <= right; num++) {
        int x = num;
        int isValid = 1;

        while (x > 0) {
            int digit = x % 10;

            if (digit == 0 || num % digit != 0) {
                isValid = 0;
                break;
            }
            x /= 10;
        }

        if (isValid) {
            result[(*returnSize)++] = num;
        }
    }
    return result;
}
