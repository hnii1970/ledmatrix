/** LED matrix test
 *  h.nii 2018/4/13
 */
//#include <VivicoreSerial.h>

#include <Wire.h>
#include "fontset.h"

#define LED 10
#define EN 6
#define IRQ1 2
#define IRQ2 3

#define MAJOR_VER (0x01)
#define MINOR_VER (0x00)


void bank(int id, int i) {
  Wire.beginTransmission(id);
  Wire.write(0xfd);
  Wire.write(i);
  Wire.endTransmission();
  
}
void writeRegi(int id, int page, int adrs, int data) {
  bank(id, page);
  Wire.beginTransmission(id);
  Wire.write(adrs);
  Wire.write(data);
  Wire.endTransmission();  
}
void writeRegiShort(int id, int adrs, int data) {
  Wire.beginTransmission(id);
  Wire.write(adrs);
  Wire.write(data);
  Wire.endTransmission();  
}
int Ids[2]={0x77,0x74};

void setup() {
  int j, n, i;
  Wire.begin();
  Wire.setClock(400000L); // 400kHz I2C clock
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
  analogWrite(LED, 2);
  pinMode(EN, OUTPUT);
  digitalWrite(EN, HIGH);
  pinMode(IRQ1, INPUT);
  pinMode(IRQ2, INPUT);
  Serial.begin(250000);
  Serial.println("Matrix>");
  for(n = 0; n < 2; n++) {
    i = Ids[n];
    /// LED pixel pattern
    for(j=0; j<0x12; j++ ) {
      writeRegi(i,0,j,0xff);
    }
    /// blink all off
    for(j=0; j<0x12; j++ ) {
        writeRegi(i,0,j+0x12,0x00);
    }
    /// PWM all off
    for(j=0; j<144; j++ ) {
      writeRegi(i,0,j+0x24,0x00);
    }
    writeRegi(i,0x0b, 0x0a, 1); /// shutdown-> normal operation
    writeRegi(i,0x0b, 0x00, 0); /// picture mode
    writeRegi(i,0x0b, 0x01, 0); /// picture frame
    writeRegi(i,0x0b, 0x06, 0); /// audio sync off
    writeRegi(i,0,0x24,0x00);
  }
}

int search_char_pos(int cha) {
  int i;
  for(i=0; i< font.Chars; i++) {
    if(cha==font.Index[i]) return i;
  }
  return -1;
}

#define LEDX 32
#define LEDXM (LEDX/2)
#define LEDY 9

void write_dot(int x, int y, int illum) {
  int i;
  i = 1;
  if(x<LEDXM) {
    i = 0;
  } else {
    x = x - LEDXM;
  }
  i = Ids[i];
  writeRegiShort(i, 0x24+(LEDXM-x)-1+(y*LEDXM),illum);
}

void clear_scr(int i){
  int x,y;
  for(y=0; y<LEDY; y++) {
    for(x=0; x<LEDX; x++) {
      write_dot(x,y,i);
    }
  }  
}

void remove_char(int pos, int illumi) {
  int x,y;
  for(y=0; y<LEDY; y++) {
    for(x=0; x<4; x++) {
      write_dot(x+pos*4,y,illumi);
    }
  }
}
void write_char(int pos, int num,int illum) {
  int i,c,x,y;
  i = search_char_pos(num);
  //Serial.println(i);  
  for(y=0; y<8; y++) {
    c=pgm_read_byte_near(font.Bitmap+i*8+y);
    Serial.print(c,16);  
    Serial.print(",");  
    for(x=0; x<4; x++) {
      if((c&0x80)!=0) {
        write_dot(x+4*pos,y,illum);
      }
      c = c<<1;
    }
  }
  Serial.println("<");  
}

//#define ALLONOFF
#ifdef ALLONOFF
/// all on/all off demo
void loop() {
  clear_scr(0);
  clear_scr(0x10);
}

#else
/// display VIVITA!!

void loop() {
  char chr[8]="12345678!!";
  int i,s,p;
  for(s=0; s<16; s++) {
    for(i=0; i<8; i++) {
      remove_char(i,0);
    }
    for(i=0; i<8; i++) {
      p = 8-s+i;
      if((p>=0)&&(p<8)&&(i>=0)&&(i<8)) {
        write_char(p,chr[i],0x60);
      }
    }
    delay(100);
  }
  delay(100);
}

#endif
