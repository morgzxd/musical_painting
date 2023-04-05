
#include <capacitiveSensor.h>

#define speaker 11

CapacitiveSensor   cs1 = CapacitiveSensor(13,6);        
CapacitiveSensor   cs2 = CapacitiveSensor(13,7);         
CapacitiveSensor   cs3 = CapacitiveSensor(13,8);     
CapacitiveSensor   cs4 = CapacitiveSensor(13,9);     
CapacitiveSensor   cs5 = CapacitiveSensor(13,10);      
CapacitiveSensor   cs6 = CapacitiveSensor(13,11);         
CapacitiveSensor   cs7 = CapacitiveSensor(13,12);      


void setup()                    
{
  cs_2_6.set_CS_AutocaL_Millis(0xFFFFFFFF); 
  Serial.begin(9600);
}

void loop()                    
{
  long start = millis();
  
  long total1 =  cs1.capacitiveSensor(500);
  long total2 =  cs2.capacitiveSensor(500);
  long total3 =  cs3.capacitiveSensor(500);
  long total4 =  cs4.capacitiveSensor(500);
  long total5 =  cs5.capacitiveSensor(500);
  long total6 =  cs6.capacitiveSensor(500);
  long total7 =  cs7.capacitiveSensor(500);
  


  Serial.print(millis() - start);         
  Serial.print("\t");                     
  
  Serial.print(total1);                   
  Serial.print("\t");                     
  Serial.print(total2);                   
  Serial.print("\t");                     
  Serial.print(total3);                   
  Serial.print("\t");                     
  Serial.print(total4);                   
  Serial.print("\t");                     
  Serial.print(total5);                  
  Serial.print("\t");                     
  Serial.print(total6);                   
  Serial.print("\t");                     
  Serial.print(total7);                   
  
  

  if (total1 > 500) tone(speaker,131); 
  if (total2 > 500) tone(speaker,147); 
  if (total3 > 500) tone(speaker,165); 
  if (total4 > 500) tone(speaker,175); 
  if (total5 > 500) tone(speaker,196); 
  if (total6 > 500) tone(speaker,220); 
  if (total7 > 500) tone(speaker,247); 
  
  
  if (total1<=500  &  total2<=500  &  total3<=500 & total4<=500  &  total5<=500  &  total6<=500 &  total7<=500)
    noTone(speaker);

  delay(10);                           
}