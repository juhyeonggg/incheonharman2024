/*
 * test_07 uart.c
 *
 * Created: 2024-06-07 오전 10:40:42
 * Author : user
 */ 

#include <avr/io.h>
#include <stdio.h>
#include <avr/delay.h>

void initUART0()
{
	UBRR0H = 0;
	UBRR0L = 207;		// BAUDRATE : 9600 , "0" -> UART0
	
	UCSR0A |= 1 << U2X0;			// == 0000 0010b 2배속 설정, SET할때 OR EQUAL 사용(|=) => bit shift
									// 9600 N81 => N:패리티비트, 8: 데이터비트, 1: 스탑비트, 사실상 default값
										
	UCSR0B |= (1 << RXEN0)|(1 << TXEN0);	// Rx / Tx Enable 
	UCSR0C |= 0x06;		// Data bit : 8	  x11x
						// Stop bit : 1   0xxx					==>  0000 0110 그래서 0x06 => N81
}

void uPutc(char c)		//	
{
	/*while(1)									//  wait until data empty bit test
	{
		 UCSR0A & (1 << UDRE0) == 1) break;		
	}*/
	while(!(UCSR0A & (1 << UDRE0)));

	UDR0 = c;	 //	send
}

void uPuts(char *str)  // --> * : 포인터라는 표시
{
	while(*str) uPutc(*str++); // --> * : 포인터의 값 
	
	/*while(1)
	{
		if(*str == 0) break;
		uPutc(*str); 
		str++; // *str : value, str++ : pointer 연산
	}*/
}

unsigned char buf[1024];				// fprintf : file을 오픈해서 printf값을 출력, sprintf : string(문자열을 담을수있는 buf)의 값을 출력
void bPrint()
{
	uPuts(buf);
}

int main(void)
{
    /* Replace with your application code */
	initUART0();
	char a = '0';
	int i = 0;
	uPuts("안녕하세요....^^..\r\n"); // \r\n : CR/LF CR:커서가 맨앞으로 가기, LF: 줄바꾸기  
    while (1) 
    {
		//uPutc(a++);
		sprintf(buf, "ATmega128 터미널 출력 테스트 ... #%d\r\n", i++); bPrint();
		_delay_ms(1000);
		/*if (a == '9')
		{
			a = '0';
		}*/
    }
}

