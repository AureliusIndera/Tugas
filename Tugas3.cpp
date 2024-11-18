#include <iostream>
using namespace std;

//deklarasi fungsi
int faktorial(int n);
int permutasi(int n, int r);
int kombinasi(int n, int r);

int main ()
{
    int menu;
    char pilihan;
    do 
    {
        //menu
        cout << "\n==========MENU==========\n\n";
        cout << "1. Faktorial \n";
        cout << "2. Permutasi\n";
        cout << "3. Kombinasi\n";
        cout << "4. Exit\n";

        //pemilihan menu
        cout << "\nPilih menu (1-4) : "; 
        cin >> menu;

        //validasi menu
        if (menu < 1 || menu > 4) 
        {
            cout << "\nPilihan tidak valid";
            cout << "\nPilih menu yang benar\n";
            cin.clear();
            cin.ignore();
            continue;
        }

        //switch case menu
        switch (menu)
        {
            case 1 :
            {
                int n;
                cout << "\n==========Faktorial==========\n";
                cout << "Masukkan angka n : ";
                cin >> n;
                cout << "\nFaktorial dari " << n << " adalah " << faktorial(n) << endl;

                //kembali ke menu
                cout << "\n\nKembali ke menu? (y/n) : ";
                cin >> pilihan;
                if (pilihan == 'n' || pilihan == 'N') menu = 4;
                break;
            }

            case 2 :
            {
                int n, r;
                do
                {
                    cout << "\n==========Permutasi==========\n";
                    cout << "Rumus : \n";
                    cout << "P = n! / (n - r)!\n\n";
                    cout << "Nilai n harus lebih besar dari r, dan tidak boleh negatif\n\n";
                    cout << "Masukkan angka n : ";
                    cin >> n;
                    cout << "Masukkan angka r : ";
                    cin >> r;

                    //error handling
                    if (n < r || n < 0 || r < 0) continue;
                    else break;

                }while (true);
                cout << "\nPermutasi P (" << n << "," << r << ") adalah " << permutasi(n,r) << endl;

                //kembali ke menu
                cout << "\n\nKembali ke menu? (y/n) : ";

                cin >> pilihan;
                if (pilihan == 'n' || pilihan == 'N') menu = 4;
                break;
            }

            case 3 :
            {
                int n, r;
                do
                {
                    cout << "\n==========Kombinasi==========\n";
                    cout << "Rumus : \n";
                    cout << "C = n! / ((n - r)! r!)\n\n";
                    cout << "Nilai n harus lebih besar dari r, dan tidak boleh negatif\n\n";
                    cout << "Masukkan angka n : ";
                    cin >> n;
                    cout << "Masukkan angka r : ";
                    cin >> r;

                    //error handling
                    if (n < r || n < 0 || r < 0) continue;
                    else break;

                }while (true);
                cout << "\nKombinasi C (" << n << "," << r << ") adalah " << kombinasi(n,r) << endl;

                //kembali ke menu
                cout << "\n\nKembali ke menu? (y/n) : ";

                cin >> pilihan;
                if (pilihan == 'n' || pilihan == 'N') menu = 4;
                break;
            }

            case 4 :
                break;

            default : break;
        }
    } while (menu != 4);

    cout << "\nTerima kasih telah menggunakan program ini";
}

//fungsi faktorial
int faktorial(int n) 
{
    if (n == 0 || n == 1)  return 1;
    else return (n * faktorial(n-1));
}

//fungsi permutasi
int permutasi(int n, int r)
{
    return faktorial(n) / faktorial (n-r);
}

int kombinasi(int n, int r)
{
    return faktorial(n)/(faktorial(n-r) * faktorial(r));
}
