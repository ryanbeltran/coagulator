
int pwm_a = 3;   // Channel A speed
int dir_a0 = 4;  // Channel A direction 0
int dir_a1 = 5; // Channel A direction 1


void setup() {
  // put your setup code here, to run once:

Serial.begin(9600); // Pour a bowl of serial

 pinMode(pwm_a, OUTPUT);  // Set control pins to be outputs
  pinMode(dir_a0, OUTPUT);
  pinMode(dir_a1, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
//drive forward at full speed by pulling DIR_A High
 //and DIR_B low, while writing a full 255 to PWM to 
 //control speed
 digitalWrite(dir_a0, HIGH);
 digitalWrite(dir_a1, LOW);
 analogWrite(pwm_a, 255);
 Serial.println(digitalRead(dir_a0));
 //wait 5 second
 delay(5000);
 

 digitalWrite(dir_a0, LOW);
 digitalWrite(dir_a1, HIGH);
 analogWrite(pwm_a, 255);
 Serial.println(digitalRead(dir_a0));

  //wait 5 second
 delay(5000);

}
