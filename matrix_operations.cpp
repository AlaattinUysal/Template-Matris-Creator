
#include <iostream>
#include <string>
using namespace std;

template <class T>
class Matris {
public:
    int satir;   
    int sutun;    
    T* matris;
				
    
    Matris(int s, int su) : satir(s), sutun(su) {
        matris = new T[satir * sutun];  
        for (int i = 0; i < satir * sutun; i++) {
            matris[i] = 0.0;
        }
    }

 
    ~Matris() {
        delete[] matris;
    }

    
    void elemanlariGir() {
        cout << "Matris elemanlarini giriniz: " << endl;
        for (int i = 0; i < satir; i++) {
            for (int j = 0; j < sutun; j++) {
                cout << "Matris[" << i << "][" << j << "]: ";
                cin >> matris[i * sutun + j]; //Refereans girdiyi direkt belleğe yazar.
            }
        }
    }

    // Elemanları yazdırmak
    void elemanlariYazdir() const {
        cout << "Girilen matris: " << endl;
        for (int i = 0; i < satir; i++) {
            for (int j = 0; j < sutun; j++) {
                cout << matris[i * sutun + j] << " ";
            }
            cout << endl;
        }
    }
    
    // Ana köşegeni yazdıran fonksiyon
    void anaKosegenYazdir() const {
        cout << "Ana kosegen: ";
        for (int i = 0; i < satir; i++) {
            cout << matris[i * sutun + i] << " "; 
        }
        cout << endl;
    }

    // Ters köşegeni yazdıran fonksiyon
    void tersKosegenYazdir() const {
        cout << "Ters kosegen: ";
        for (int i = 0; i < satir; i++) {
            cout << matris[i * sutun + (sutun - i - 1)] << " "; 
        }
        cout << endl;
    }
};

template <class T>
class MatrisToplayici {
public:
    // Matris toplama fonksiyonu
    void toplamMatris(Matris<T>& m1, Matris<T>& m2) {
        if (m1.satir != m2.satir || m1.sutun != m2.sutun) {
            cout << "Matrisler toplanamaz!" << endl;
            return;
        }
        
        // Sonuç matrisi
        T* C = new T[m1.satir * m1.sutun];

        // Matris toplama işlemi
        for (int i = 0; i < m1.satir; i++) {
            for (int j = 0; j < m1.sutun; j++) {
                C[i * m1.sutun + j] = m1.matris[i * m1.sutun + j] + m2.matris[i * m2.sutun + j];
            }
        }

       
        cout << "Sonuc Matrisi (Eleman eleman toplama): "<<endl;
        for (int i = 0; i < m1.satir; i++) {
            for (int j = 0; j < m1.sutun; j++) {
                cout << C[i * m1.sutun + j] << " ";
            }
            cout << endl;
        }

        // Belleği serbest bırak
        delete[] C;
    }
};

int main() {
    int satir1, satir2;
    int sutun1, sutun2;
    
    
    
    cout << "1. Matrisin satir ve sutun sayisini giriniz: ";
    cin >> satir1 >> sutun1;    
    
    cout << "2. Matrisin satir ve sutun sayisini giriniz: ";
    cin >> satir2 >> sutun2;    
	
    Matris<int> matris1(satir1, sutun1);
    Matris<int> matris2(satir2, sutun2);

    // İlk matrisin elemanlarını gir
    cout << "1. matris icin elemanlari giriniz:" << endl;
    matris1.elemanlariGir();
    matris1.anaKosegenYazdir();  // Ana köşegen yazdır
    matris1.tersKosegenYazdir();  // Ters köşegen yazdır

    // İkinci matrisin elemanlarını gir
    cout << "2. matris icin elemanlari giriniz:" << endl;
    matris2.elemanlariGir();
    matris2.anaKosegenYazdir();  // Ana köşegen yazdır
    matris2.tersKosegenYazdir();  // Ters köşegen yazdır

    // Matris toplama işlemi
    MatrisToplayici<int> toplayici;
    toplayici.toplamMatris(matris1, matris2);  // Matrisleri topla ve sonucu yazdır

    return 0;
}
