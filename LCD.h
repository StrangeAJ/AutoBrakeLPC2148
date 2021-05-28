#define bit(x) (1<<x)
void lcd_init();
unsigned char a;
void cmd(unsigned char a);
void dat(unsigned char b);
void show(unsigned char *s);
void lcd_delay();
void lcd_init()
{
    cmd(0x38);
    cmd(0x0e);
    cmd(0x06);
    cmd(0x0c);
    cmd(0x80);
}
void cmd(unsigned char a)
{
    IO0PIN &= 0x00;
    IO0PIN|=(a<<16);
    IO0CLR|=bit(10);                   //rs=0
    IO0CLR|=bit(12);                   //rw=0
    IO0SET|=bit(13);                    //en=1
    lcd_delay();
    IO0CLR|=bit(13);                    //en=0
}
void dat(unsigned char b)
{
    IO0PIN &= 0x00;
    IO0PIN|=(b<<16);
    IO0SET|=bit(10);                   //rs=1
    IO0CLR|=bit(12);                   //rw=0
    IO0SET|=bit(13);                    //en=1
    lcd_delay();
    IO0CLR|=bit(13);                    //en=0
}
void show(unsigned char *s)
{
    while(*s) {
        dat(*s++);
    }
}
void lcd_delay(){
    unsigned int i;
    for(i=0;i<=1000;i++);}
