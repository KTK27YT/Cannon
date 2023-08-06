int motor1pin1 = 2;
int motor1pin2 = 3;

// int buttonState = 0;
int motor2pin1 = 4;
int motor2pin2 = 5;

int buttonpin = 12;

void setup() {
  // put your setup code here, to run once:
  pinMode(motor1pin1, OUTPUT);
  pinMode(motor1pin2, OUTPUT);
  pinMode(motor2pin1, OUTPUT);
  pinMode(motor2pin2, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(buttonpin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_BUILTIN, HIGH);
  analogWrite(9, 100);
  analogWrite(10, 100);
  digitalWrite(motor2pin1, HIGH);
  digitalWrite(motor2pin2, LOW);
  digitalWrite(motor1pin1, LOW);
  digitalWrite(motor1pin2, HIGH);

  
}
