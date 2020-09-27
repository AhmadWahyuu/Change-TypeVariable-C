#include <stdio.h>

typedef int bulat;
struct PersegiPanjang {
	bulat panjang;
	bulat lebar;
};
bulat luas(bulat a, bulat b) {
	return (a*b);
}
int keliling(bulat a, bulat b) {
	return 2*(a+b);
}
int main() {
	struct PersegiPanjang pp;
	printf("Mencari Keliling dan Luas Persegi panjang\n");
	printf("------------------------------------------\n");
	printf("Masukkan Panjang = ");scanf("%d",&pp.panjang);
	printf("Masukkan Lebar = ");scanf("%d",&pp.lebar);
	printf("\n\n\n");
	printf("Hasilnya\n");
	printf("Luas Persegi Panjang = %d\n",luas(pp.panjang, pp.lebar));
	printf("Keliling Persegi Panjang = %d\n",keliling(pp.panjang, pp.lebar));
	getchar ();
	getchar ();
	return 0;
}
