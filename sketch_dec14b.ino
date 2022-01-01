int NUMBER;
int NUM;

#define RED 13
#define YELLOW 12
#define BLUE 11
#define GREEN 10
#define WHITE 9

#define pinA 2
#define pinB 4
void setup() {
  int NUMBER=0;
  int NUM=0;

  pinMode(pinA,INPUT_PULLUP);
  pinMode(pinB,INPUT_PULLUP);

  
  pinMode(RED, OUTPUT);
  pinMode(YELLOW, OUTPUT);
  pinMode(BLUE, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(WHITE, OUTPUT);

  digitalWrite(RED, LOW); 
  digitalWrite(YELLOW, LOW); 
  digitalWrite(BLUE, LOW); 
  digitalWrite(GREEN, LOW); 
  digitalWrite(WHITE, LOW);
}

void loop() {
  if(digitalRead(pinA)==LOW){
    NUM++;
  }else if(digitalRead(pinB)==LOW){
    NUM--;
  }else if(NUM==32){
    NUM=0;
  }
  NUMBER=NUM;
  
  if((NUMBER%2)==1){
    digitalWrite(RED, HIGH);
    NUMBER--;
    NUMBER=NUMBER/2;
  }else{
    digitalWrite(RED, LOW);
    NUMBER=NUMBER/2;
  }

  if((NUMBER%2)==1){
    digitalWrite(YELLOW, HIGH);
    NUMBER--;
    NUMBER=NUMBER/2;
  }else{
    digitalWrite(YELLOW, LOW);
    NUMBER=NUMBER/2;
  }

  if((NUMBER%2)==1){
    digitalWrite(BLUE, HIGH);
    NUMBER--;
    NUMBER=NUMBER/2;
  }else{
    digitalWrite(BLUE, LOW);
    NUMBER=NUMBER/2;
  }

  if((NUMBER%2)==1){
    digitalWrite(GREEN, HIGH);
    NUMBER--;
    NUMBER=NUMBER/2;
  }else{
    digitalWrite(GREEN, LOW);
    NUMBER=NUMBER/2;
  }

  if((NUMBER%2)==1){
    digitalWrite(WHITE, HIGH);
    NUMBER--;
    NUMBER=NUMBER/2;
  }else{
    digitalWrite(WHITE, LOW);
    NUMBER=NUMBER/2;
  }
  delay(200);
}
