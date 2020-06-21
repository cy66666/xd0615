int I,j,n=0,x,y=0;

byte income[100]={0};

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

void loop()

{

  if(Serial.available()>0)

  {

    while(Serial.available())//输入一串数字

	{

      income[n]=Serial.read();

      n++;

      delay(2);

 	}

    digitalWrite(6,HIGH);

  	digitalWrite(7,HIGH);

    digitalWrite(8,HIGH);

  	digitalWrite(9,HIGH);   

 	digitalWrite(10,HIGH);

    digitalWrite(11,HIGH);

    for(I=0;i<n;i++)

    {

      income[I]=income[I]-'0';

    }

    while(1)//开启循环

    {

      for(I=0;i<n;i++)

      {

        for(j=I;j<I+4;j++)//从第一个数字开始，每个数字依次作为第一个数字

        {//当最后一个数字作为第一个之后，下一次开启另一轮循环

          x=j;

          if(x>=n)//如果当前数字序号大于总个数则从第一个重新开始

          {

            x-=n;

          }

     	  digitalWrite(y+8,LOW);

    

