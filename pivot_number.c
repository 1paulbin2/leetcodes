int pivotInteger(int n) {

    int s = (n * (n + 1)) / 2;
    int pi = -1;

    for (int i = 1; i <= n; i++) {
        if (i * i == s) {
            pi = i;
            break;
        }
    }

    return pi;
}
