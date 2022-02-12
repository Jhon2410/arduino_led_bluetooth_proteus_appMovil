int led = 2;
int estado = 0;
void setup() {
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {

      if(Serial.available() > 0){
             estado = Serial.read();
        } 
       if (estado == 'E') {
               digitalWrite(led, HIGH);
               estado = 0;
       }
       if (estado == 'A')
       {
           digitalWrite(led, LOW);
           estado = 0;
       }
}
