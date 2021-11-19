#include <string>

using namespace std;

class Fajl {
private:
   string nev;
   string kiterjesztes;
   string szoveg;

public:
   Fajl(){
       nev = "file";
       kiterjesztes = "txt";
       szoveg = "";
   }

   Fajl(string nev, string kiterjesztes, string szoveg) : nev(nev), kiterjesztes(kiterjesztes), szoveg(szoveg) {}

   string get_nev() {
       return nev;
   }

   string get_kiterjesztes() {
       return kiterjesztes;
   }

   string get_szoveg() {
       return szoveg;
   }
};
/*
#include <string>

using namespace std;

class Fajl {
private:
   string nev;
   string kiterjesztes;
   string szoveg;

public:
   Fajl(): nev("file"), kiterjesztes("txt"), szoveg("") {}

   Fajl(string nev, string kiterjesztes, string szoveg) : nev(nev), kiterjesztes(kiterjesztes), szoveg(szoveg) {}

   string get_nev() {
       return nev;
   }

   string get_kiterjesztes() {
       return kiterjesztes;
   }

   string get_szoveg() {
       return szoveg;
   }
};
*/

