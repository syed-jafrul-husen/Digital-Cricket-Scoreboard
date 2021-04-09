int a=29;
int b=31;
int c=2;
int d=3;
int e=4;
int f=5;
int g=6;
int h=7;
int i=8;
int j=9;
int k=10;
int l=11;
int m=12;
int n=13;
int o=14;
int p=15;
int q=16;
int r=17;
int s=18;
int t=19;
int u=20;

int aa=21;
int ab=22;
int ac=23;
int ad=24;
int ae=25;
int af=26;
int ag=27;

int ex=28;

int cou,index,d1,d2,d3,nn;

int sc,wk;

void setup() {
  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(d,OUTPUT);
  pinMode(e,OUTPUT);
  pinMode(f,OUTPUT);
  pinMode(g,OUTPUT);
  pinMode(h,OUTPUT);
  pinMode(i,OUTPUT);
  pinMode(j,OUTPUT);
  pinMode(k,OUTPUT);
  pinMode(l,OUTPUT);
   pinMode(m,OUTPUT);
  pinMode(n,OUTPUT);
  pinMode(o,OUTPUT);
  pinMode(p,OUTPUT);
  pinMode(q,OUTPUT);
  pinMode(r,OUTPUT);
  pinMode(s,OUTPUT);
  pinMode(t,OUTPUT);
  pinMode(u,OUTPUT);
  
  pinMode(aa,OUTPUT);
  pinMode(ab,OUTPUT);
  pinMode(ac,OUTPUT);
   pinMode(ad,OUTPUT);
  pinMode(ae,OUTPUT);
  pinMode(af,OUTPUT);
  pinMode(ag,OUTPUT);
  
  pinMode(ex,OUTPUT);
  Serial.begin(9600);
  
  all_clear();
  sc=0;
  wk=0;
  score_print(sc);
  ss();
  digit0(wk);
}

void loop() {
  
  int x=analogRead(A0);
  int y=analogRead(A1);

  int w=analogRead(A2);
  int z=analogRead(A3);
  if(x>=500)
  {
    if(sc>0)
    {
      sc=sc-1;
      score_print(sc);
    }
    delay(200);
  }
  else if(y>=500)
  {
    if(sc<999)
    {
      sc=sc+1;
      score_print(sc);
    }
    delay(200);
  }

  if(w>=500)
  {
    if(wk>0)
    {
      
      wk=wk-1;
      digit0(wk);
    }
    delay(200);
  }
  else if(z>=500)
  {
    if(wk<9)
    {
      ss();
      wk=wk+1;
      digit0(wk);
    }
    else
    {
      s_clear();
      digit0_clear();
      wk=-1;
    }
    delay(200);
  }
  /*
  cou=-1;
  for(index=0;index<1000;index++)
  {
    if(index%100==0)
      cou++;
    d1=0;
    d2=0;
    d3=0;
    nn=index;
    d1=nn%10;
    nn/=10;
    d2=nn%10;
    nn/=10;
    d3=nn%10;
    nn/=10;
    
    digit1(d1);
    if(d2>0 || d3!=0)
      digit2(d2);
    if(d3>0)
      digit3(d3);
    delay(100);
    if(cou>=0)
    {
      ss();
      digit0(cou);
    }
    
  }
  */
}





void score_print(int val)
{
  
  digit1_clear();
  digit2_clear();
  digit3_clear();
  nn=val;
  d1=nn%10;
  nn/=10;
  d2=nn%10;
  nn/=10;
  d3=nn%10;
  nn/=10;
  Serial.print(d3);
  Serial.print(d2);
  Serial.println(d1);
  digit1(d1);
  if(d2>0 || d3!=0)
    digit2(d2);
  if(d3>0)
    digit3(d3);
  delay(100);
}


void s_clear()
{
  digitalWrite(ex,0);
}


void ss()
{
  digitalWrite(ex,1);
}

void all_clear()
{
  digit0_clear();
  digit1_clear();
  digit2_clear();
  digit3_clear();
  s_clear();
}

