int main() {
    int a[10];
    do {
        a[0] = a[0] + 1;
        a[a[0]] = a[0] + 1;
    } while (a[0] != 10);
    a[10-1] = 0;
    return a[a[a[a[a[a[a[a[a[1]]]]]]]]];
}
