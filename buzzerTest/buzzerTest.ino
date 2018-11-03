/* Arduino tutorial - Buzzer / Piezo Speaker
   More info and circuit: http://www.ardumotive.com/how-to-use-a-buzzer-en.html
   Dev: Michalis Vasilakis // Date: 9/6/2015 // www.ardumotive.com */


const int buzzer = 6; //buzzer to arduino pin 9
byte state = 0;

void setup(){
 
  pinMode(buzzer, OUTPUT); // Set buzzer - pin 9 as an output

}

void loop(){
  if (state == 0){
    tone(buzzer, 3124); // Send 1KHz sound signal...
    state = 1;
  }
//  delay(1000);        // ...for 1 sec
  if (state == 1){
    noTone(buzzer); // Send 1KHz sound signal...
    state = 0;
  }
  
}
