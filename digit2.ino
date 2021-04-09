void digit2_clear()
{
  digitalWrite(h,0);
  digitalWrite(i,0);
  digitalWrite(j,0);
  digitalWrite(k,0);
  digitalWrite(l,0);
  digitalWrite(m,0);
  digitalWrite(n,0);
  
}

void digit2_zero()
{
  digitalWrite(h,1);
  digitalWrite(i,1);
  digitalWrite(j,1);
  digitalWrite(k,1);
  digitalWrite(l,1);
  digitalWrite(m,1);
}

void digit2_one()
{
  digitalWrite(i,1);
  digitalWrite(j,1);
}

void digit2_two()
{
  digitalWrite(h,1);
  digitalWrite(i,1);
  
  digitalWrite(n,1);
  digitalWrite(l,1);
  
  digitalWrite(k,1);
}

void digit2_three()
{
  digitalWrite(h,1);
  digitalWrite(i,1);
  
  digitalWrite(k,1);
  digitalWrite(j,1);
  
  digitalWrite(n,1);
}

void digit2_four()
{
  digitalWrite(m,1);
  digitalWrite(i,1);
  
  digitalWrite(n,1);
  digitalWrite(j,1);
  
}

void digit2_five()
{
  digitalWrite(h,1);
  digitalWrite(j,1);
  
  digitalWrite(n,1);
  
  digitalWrite(k,1);
  digitalWrite(m,1);
}

void digit2_six()
{
  digitalWrite(h,1);
  digitalWrite(m,1);
  
  digitalWrite(n,1);
  digitalWrite(l,1);
 
  digitalWrite(j,1);
  digitalWrite(k,1);
}

void digit2_seven()
{
  digitalWrite(j,1);
  
  digitalWrite(h,1);
  digitalWrite(i,1);
  
}

void digit2_eight()
{
  digitalWrite(h,1);
  digitalWrite(i,1);
  
  digitalWrite(j,1);
  digitalWrite(k,1);
  
  digitalWrite(l,1);
  digitalWrite(m,1);
  digitalWrite(n,1);
}

void digit2_nine()
{
  digitalWrite(h,1);
  digitalWrite(i,1);
  
  digitalWrite(j,1);
  digitalWrite(k,1);
  
  digitalWrite(n,1);
  digitalWrite(m,1);
}


void digit2(int val)
{
  if(val==0)
  {
    digit2_clear();
    digit2_zero();
  }
  else if(val==1)
  {
    digit2_clear();
    digit2_one();
  }
  else if(val==2)
  {
    digit2_clear();
    digit2_two();
  }
  
  else if(val==3)
  {
    digit2_clear();
    digit2_three();
  }

  
  else if(val==4)
  {
    digit2_clear();
    digit2_four();
  }
  
  else if(val==5)
  {
    digit2_clear();
    digit2_five();
  }
  
  else if(val==6)
  {
    digit2_clear();
    digit2_six();
  }
  
  else if(val==7)
  {
    digit2_clear();
    digit2_seven();
  }
  
  else if(val==8)
  {
    digit2_clear();
    digit2_eight();
  }
  
  else if(val==9)
  {
    digit2_clear();
    digit2_nine();
  }
}
