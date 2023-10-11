float x = 0.0;
float y = 0.0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  x = x + 0.2;
  y = x + 0.2;
  Serial.printf("%f %f %d \n", sin(x), cos(y), 0);
  delay(100);
}
