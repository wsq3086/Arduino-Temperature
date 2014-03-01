int sensorPin = 0;
void setup()
{
  Serial.begin(9600); 
}
 
void loop()                   
{
 float reading = analogRead(sensorPin);  
 
 float voltage = reading * 5.0;
 voltage /= 1024.0; 
 
 float temperatureC = (voltage - 0.5) * 100;  
 Serial.print(temperatureC);  Serial.println("C");

// float temperatureF = (temperatureC * 9.0 / 5.0) + 32.0;
// Serial.print(temperatureF); Serial.println(" degrees F");
 
 delay(1000);                                  
}
