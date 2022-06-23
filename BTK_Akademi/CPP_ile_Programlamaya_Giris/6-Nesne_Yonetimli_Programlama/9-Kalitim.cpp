#include <iostream>


class Silah{
    public:
        std::string isim;
        int mermiKapasitesi;
}

class Ak47 : public Silah{
    public:
        bool seriTek;
        double kayisUzunlugu;
        bool durbun;

        void ateset(){
            ///
        }
}

class Pistol : public Silah{
    public:
        int kurmaKoluDeseni;

        void ateset(){
                ///
            }
}

class M4A1 : public Silah{
    public:
        bool seriTek;
        double kayisUzunlugu;
        int kurmaPozisyonu;

        void ateset(){
                ///
            }
}


int main(){
    Ak47 ak47;
    ak47_1.isim= "AK47 Yeni Dizayn";

    M4A1 m1;
    m1.isim= "M1A1 Yeni Silah";

    return 0;
}
