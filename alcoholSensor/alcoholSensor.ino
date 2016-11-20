/*Gas sensor example*/
int mq3 = A0; //connect Gas sensor to analogic pin A0
int led = 13;
int threshold =300; //change the threshold value for your use
void setup(){
   Serial.begin(9600); //initialize serial comunication at 9600 bps
   pinMode(led, OUTPUT);
}
 
void loop()
{
    int mq3 = analogRead(mq3);//read sensor value
    if(mq3>=threshold){//check if it is exceeded the threshold value
      digitalWrite(led, HIGH);
      Serial.println(mq3);//print on serial monitor the sensor value
      delay(500);
    } else {
      digitalWrite(led, LOW);
    }
    delay(100); //slow down the output
}
