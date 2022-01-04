float height = 0;
float weight = 0;
String firststring;
String secondstring;
float x = 0;
void setup() {
  Serial.begin(115200);
  Serial.println("What is your weight");
}

void loop() {
  
  if ((weight==0) && Serial.available()){
    firststring = Serial.readString();
    weight = firststring.toFloat();
    Serial.println("What is your height");
  }
  if ((weight>0) && Serial.available()) {
    secondstring = Serial.readString();
    height = secondstring.toFloat();
    Serial.print("your BMI is:");
    x = (weight/(height*height));

    Serial.println (x);
    if (x<16) {Serial.println("your are severly underweight");}

    else if (16<=x && x<=18.4) {Serial.println("you are underweight");}

    else if (18.5<=x && x<=24.9) {Serial.println("you are normal");}

    else if (25<=x && x<=29.9) {Serial.println("you are overweight");}

    else if (30<=x && x<=34.9) {Serial.println("you are moderately obese");}

    else if (35<=x && x<=39.9) {Serial.println("you are severely obese");}

    else if (x>=40) {Serial.println("you are morbidly obese");}
    }


}



