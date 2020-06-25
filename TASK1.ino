int pot=A0;
int val;
void setup()
{ pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
 Serial.begin(9600);
}

void loop()
{
  val=analogRead(pot);
  Serial.println(val);
  
digitalWrite(6, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(3,LOW);
}
