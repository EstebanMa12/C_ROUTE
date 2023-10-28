int main() {
    int num = 0x12345678;
    unsigned char *p = (unsigned char *)&num;
    printf("%x\n", *p);
    return 0;
}
