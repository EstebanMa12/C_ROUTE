    int main() {
        int num = 0x494A4B4C;  // ASCII for 'IJLK'
        unsigned char *p = (unsigned char *)&num + 2;
        printf("%c\n", *p);
        return 0;
    }