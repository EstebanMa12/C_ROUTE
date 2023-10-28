    int main() {
        int num = 0x45464748;  // ASCII for 'EFGH'
        unsigned char *p = (unsigned char *)&num + 2;
        printf("%c\n", *p);
        return 0;
    }
    