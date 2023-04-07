const int xPin = 2;
const int yPin = 3;
const int zPin = 4;

int minVal=265;
int maxVal=402;

double x,y,z;

void setup(){
  Serial.begin(9600);
}

void loop(){
  int xRead = analogRead(xPin);
  int yRead = analogRead(yPin);
  int zRead = analogRead(zPin);
  
  Serial.print("x: ");
  Serial.print(xRead-433+72);
  Serial.print(" y: ");
  Serial.print(yRead-433+72);
  Serial.print(" z: ");
  Serial.println(zRead-420+67);
  delay(1000);
}
