#include <reg51.h>
sbit Led1=P2^0; 
sbit Led2=P2^1;
sbit Led3=P2^2;
sbit Led4=P2^3;//pin connected to toggle Led
sbit S1=P1^0;  //Pin connected to toggle led
sbit S2=P1^1;
sbit S3=P1^2;
sbit S4=P1^3;
void main()
{

    Led1=0;
		Led2=0;
		Led3=0;
		Led4=0;//configuring as output pin
    S1 = 1;
		S2 = 1;
		S3 = 1;
		S4 = 1;//Configuring as input pin
    while(1) //Continuous monitor the status of the switch.
    {
        if(S1 == 1 && S2 == 1 && S3 == 1  && S4 == 1 )
        {
            Led1 =1;
						Led2=1;
						Led3=1;
						Led4=1;//Led On
        }
        else if(S1 == 1 && S2 == 0 &&  S3 == 0 && S4==0)
        {
            Led1 =1;
						Led2=0;
						Led3=0;
						Led4=0;//Led Off
        }
				else if(S1 == 1 && S2 == 1 &&  S3 == 0 && S4==0)
        {
            Led1 =1;
						Led2=1;
						Led3=0;
						Led4=0;//Led Off
        }
				else if(S1 == 1 && S2 == 1 &&  S3 == 1 && S4==0)
        {
            Led1 =1;
						Led2=1;
						Led3=1;
						Led4=0;//Led Off
        }
				else if(S1 == 0 && S2 == 0 &&  S3 == 0 && S4==0)
        {
            Led1 =0;
						Led2=0;
						Led3=0;
						Led4=0;//Led Off
        }
    }
}