void digit1_clear()
{
  digitalWrite(a,0);
  digitalWrite(b,0);
  digitalWrite(c,0);
  digitalWrite(d,0);
  digitalWrite(e,0);
  digitalWrite(f,0);
  digitalWrite(g,0);
  
}

void digit1_zero()
{
  digitalWrite(b,1);
  digitalWrite(c,1);
  digitalWrite(a,1);
  digitalWrite(d,1);
  digitalWrite(e,1);
  digitalWrite(f,1);
}

void digit1_one()
{
  digitalWrite(b,1);
  digitalWrite(c,1);
}

void digit1_two()
{
  digitalWrite(b,1);
  digitalWrite(a,1);
  
  digitalWrite(g,1);
  digitalWrite(e,1);
  
  digitalWrite(d,1);
}

void digit1_three()
{
  digitalWrite(b,1);
  digitalWrite(a,1);
  
  digitalWrite(g,1);
  digitalWrite(c,1);
  
  digitalWrite(d,1);
}

void digit1_four()
{
  digitalWrite(f,1);
  digitalWrite(g,1);
  
  digitalWrite(b,1);
  digitalWrite(c,1);
  
}

void digit1_five()
{
  digitalWrite(f,1);
  digitalWrite(a,1);
  
  digitalWrite(g,1);
  digitalWrite(c,1);
  
  digitalWrite(d,1);
}

void digit1_six()
{
  digitalWrite(f,1);
  digitalWrite(a,1);
  
  digitalWrite(g,1);
  digitalWrite(c,1);
  
  digitalWrite(d,1);
  digitalWrite(e,1);
}

void digit1_seven()
{
  digitalWrite(a,1);
  
  digitalWrite(b,1);
  digitalWrite(c,1);
  
}

void digit1_eight()
{
  digitalWrite(f,1);
  digitalWrite(a,1);
  
  digitalWrite(g,1);
  digitalWrite(c,1);
  
  digitalWrite(d,1);
  digitalWrite(e,1);
  digitalWrite(b,1);
}

void digit1_nine()
{
  digitalWrite(f,1);
  digitalWrite(a,1);
  
  digitalWrite(g,1);
  digitalWrite(c,1);
  
  digitalWrite(d,1);
  digitalWrite(b,1);
}


void digit1(int val)
{
  if(val==0)
  {
    digit1_clear();
    digit1_zero();
  }
  else if(val==1)
  {
    digit1_clear();
    digit1_one();
  }
  else if(val==2)
  {
    digit1_clear();
    digit1_two();
  }
  
  else if(val==3)
  {
    digit1_clear();
    digit1_three();
  }

  
  else if(val==4)
  {
    digit1_clear();
    digit1_four();
  }
  
  else if(val==5)
  {
    digit1_clear();
    digit1_five();
  }
  
  else if(val==6)
  {
    digit1_clear();
    digit1_six();
  }
  
  else if(val==7)
  {
    digit1_clear();
    digit1_seven();
  }
  
  else if(val==8)
  {
    digit1_clear();
    digit1_eight();
  }
  
  else if(val==9)
  {
    digit1_clear();
    digit1_nine();
  }
}

