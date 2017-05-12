int generate_random(int min, int max)
{ 
    static bool seed = true;+
    if (seed) {srand (time(0)); seed = false;
}
   
return rand() % (max-min +1) +min;
    
    
