int getint(int *pn)
{
  int c, sign;
  while (isspace(c = getch())) // skip white space
    ;
  if (!isdigit(c) && c != EOF && c != '+' && c != '-')
  {
    ungetch(c); // it's not a number
    return 0;
  }
  sign = (c == '-') ? -1 : 1;
  if (c == '+' || c == '-')
  {
    c = getch();
    if (!isdigit(c))
    {
      ungetch(c);
      ungetch(sign == 1 ? '+' : '-');
      return 0;
    }
  }
  for (*pn = 0; isdigit(c); c = getch())
    *pn = 10 * *pn + (c - '0');
  *pn *= sign;
  if (c != EOF)
    ungetch(c);
  return c;
}




int getfloat(float *pn){
  int c, sign;
  float power;
  while(isspace(c = getch())) // skip white space
    ;
  if(!isdigit(c) && c != EOF && c != '+' && c != '-'){
    ungetch(c); // it's not a number
    return 0;
  }
  sign = (c == '-') ? -1 : 1;
  if(c == '+' || c == '-'){
    c = getch();
    if(!isdigit(c)){
      ungetch(c);
      ungetch(sign == 1 ? '+' : '-');
      return 0;
    }
  }
  for(*pn = 0.0; isdigit(c); c = getch())
    *pn = 10.0 * *pn + (c - '0');
  if(c == '.')
    c = getch();
  for(power = 1.0; isdigit(c); c = getch()){
    *pn = 10.0 * *pn + (c - '0');
    power *= 10.0;
  }
  *pn *= sign / power;
  if(c != EOF)
    ungetch(c);
  return c;
}