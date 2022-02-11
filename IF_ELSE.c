/* File         : IF_ELSE.c */
/* Penulis      : Fauzyah Hadirahma, email faubelajar@gmail.com */
/* Deskripsi    : contoh pemakaian IF dua kasus komplementer
                  Membaca sebuah nilai dan menuliskan
                  'Nilai a positif , nilai a', jika a >=0
                  'Nilai a negatif , nilai a', jika a <0 */

#include <stdio.h>
int main ()
{
    /* KAMUS */
    int a;
    
    /* PROGRAM */
    printf ("Contoh IF dua kasus \n");
    printf ("Ketikkan suatu nilai integer : ");
    scanf ("%d", &a);
    
    if (a >= 0)
        {
            printf ("Nilai a positif %d \n", a);
        }
    else /* a < 0 */
        {
            printf ("Nilai a negatif %d \n", a);
        }
        
    return 0;
}
