 sensorMax =sensorValue;
    //����������������ֵ�����ֵ��Ϊ�����
    } 
  if (sensorMax >sensorValue) {
	sensorMax =sensorValue;
	//����������С�����ֵ�����ֵ��Ϊ����С 
  }
} 
digitalWrite(13,LOW) ;
//У׼��13������Ϊ�͵�ѹ���ر�UNO��LED��
}

void loop(){
	sensorValue=analogRead(sensorPin);//��ȡ����������ֵ 
	sensorValue=map(sensorValue,sensorMin,sensorMax,0,255); 
	//��map()����������������������С�����Χӳ�䵽0��255 
	sensorValue=constrain(sensorValue,0,255) ;
	//��constrain��ʽ��ӳ��󷵻�ֵ��0��255 
	analogWrite(ledPin,sensorValue) ;
	//����У׼��ֵ������LED�����������ǿ���仯 
} 
