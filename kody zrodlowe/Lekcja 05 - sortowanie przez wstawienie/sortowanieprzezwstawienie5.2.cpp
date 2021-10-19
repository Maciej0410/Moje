  /* przedstawienie algorytmu sortowania przez wstawienie */
    tab[0] tab[1] tab[2] tab[3] tab[4]
      4      3      8      5      2
  
              "RUNDA"  I
   ile jest rowne 5 (wielkoœæ tablicy)
   j przypisujemy ile - 2, czyli 5 - 2 = 3 
   x przypisujemy tab[j] czyli tab[3] = 5 
   i przypisujemy j + 1 czyli 3 +  1 = 4 
   
   Sprawdzamy warunek
    ( i < ile ) I ( x > tab[i] )  i = 4, czyli
    ( 4 < 5 ) I ( 5 > 2)
            PRAWDA
   tab[i-1], czyli tab[4-1], czyli tab[3] (wart. 5) przypisujemy 2
   
   
             //STAN TABLICY
    tab[0] tab[1] tab[2] tab[3] tab[4]
      7      3      8      2      2   
   
   inkrementacja i z czego wynika, ¿e i = 5
       Sprawdzamy warunek
       Czy 5 < 5
       FA£SZ
   
   tab[i-1], czyli tab[5-1] przypisujemy x, czyli 5
   
          //STAN TABLICY
    tab[0] tab[1] tab[2] tab[3] tab[4]
      7      3      8      2      5    
      
          "RUNDA" II

       //STAN TABLICY          
    tab[0] tab[1] tab[2] tab[3] tab[4]
      7      3      8      2      5   
      
    j dekrementujemy czyli j = 2
    
    x przypisjuemy tab[j], czyli tab[2], x = 8
    
    i przypisujemy j + 1, czyli 2 + 1 = 3; i = 3;
    
     Sprawdzamy warunek
     Czy ( 3 < 5 ) I ( 8 > 2)
            PRAWDA
            tab[3-1], czyli tab[2] przypisujemy 2

              //STAN TABLICY     
     tab[0] tab[1] tab[2] tab[3] tab[4]
      7      3       2      2     5    
      
     inkrementujemy i, czyli i = 4
     
     Sprawdzamy warunek poraz drugi
     
       Czy ( 4 < 5 ) I ( 8 > 5 )
                   PRAWDA
                   
      tab[i-1], czyli tab[3] przypisujemy 5

              //STAN TABLICY      
     tab[0] tab[1] tab[2] tab[3] tab[4]
      7      3      2      5      5    
      
      inkrementujemy i, czyli i = 5
      
      Sprawdzamy warunek poraz trzeci
      
        Czy ( 5 < 5 ) I ( 8 > tab[5] ) //pierwszy warunek fa³asz, a tab[5] nie istnieje tam s¹ flaki ;)
                   FA£SZ
                   
        tab[i-1] przypisujemy x, czyli tab[4] przypisujemy 8
        
      tab[0] tab[1] tab[2] tab[3] tab[4]
      7      3      2      5      8
      
      I TAK DALEJ A¯ OTRZYMAMY:
              
      tab[0] tab[1] tab[2] tab[3] tab[4]
        2      3       5      7     8
      
  
