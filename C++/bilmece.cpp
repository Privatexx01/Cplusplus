#include<iostream>
#include<locale.h> 
#include<string>
using namespace std;
int main()
{
   setlocale(LC_ALL, "Turkish"); 
   string ad,soyad;
   cout << "L�tfen ad�n� ve soyad�n� gir" << endl;
   cout << "ad:";
   getline(cin, ad);
   cout<< "soyad:";
   getline(cin, soyad);
   cout << "Ho� Geldin!!! " << endl;
   cout << endl;
   cout << "----------B�LMECELER----------" << endl;
   cout << endl;
   cout << "1.Ya�� yok ba�� yok adam olmu� s�z keser."<<endl;
   while (true)
   {
       string cevap;
       cout << "cevab�n�z:";
       cin >> cevap;

       if (cevap == "nokta")
       {
           cout << "Do�ru cevap...Tebrikler!!!";
           break;
       }
       else
       {
          cout << "Yanl�� cevap...Tekrar deneyiniz!!!";
          cout << endl;
       }   
 
   }
  
   cout << endl;
   cout << endl;
   cout << "2.Kolu var, eli yok, karn� yar�k karn� yok." << endl;
   while (true)
   {
       string cevap1;
       cout << "cevab�n�z:";
       cin >> cevap1;

       if (cevap1 == "ceket")
       {
          cout << "Do�ru cevap...Tebrikler!!!";
          break;
       }
       else
          cout << "Yanl�� cevap...Tekrar deneyiniz!!!";
          cout << endl;
   }
   cout << endl;
   cout << endl;
   cout << "3.Beyaz sarayda sar� padi�ah." << endl;
   while (true)
   {
       string cevap3;
       cout << "cevab�n�z:";
       cin >> cevap3;

       if (cevap3 == "yumurta")
       {
           cout << "Do�ru cevap...Tebrikler!!!";
           break;
       }
       else
           cout << "Yanl�� cevap...Tekrar deneyiniz!!!";
       cout << endl;
   }
   cout << endl;
   cout << endl;
   cout << "4.Bir a�ac� oymu�lar i�ine d�nyay� koymu�lar." << endl;
   while (true)
   {
       string cevap4;
       cout << "cevab�n�z:";
       cin >> cevap4;

       if (cevap4 == "televizyon")
       {
           cout << "Do�ru cevap...Tebrikler!!!";
           break;
       }
       else
           cout << "Yanl�� cevap...Tekrar deneyiniz!!!";
       cout << endl;
   }
   cout << endl;
   cout << endl;
   cout << "5.Yar�m ka��k duvara yap���k." << endl;
   while (true)
   {
       string cevap5;
       cout << "cevab�n�z:";
       cin >> cevap5;

       if (cevap5 == "kulak")
       {
           cout << "Do�ru cevap...Tebrikler!!!";
           break;
       }
       else
           cout << "Yanl�� cevap...Tekrar deneyiniz!!!";
       cout << endl;
   }
   cout << endl;
   cout << endl;
   cout << "Tebrikler " << ad << " testi bitirdin...";
   cout << endl;
   
   
}