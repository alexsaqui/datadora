#define direcao 2
#define steppin 3
#define sensor 12
#define botaomotor 4
#define botaodata 5
#define botaoinicio 8
#define direcao2 6
#define steppin2 7
#define direcao3 9
#define steppin3 10
int vezes=0;  

void setup() {
  pinMode(steppin,OUTPUT);
  pinMode(direcao,OUTPUT);
  pinMode(sensor,INPUT);
  pinMode(botaomotor,INPUT_PULLUP);
  pinMode(botaodata,INPUT_PULLUP);
  pinMode(botaoinicio,INPUT_PULLUP);
  Serial.begin(9600);
  pinMode(steppin2,OUTPUT);
  pinMode(direcao2,OUTPUT);
  pinMode(steppin3,OUTPUT);
  pinMode(direcao3,OUTPUT);
  
}

void loop(){
 vezes=0  ;
 if(digitalRead(botaomotor)==LOW){
  digitalWrite(direcao,LOW);
digitalWrite(steppin,HIGH);
delayMicroseconds(80);
digitalWrite(steppin,LOW);
delayMicroseconds(80);
  }
 if(digitalRead(botaodata)==LOW){
  digitalWrite(direcao2,LOW);
for(int x=0;x<=540;x++){
digitalWrite(steppin2,HIGH);
delayMicroseconds(250);
digitalWrite(steppin2,LOW);
delayMicroseconds(250);
}
delay(120);
digitalWrite(direcao2,HIGH);
for(int x=0;x<=540;x++){
digitalWrite(steppin2,HIGH);
delayMicroseconds(150);
digitalWrite(steppin2,LOW);
delayMicroseconds(150);
}
 }

if(digitalRead(botaoinicio)==LOW){


while(vezes<2){ 


digitalWrite(direcao,LOW); 
for(int x=0;x<20000;x++){
digitalWrite(steppin,LOW);
delayMicroseconds(100);
digitalWrite(steppin,HIGH);
delayMicroseconds(100);
if(digitalRead(sensor)==0){
  break;
}
}
delay(100);
 digitalWrite(direcao2,LOW);
for(int x=0;x<=540;x++){
digitalWrite(steppin2,HIGH);
delayMicroseconds(250);
digitalWrite(steppin2,LOW);
delayMicroseconds(250);
}
delay(120);
digitalWrite(direcao2,HIGH);
for(int x=0;x<=540;x++){
digitalWrite(steppin2,HIGH);
delayMicroseconds(150);
digitalWrite(steppin2,LOW);
delayMicroseconds(150);
}
delay(100);
digitalWrite(direcao3,LOW);
for(int x=0;x<=600;x++){
digitalWrite(steppin3,HIGH);
delayMicroseconds(200);
digitalWrite(steppin3,LOW);
delayMicroseconds(200);
}
delay(100);
for(int x=0;x<180;x++){
digitalWrite(steppin,HIGH);
delayMicroseconds(100);
digitalWrite(steppin,LOW);
delayMicroseconds(100);
}

digitalWrite(direcao3,HIGH);
for(int x=0;x<=600;x++){
digitalWrite(steppin3,HIGH);
delayMicroseconds(200);
digitalWrite(steppin3,LOW);
delayMicroseconds(200);
}


for(int x=0;x<2000;x++){
digitalWrite(steppin,HIGH);
delayMicroseconds(100);
digitalWrite(steppin,LOW);
delayMicroseconds(100);
}
vezes++;
Serial.println(vezes);
}
}
}
