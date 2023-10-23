#include <ctype.h>

// atof: convert string s to double

double atof(char s[]){
    double val, power;
    int i, sign;

    for(i = 0; isspace(s[i]); i++) // skip white space
        ;
    sign = (s[i] == '-') ? -1 : 1; // get sign
    if(s[i] == '+' || s[i] == '-') // skip sign
        i++;
    for(val = 0.0; isdigit(s[i]); i++) // get integer part
        val = 10.0 * val + (s[i] - '0');
    if(s[i] == '.') // skip decimal point
        i++;
    for(power = 1.0; isdigit(s[i]); i++){ // get fractional part
        val = 10.0 * val + (s[i] - '0');
        power *= 10.0;
    }
    return sign * val / power;
}