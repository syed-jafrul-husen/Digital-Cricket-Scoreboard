
void digit0_clear()
{
  digitalWrite(aa,0);
  digitalWrite(ab,0);
  digitalWrite(ac,0);
  digitalWrite(ad,0);
  digitalWrite(ae,0);
  digitalWrite(af,0);
  digitalWrite(ag,0);
}

void digit0_zero()
{
  digitalWrite(aa,1);
  digitalWrite(ab,1);
  digitalWrite(ac,1);
  digitalWrite(ad,1);
  digitalWrite(ae,1);
  digitalWrite(af,1);
}

void digit0_one()
{
  digitalWrite(ab,1);
  digitalWrite(ac,1);
}

void digit0_two()
{
  digitalWrite(aa,1);
  digitalWrite(ab,1);
  
  digitalWrite(ag,1);
  digitalWrite(ae,1);
  
  digitalWrite(ad,1);
}

void digit0_three()
{
  digitalWrite(ab,1);
  digitalWrite(aa,1);
  
  digitalWrite(ag,1);
  digitalWrite(ac,1);
  
  digitalWrite(ad,1);
}

void digit0_four()
{
  digitalWrite(af,1);
  digitalWrite(ag,1);
  
  digitalWrite(ab,1);
  digitalWrite(ac,1);
  
}

void digit0_five()
{
  digitalWrite(af,1);
  digitalWrite(aa,1);
  
  digitalWrite(ag,1);
  digitalWrite(ac,1);
  
  digitalWrite(ad,1);
}

void digit0_six()
{
  digitalWrite(af,1);
  digitalWrite(aa,1);
  
  digitalWrite(ag,1);
  digitalWrite(ac,1);
  
  digitalWrite(ad,1);
  digitalWrite(ae,1);
}

void digit0_seven()
{
  digitalWrite(aa,1);
  
  digitalWrite(ab,1);
  digitalWrite(ac,1);
  
}

void digit0_eight()
{
  digitalWrite(af,1);
  digitalWrite(aa,1);
  
  digitalWrite(ag,1);
  digitalWrite(ac,1);
  
  digitalWrite(ad,1);
  digitalWrite(ae,1);
  digitalWrite(ab,1);
}

void digit0_nine()
{
  digitalWrite(af,1);
  digitalWrite(aa,1);
  
  digitalWrite(ag,1);
  digitalWrite(ac,1);
  
  digitalWrite(ad,1);
  digitalWrite(ab,1);
}


void digit0(int val)
{
  if(val==0)
  {
    digit0_clear();
    digit0_zero();
  }
  else if(val==1)
  {
    digit0_clear();
    digit0_one();
  }
  else if(val==2)
  {
    digit0_clear();
    digit0_two();
  }
  
  else if(val==3)
  {
    digit0_clear();
    digit0_three();
  }

  
  else if(val==4)
  {
    digit0_clear();
    digit0_four();
  }
  
  else if(val==5)
  {
    digit0_clear();
    digit0_five();
  }
  
  else if(val==6)
  {
    digit0_clear();
    digit0_six();
  }
  
  else if(val==7)
  {
    digit0_clear();
    digit0_seven();
  }
  
  else if(val==8)
  {
    digit0_clear();
    digit0_eight();
  }
  
  else if(val==9)
  {
    digit0_clear();
    digit0_nine();
  }
}
