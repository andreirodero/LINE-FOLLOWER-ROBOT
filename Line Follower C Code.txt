#define ForwardLeft PORTB.B0
#define BackwardLeft PORTB.B1
#define ForwardRight PORTB.B2
#define BackwardRight PORTB.B3

#define InnerRight PORTA.B1
#define InnerLeft PORTA.B2

#define _XTAL_FREQ   20000000


void main() {
     TRISA.B1 = 1;
     TRISA.B2 = 1;

     TRISB = 0X00;

     while(1) // Black = 1, White = 0
     {
             if(InnerLeft == 0 && InnerRight == 0) // Mobot: Move Forward
             {
              ForwardLeft = 1;
              BackwardLeft = 0;
              ForwardRight = 1;
              BackwardRight = 0;
              Delay_ms(5);
              
              ForwardLeft = 0;
              BackwardLeft = 0;
              ForwardRight = 0;
              BackwardRight = 0;
              Delay_ms(25);
             }

             else if(InnerLeft == 1 && InnerRight == 0) // Mobot: Turn Right
             {
              ForwardLeft = 1;
              BackwardLeft = 0;
              ForwardRight = 0;
              BackwardRight = 0;
              Delay_ms(5);

              ForwardLeft = 0;
              BackwardLeft = 0;
              ForwardRight = 0;
              BackwardRight = 0;
              Delay_ms(5);

             }

             else if(InnerLeft == 0 && InnerRight == 1) // Mobot: Turn Left
             {
              ForwardLeft = 0;
              BackwardLeft = 0;
              ForwardRight = 1;
              BackwardRight = 0;
              Delay_ms(5);

              ForwardLeft = 0;
              BackwardLeft = 0;
              ForwardRight = 0;
              BackwardRight = 0;
              Delay_ms(5);
             }
             
             else // Mobot: Stop
             {
              ForwardLeft = 0;
              BackwardLeft = 0;
              ForwardRight = 0;
              BackwardRight = 0;
              Delay_ms(20);
              
              ForwardLeft = 0;
              BackwardLeft = 1;
              ForwardRight = 0;
              BackwardRight = 1;
              Delay_ms(20);
             }
             
     }
}