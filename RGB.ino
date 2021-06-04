
byte u,d,k,p,u1,d1,k1,p1,u2,d2,k2,p2;
int ledr=9;
int ledg=10;
int ledb=11;
int valor;
void setup() {
  pinMode(ledr, OUTPUT);
  pinMode(ledg, OUTPUT);
  pinMode(ledb, OUTPUT);
  Serial.begin(4500);
}

void loop() {
  if (Serial.available() > 0) {

    valor = Serial.read();

if (valor == 'r'){  //If para LED Rojo
  delay(20);
  k=Serial.read()-48;
  delay(20);
  d=Serial.read()-48;
  delay(20);
  u=Serial.read()-48;
  p=(100*k)+(10*d)+u;
  analogWrite(ledr, p); 
  }

if (valor == 'g'){  //If para LED Verde
  delay(20);
  k1=Serial.read()-48;
  delay(20);
  d1=Serial.read()-48;
  delay(20);
  u1=Serial.read()-48;
  p1=(100*k1)+(10*d1)+u1;
  analogWrite(ledg, p1); 
  }

if (valor == 'b'){  //If para LED Azul
  delay(20);
  k2=Serial.read()-48;
  delay(20);
  d2=Serial.read()-48;
  delay(20);
  u2=Serial.read()-48;
  p2=(100*k2)+(10*d2)+u2;
  analogWrite(ledb, p2); 
  }
 }
}
