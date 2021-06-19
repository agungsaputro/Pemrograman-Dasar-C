#include <stdio.h>
 
void sapaTeman(char nama[]) {
  printf("Hai %s \n",nama);
}

void hitungLuasSegitiga(int alas, int tinggi) {
  double luas = (alas * tinggi) / 2.0;
  printf("Luas segitiga adalah: %.2f \n",luas);
}
 
int main(void)
{
  sapaTeman("Lisa");
  sapaTeman("Sari");
  sapaTeman("Putri");

  hitungLuasSegitiga(5, 7);
  hitungLuasSegitiga(2, 10);
  hitungLuasSegitiga(191, 357);
 
  return 0;
}
