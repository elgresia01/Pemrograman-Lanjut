#include <stdio.h>

struct kesehatan
{
char nama[50];
char jeniskelamin[50];
int umur;
int beratbadan;
int tinggibadan;
};

int main()
{
struct kesehatan ideal;

printf("\n Input Data Badan Ideal \n");
printf("------------------------\n");

printf("Nama = ");
gets(ideal.nama);

printf("Jenis kelamin (Perempuan/Laki-laki) = ");
gets(ideal.jeniskelamin);

printf("Umur = ");
scanf("%d", &ideal.umur);

printf("Berat badan (kg) = ");
scanf("%d", &ideal.beratbadan);

printf("Tinggi badan (cm) = ");
scanf("%d", &ideal.tinggibadan);


printf("\n\n========================\n");
printf(" Cetak Data Badan Ideal \n");
printf("========================\n");

printf("Nama : %s\n", ideal.nama);
printf("Jenis kelamin : %s\n", ideal.jeniskelamin);
printf("Umur : %d tahun\n", ideal.umur);
printf("Berat badan : %d kg\n", ideal.beratbadan);
printf("Tinggi badan : %d cm\n", ideal.tinggibadan);

return 0;
}
