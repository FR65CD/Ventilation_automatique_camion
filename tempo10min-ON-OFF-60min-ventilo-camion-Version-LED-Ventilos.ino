//Mettre les fils des ventilos sur NO (Normalement Ouvert) du relais pour activé les ventilos
//Parameters
const int digPin = 2;
int led_pin=13;
void setup() {
 //Init Serial USB
 Serial.begin(9600);
 Serial.println(F("Initialize System"));
 pinMode(led_pin,OUTPUT);
 //Init pwm output
 pinMode(digPin, OUTPUT);
}
void loop() {
 digitalWrite(led_pin,HIGH);//Mise ON de la LED Ventilos 
 digitalWrite(digPin, LOW);//Mise ON pendant 10 min des ventilos extraction est aspiration pour le recyclage de l'air pour un volume de 10m3
 delay(600000);//Minuterie de 10 min
 digitalWrite(led_pin,LOW); //Mise off de la LED ventilos
 digitalWrite(digPin, HIGH);//Mise off des ventilos pendant 60 min
 delay(3600000);//Minuterie 1 Heure
}
