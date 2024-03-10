#define ForwardLeft PORTB.B0
#define BackwardLeft PORTB.B1
#define ForwardRight PORTB.B2
#define BackwardRight PORTB.B3

#define Right PORTA.B1
#define Left PORTA.B2

#define _XTAL_FREQ   20000000

void main() 
{
     TRISA.B1 = 1;
     TRISA.B2 = 1;

     TRISB = 0X00;

     while(1) // Black = 1, White = 0
     {
             if(Left == 0 && Right == 0) // Mobot: Move Forward
             {
              ForwardLeft = 1;
              BackwardLeft = 0;
              ForwardRight = 1;
              BackwardRight = 0;
              Delay_ms(10);

              ForwardLeft = 0;
              BackwardLeft = 0;
              ForwardRight = 0;
              BackwardRight = 0;
              Delay_ms(30);
             }

             else if(Left == 0 && Right == 1) // Mobot: Turn Right
             {
              ForwardLeft = 1;
              BackwardLeft = 0;
              ForwardRight = 0;
              BackwardRight = 1;
              Delay_ms(30);

              ForwardLeft = 0;
              BackwardLeft = 0;
              ForwardRight = 0;
              BackwardRight = 0;
              Delay_ms(20);
             }

             else if(Left == 1 && Right == 0) // Mobot: Turn Left
             {
              ForwardLeft = 0;
              BackwardLeft = 1;
              ForwardRight = 1;
              BackwardRight = 0;
              Delay_ms(30);

              ForwardLeft = 0;
              BackwardLeft = 0;
              ForwardRight = 0;
              BackwardRight = 0;
              Delay_ms(20);
             }

             else // Mobot: Stop
             {
              ForwardLeft = 0;
              BackwardLeft = 0;
              ForwardRight = 0;
              BackwardRight = 0;
              Delay_ms(15);

              ForwardLeft = 0;
              BackwardLeft = 1;
              ForwardRight = 0;
              BackwardRight = 1;
              Delay_ms(10);
             }
     }
}
