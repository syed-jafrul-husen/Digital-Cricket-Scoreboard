void digit3_clear()
{
  digitalWrite(o,0);
  digitalWrite(p,0);
  digitalWrite(q,0);
  digitalWrite(r,0);
  digitalWrite(s,0);
  digitalWrite(t,0);
  digitalWrite(u,0);
}

void digit3_zero()
{
  digitalWrite(o,1);
  digitalWrite(p,1);
  digitalWrite(q,1);
  digitalWrite(r,1);
  digitalWrite(s,1);
  digitalWrite(t,1);
}

void digit3_one()
{
  digitalWrite(p,1);
  digitalWrite(q,1);
}

void digit3_two()
{
  digitalWrite(o,1);
  digitalWrite(p,1);
  
  digitalWrite(u,1);
  digitalWrite(s,1);
  
  digitalWrite(r,1);
}

void digit3_three()
{
  digitalWrite(o,1);
  digitalWrite(p,1);
  
  digitalWrite(u,1);
  digitalWrite(q,1);
 
  digitalWrite(r,1);
}

void digit3_four()
{
  digitalWrite(t,1);
  digitalWrite(p,1);
  
  digitalWrite(u,1);
  digitalWrite(q,1);
  
}

void digit3_five()
{
  digitalWrite(o,1);
  digitalWrite(t,1);
  
  digitalWrite(u,1);
  
  digitalWrite(q,1);
  digitalWrite(r,1);
}

void digit3_six()
{
  digitalWrite(o,1);
  digitalWrite(u,1);
  
  digitalWrite(t,1);
  digitalWrite(q,1);
 
  digitalWrite(r,1);
  digitalWrite(s,1);
}

void digit3_seven()
{
  digitalWrite(o,1);
  
  digitalWrite(p,1);
  digitalWrite(q,1);
  
}

void digit3_eight()
{
  digitalWrite(o,1);
  digitalWrite(p,1);
  
  digitalWrite(q,1);
  digitalWrite(r,1);
  
  digitalWrite(s,1);
  digitalWrite(t,1);
  digitalWrite(u,1);
}

void digit3_nine()
{
  digitalWrite(o,1);
  digitalWrite(p,1);
  
  digitalWrite(q,1);
  digitalWrite(r,1);
  
  digitalWrite(u,1);
  digitalWrite(t,1);
}


void digit3(int val)
{
  if(val==0)
  {
    digit3_clear();
    digit3_zero();
  }
  else if(val==1)
  {
    digit3_clear();
    digit3_one();
  }
  else if(val==2)
  {
    digit3_clear();
    digit3_two();
  }
  
  else if(val==3)
  {
    digit3_clear();
    digit3_three();
  }

  
  else if(val==4)
  {
    digit3_clear();
    digit3_four();
  }
  
  else if(val==5)
  {
    digit3_clear();
    digit3_five();
  }
  
  else if(val==6)
  {
    digit3_clear();
    digit3_six();
  }
  
  else if(val==7)
  {
    digit3_clear();
    digit3_seven();
  }
  
  else if(val==8)
  {
    digit3_clear();
    digit3_eight();
  }
  
  else if(val==9)
  {
    digit3_clear();
    digit3_nine();
  }
}
