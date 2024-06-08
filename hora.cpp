 #include <iostream>
using namespace std ;

int main (void)
{
    int hh, mm, ss;
    cout << endl <<endl;
    cout << "la hora un segundo despues " << endl << endl;

    cout << "digite la hora, minutos , segundos ";
    cin >> hh >> mm >> ss;
    
    if (hh < 0 || hh > 23 || mm < 0 || mm > 59 || ss < 0 || ss > 59)
    cout << " Metiste una hora invalida "<< endl;

    else{   
       if(ss <= 58)
       ss = ss + 1 ;
       else{
        ss = 0;
        if(mm <= 58)
         mm = mm + 1;
         else{
             mm = 0;
             if(hh <= 22)
             hh = hh + 1;
             else 
             hh = 0;
         }
       }
    }
cout << " Un segundo despues, la hora es: "
 << setw(2) << setfill('0')
 << hh
  << ":"
   << mm
    << ":"
     << ss
      << endl << endl ;

cout << endl << endl;
return 0;
    


}