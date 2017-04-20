
int pwm_a = 3;   // Channel A speed
int pwm_b = 6;   // Channel B speed
int dir_a0 = 4;  // Channel A direction 0
int dir_a1 = 5; // Channel A direction 1
int dir_b0 = 7;  // Channel B direction 0
int dir_b1 = 8;  // Channel B direction 1

void setup() {
  // put your setup code here, to run once:

Serial.begin(9600); // Pour a bowl of serial

 pinMode(pwm_a, OUTPUT);  // Set control pins to be outputs
 pinMode(pwm_b, OUTPUT);  // Set control pins to be outputs
  pinMode(dir_a0, OUTPUT);
  pinMode(dir_a1, OUTPUT);
  pinMode(dir_b0, OUTPUT);
  pinMode(dir_b1, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
//drive forward at full speed by pulling DIR_A High
 //and DIR_B low, while writing a full 255 to PWM to 
 //control speed
 digitalWrite(dir_a0, HIGH);
 digitalWrite(dir_a1, LOW);
 digitalWrite(dir_b0, HIGH);
 digitalWrite(dir_b1, LOW);
 analogWrite(pwm_a, 255);
  analogWrite(pwm_b, 255);
 Serial.println(digitalRead(dir_a0));
 //wait 5 second
 delay(10000);
 

 digitalWrite(dir_a0, LOW);
 digitalWrite(dir_a1, HIGH);
  digitalWrite(dir_b0, LOW);
 digitalWrite(dir_b1, HIGH);
 analogWrite(pwm_a, 255);
  analogWrite(pwm_b, 255);
 Serial.println(digitalRead(dir_a0));

  //wait 5 second
 delay(10000);

}
