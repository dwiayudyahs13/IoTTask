#include <M5Stack.h> //library m5stack

//inisialisasi pin
const int Analog = 36;
const int Digtal = 2;

void setup() {
// put your setup code here, to run once:
M5.begin(); //memulai library yang sudah dimasukkan
pinMode(Digtal, INPUT_PULLUP); //menginput pin digital dalam keadaan HIGH
dacWrite(25, 0); //sebagai output
M5.Lcd.setCursor(100, 0, 4); //set pada lcd
M5.Lcd.print("MICROPHONE"); //mencetak pada lcd
}
uint16_t a_data; //menyimpan data analog
uint16_t d_data; // menyimpan data digital
void loop() {
// put your main code here, to run repeatedly:
a_data = analogRead(Analog); //membaca data analog
d_data = digitalRead(Digtal); //membaca data digital
Serial.printf("Analog:%0d Digtal:%0d\n", a_data, d_data); //mencetak data analog dan digital
M5.Lcd.setCursor(30, 120, 4); //set pada lcd
M5.Lcd.printf("Analog:%0d Digtal:%0d\n", a_data, d_data); //mencetak data analog dan digital
delay(200); //jeda 0,2 detik pada lcd
}
