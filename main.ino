
bool estadoLED=false; 

#define led1 13
#define led2 12
#define led3 11

void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  Serial.begin(9600);
 
}

void loop()
{
  
  if(Serial.available()>0){
  char opt;
  opt = Serial.read();
    if(opt == '1'){
      
    estadoLED = !estadoLED;
    digitalWrite(led3, estadoLED ? HIGH : LOW);
    }
   
    if(opt == '2'){
      estadoLED = !estadoLED;
   	  digitalWrite(led2, estadoLED ? HIGH : LOW);
     
    }
    
    if(opt == '3'){
      estadoLED = !estadoLED;
   	  digitalWrite(led1, estadoLED ? HIGH : LOW);
      
    }
    
    if(opt == '4'){
      estadoLED = !estadoLED;
   	  digitalWrite(led1, estadoLED ? HIGH : LOW);
      digitalWrite(led2, estadoLED ? HIGH : LOW);
      digitalWrite(led3, estadoLED ? HIGH : LOW);
       ;
    }
    
    if(opt == '5'){
      
       digitalWrite(led1, LOW);
       digitalWrite(led2, HIGH);
       digitalWrite(led3, LOW);
      
      delay(1000);
      
      digitalWrite(led1, HIGH);
       digitalWrite(led2, LOW);
       digitalWrite(led3, HIGH);
      
      delay(1000);
      
       digitalWrite(led1, LOW);
       digitalWrite(led2, HIGH);
       digitalWrite(led3, LOW);
      
      delay(1000);
    }
  
  };
  
  
     
  
  
  
}