int analogInput=0;
float vout=0.0;
float vin=0.0;
float R1=100000.0;
float R2=10000.0;
int value=0;

void setup() {
  // put your setup code here, to run once:
  pinMode(analogInput,INPUT);
  Serial.begin(9600);
  Serial.println("VOLTIMETRO");
}

void loop() {
  // put your main code here, to run repeatedly:
  value= analogRead(analogInput);
  vout= (value*5.0)/1024.0;
  vin= vout/(R2/(R2+R1));
  if(vin<0.09){
      vin=0.0;
    } 
 Serial.println(vin);
 delay(500);
}
