 sensorMax =sensorValue;
    //若光敏电阻大于最大值，则该值成为新最大
    } 
  if (sensorMax >sensorValue) {
	sensorMax =sensorValue;
	//若光敏电阻小于最大值，则该值成为新最小 
  }
} 
digitalWrite(13,LOW) ;
//校准后将13号引脚为低电压，关闭UNO上LED灯
}

void loop(){
	sensorValue=analogRead(sensorPin);//读取光敏电阻器值 
	sensorValue=map(sensorValue,sensorMin,sensorMax,0,255); 
	//用map()方法，将光敏电阻器从最小到最大范围映射到0到255 
	sensorValue=constrain(sensorValue,0,255) ;
	//用constrain方式把映射后返回值在0到255 
	analogWrite(ledPin,sensorValue) ;
	//最终校准的值设置在LED是亮度随光线强弱变化 
} 
