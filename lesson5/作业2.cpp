void setup()

{

  pinMode(2, OUTPUT);

  pinMode(3, OUTPUT);  

  pinMode(4, OUTPUT);

  pinMode(5, OUTPUT);

  pinMode(6, OUTPUT);

  pinMode(7, OUTPUT);

  pinMode(8, OUTPUT);

  pinMode(9, OUTPUT);

  pinMode(10, OUTPUT);

  pinMode(11, OUTPUT);

  Serial.begin(9600);

}

int I;

byte income[4]={0};

void loop()

{

  if(Serial.available()>0)

  {

    digitalWrite(6,HIGH);

  	digitalWrite(7,HIGH);

    digitalWrite(8,HIGH);

  	digitalWrite(9,HIGH);   

 	digitalWrite(10,HIGH);

    digitalWrite(11,HIGH);

    for(I=0;i<4;i++)

    {

      income[I]=Serial.read();

      income[I]=income[I]-'0';

      digitalWrite(I+8,LOW);

      digitalWrite(2,income[I]&0x1);

   	  digitalWrite(3,(income[I]>>1)&0x1);

      digitalWrite(4,(income[I]>>2)&0x1);

      digitalWrite(5,(income[I]>>3)&0x1);

      delay(10);

      digitalWrite(I+8,HIGH);

    }

  }

}

