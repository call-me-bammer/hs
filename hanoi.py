def ht(n, a, b, c) :
    if (n == 1) :
        print(str(a) + " " + str(c));
    else :
        ht(n - 1, a, c, b);
        print(str(a) + " " + str(c));
        ht(n - 1, b, a, c);
n = int(input());
power = 1;
for i in range(0, n) :
    power *= 2;
print(str(power - 1));
ht(n, 1, 2, 3);
