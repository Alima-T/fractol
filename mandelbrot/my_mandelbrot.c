#include <stdio.h>

typedef struct s_complex
{
    double real;
    double imagin;
}              t_complex;

int main()
{
    t_complex z;
    // point
    t_complex c;
    double tmp_real;
 

z.real = 0;
z.imagin = 0;
c.real = 0.25;
c.imagin = 0.4;
// c.real = 5;
// c.imagin = 2;

    for (int imagin = 0; imagin < 6; imagin++)
    {
        // formula Z = Zˆ2 + C
        // Complex num formula: (x + yi)ˆ2 = (xˆ2 - yˆ2) + 2xyi // minus - yˆ2 due iˆ2 = -1
        tmp_real = (z.real * z.real) - (z.imagin * z.imagin);
        z.imagin = 2 * z.real * z.imagin;
        z.real = tmp_real;

        // adding the c value
        z.real = z.real + c.real;
        z.imagin = z.imagin + c.imagin;

        printf ("Iteration # %d - real num %f : imaginarium num %f \n", imagin, z.real, z.imagin);
    }
}