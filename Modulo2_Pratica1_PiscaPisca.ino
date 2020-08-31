int botao = 2;
int ledA = 8;
int ledB = 4;
int ledC = 5;
int ledD = 6;
int ledE = 7;
int ledF = 8;
int posicaoSequencia;

void setup() 
{
  posicaoSequencia = 0;
  pinMode(botao,INPUT);

  pinMode(botao, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(botao), MudaSequencia, RISING);
    
  pinMode(ledA,OUTPUT);
  pinMode(ledB,OUTPUT);
  pinMode(ledC,OUTPUT);
  pinMode(ledD,OUTPUT);
  pinMode(ledE,OUTPUT);
  pinMode(ledF,OUTPUT);

}

void MudaSequencia()
{
  if (posicaoSequencia > 5)
  {
    posicaoSequencia = 0; 
  }
  else
  {
    posicaoSequencia += 1; 
  }
}

void loop() 
{
   switch(posicaoSequencia)
  {
    case 1:
    Sequencia(200);
    break;
    
    case 2:
    Sequencia(100);
    break;

    case 3:
    SequenciaDois(50);
    break;

    case 4:
    SequenciaDois(200);
    break;

    case 5:
    SequenciaDois(500);
    break;
  }
}

void Sequencia(int delayTime)
{
  digitalWrite(ledA,HIGH);
  digitalWrite(ledB,HIGH);
  digitalWrite(ledC,HIGH);
  digitalWrite(ledD,HIGH);
  digitalWrite(ledE,HIGH);
  digitalWrite(ledF,HIGH);  

  delay(delayTime);

  digitalWrite(ledA,LOW);
  digitalWrite(ledB,LOW);
  digitalWrite(ledC,LOW);
  digitalWrite(ledD,LOW);
  digitalWrite(ledE,LOW);
  digitalWrite(ledF,LOW);

  delay(delayTime);
}

void SequenciaDois(int SecondDelay)
{
  digitalWrite(ledA,HIGH);
  delay(SecondDelay);

  digitalWrite(ledB,HIGH);
  delay(SecondDelay);

  digitalWrite(ledC,HIGH);
  delay(SecondDelay);

  digitalWrite(ledD,HIGH);
  delay(SecondDelay); 

  digitalWrite(ledE,HIGH);
  delay(SecondDelay);

  digitalWrite(ledF,HIGH);
  delay(SecondDelay);

  digitalWrite(ledA,LOW);
  delay(SecondDelay);
  
  digitalWrite(ledB,LOW);
  delay(SecondDelay);
  
  digitalWrite(ledC,LOW);
  delay(SecondDelay);
  
  digitalWrite(ledD,LOW);
  delay(SecondDelay);

  digitalWrite(ledE,LOW);
  delay(SecondDelay);

  digitalWrite(ledF,LOW);
  Pdelay(SecondDelay);
}
