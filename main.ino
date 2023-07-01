// Relays are "named" by thier physicall number on the module.

const int relay1 = 3;
const int bb1 = 2;
const int relay2 = 5;
const int bb2 = 4;
const int relay3 = 7;
const int bb3 = 6;
const int relay4 = 9 ;
const int bb4 = 8;
const int relay5 = 11;
const int bb5 = 10;
const int relay6 = 13;
const int bb6 = 12;
const int bb16 = 16;

int relay7 = 15;
int bb7 = 14;

const int bb8 = 16;

int BB1 = 0;
int BB2 = 0;
int BB3 = 0;
int BB4 = 0;
int BB5 = 0;
int BB6 = 0;
int BB7 = 0;
int BB8 = 0;
void setup() {
  Serial.begin(9600);
   // put your setup code here, to run once:
  pinMode(relay1, OUTPUT);
  pinMode(relay2, OUTPUT);
  pinMode(relay3, OUTPUT);
  pinMode(relay4, OUTPUT);
  pinMode(relay5, OUTPUT);
  pinMode(relay6, OUTPUT);
  pinMode(bb1, INPUT_PULLUP);
  pinMode(bb2, INPUT_PULLUP);
  pinMode(bb3, INPUT_PULLUP);
  pinMode(bb4, INPUT_PULLUP);
  pinMode(bb5, INPUT_PULLUP);
  pinMode(bb6, INPUT_PULLUP);
  pinMode(bb16, INPUT_PULLUP);

}
void loop() {
 // put your main code here, to run repeatedly:
BB1 = digitalRead(bb1);
BB2 = digitalRead(bb2);
BB3 = digitalRead(bb3);
BB4 = digitalRead(bb4);
BB5 = digitalRead(bb5);
BB6 = digitalRead(bb6);
BB8 = digitalRead(bb8);
int warn = digitalRead(bb16);
   
// Blinkers are shared with hazard/warn function
digitalWrite(relay1, !(BB1 || warn));
digitalWrite(relay2, !(BB2 || warn));

digitalWrite(relay3, !BB3);
digitalWrite(relay4, !BB4);
digitalWrite(relay5, !BB5);
digitalWrite(relay6, !BB6);


} 
