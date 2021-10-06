#include<stdio.h>
#include<conio.h>
main(){
clrscr();
int vize,final,ort,sonuc;
printf("Vize notunuzu giriniz..."); scanf("%d",&vize);
printf("Final notunuzu giriniz..."); scanf("%d",&final);
ort=(vize*0.4)+(final*0.6);
if(vize>=101&final>=101){
printf("Vize ve Final notunuzu cok yksek girdiniz. Ltfen kontrol ediniz.");}
else if(vize>=101){
printf("Vize notunuz cok yksek girdiniz...");}
else if(final>=101){
printf("Final notunuz cok yksek girdiniz...");}
else if(final<60){
printf("Final notu 60 degerinin altinda.\nBu dersten kaldiniz veya Final notunuzu yanlis girdiniz...");}
else if(ort<=45){
printf("Vize : %d | Final: %d | Ort: %d | Acklama: Kald | Kredi: FF",vize,final,ort);}
else if(46<=ort&&ort<=49){
printf("Vize : %d | Final: %d | Ort: %d | Acklama: Kald | Kredi: FD",vize,final,ort);}
else if(50<=ort&&ort<=59){
printf("Vize : %d | Final: %d | Ort: %d | Acklama: Kald | Kredi: DD",vize,final,ort);}
else if(60<=ort&&ort<=64){
printf("Vize : %d | Final: %d | Ort: %d | Acklama: Gecti | Kredi: DC",vize,final,ort);}
else if(65<=ort&&ort<=74){
printf("Vize : %d | Final: %d | Ort: %d | Acklama: Gecti | Kredi: CC",vize,final,ort);}
else if(75<=ort&&ort<=80){
printf("Vize : %d | Final: %d | Ort: %d | Acklama: Gecti | Kredi: CB",vize,final,ort);}
else if(81<=ort&&ort<=85){
printf("Vize : %d | Final: %d | Ort: %d | Acklama: Gecti | Kredi: BB",vize,final,ort);}
else if(86<=ort&&ort<=90){
printf("Vize : %d | Final: %d | Ort: %d | Acklama: Gecti | Kredi: BA",vize,final,ort);}
else if(91<=ort&&ort<=100){
printf("Vize : %d | Final: %d | Ort: %d | Acklama: Gecti | Kredi: AA",vize,final,ort);}
getch();
}
