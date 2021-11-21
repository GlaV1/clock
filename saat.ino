#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C ekran(0x27,16,2);

float vd=0;
int gv=0;
int saniye=20;
int dakika=45;
int saat=23;

void setup() {

  ekran.init();
  ekran.backlight();
  ekran.setCursor(0,0);
  ekran.print("Serhat Ay");
  ekran.setCursor(0,1);
  ekran.print("10-A 4090");
  delay(3000);
}

 void loop(){
  for(saniye>-1; saniye<60;saniye++){


  {
    
    ekran.init();
  ekran.backlight();
    ekran.setCursor(8,0);
     ekran.print("saat");
     ekran.setCursor(8,1);
     ekran.print(saat), ekran.print(":"),
     ekran.print(dakika),ekran.print(":"),ekran.print(saniye),ekran.print(" "),
     ekran.setCursor(8,1);
     
     delay(983);


     if(saniye==59)
     {
      saniye=-1,dakika=dakika+1;
     }
     if(dakika==60)
     {
      dakika=0,saat=saat+1;
     }
     if(saat==24)
     {
      saat=0;
     }
  } 
 }
 }
