int generate_random(int min, int max)
{ 
    static bool seed = true;
    
      srand(time(0));
      return rand() % (max-min +1) +min;
    
    
