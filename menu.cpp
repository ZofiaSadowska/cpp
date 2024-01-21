#include <iostream>

using namespace std;

int Menu()
{
    int x;
    cout<<endl;
    cout<<"1. Dodaj element tablicy"<<endl;
    cout<<"2. Wstaw element tablicy"<<endl;
    cout<<"3. Usun element tablicy"<<endl;
    cout<<"4. Wyświetl elementy tablicy"<<endl;
    cout<<"5. Zapisz do pliku"<<endl;
    cout<<"6. Wczytaj z pliku"<<endl;
    cout<<"7. Wyjscie z programu"<<endl;
    cin>>x;
    cout<<endl;
    return x;
}

int main()
{
    int m;
    int *p = NULL;
    int n = 0;
    while(true)
    {
        m = Menu();
        switch(m)
        {
        
        case 1:
            {
                int * tmp = NULL;
                tmp = new int[n+1]; //tworzenie nowej tablicy (o jeden większej niż poprzednia)
                if(p != NULL) //jeżeli istnieje poprzednia tablica to:
                {
                    for(int i=0;i<n;i++)
                    {//przekopiuj zawartość poprzedniej tablicy do nowej
                        tmp[i] = p[i];
                    }
                    //usuń poprzednią tablicę
                    delete[] p;

                }
                cout<<"Podaj wartosc elementu tablicy: ";
                cin>>tmp[n];  //wstaw nową wartość do tablicy (na koniec)
                p = tmp; //przekopiuj adres nowej tablicy do wskaźnika p
                n++; //zwiększ ilość elementów tablicy o 1
                break;
            }
        case 2:
            {
                int *nt = new int [n+1];
                if(p != NULL)
                {
                    for(int i=0;i<n;i++)
                    {
                        nt[i] = p[i];
                    }
                    delete[] p;
                }
                int y;
                int *t = &y;
                cout<<"podaj na jakie miejsce w tablicy chcesz wstawic: ";
                cin>>y;
                if(t != NULL)
                {
                    n++;
                    nt[y] = nt[y+1];
                }

                cout<<"Podaj element jaki chcesz wstawic: ";
                cin>>nt[y];
                p = nt;
                break;
            }
        case 3:
            {
                //usuwanie dowolnego elementu (po indeksie)
                break;
            }
        case 4:
            {
                cout<<"Zawartosc tablicy:"<<endl;
                for(int i=0;i<n;i++)
                {
                    cout<<p[i]<<", ";
                }
                cout<<endl;
                break;
            }
        case 5:
            {
                fstream file;
                file.open("C:\\users\\student\\desktop\\plik.txt", ios::out | ios::trunc);
                if (file.is_open())
                {
                    for(int i = 0; i < size; i++)
                    {
                        if(i != size - 1)
                        {
                            file << p[i] << endl;
                        }
                        else
                        {
                            file << p[i];
                        }
                    }
                    file.close();
                }
            }
            break;
        case 6:
            {
                fstream file;
                file.open("C:\\users\\student\\desktop\\plik.txt", ios::in);
                if(file.is_open())
                {
                    string str;
                    int i = 0;

                    while(!file.eof())
                    {
                        getline(file, str);
                        i++;
                    }

                    int* new_pointer = NULL;
                    new_pointer = new int[i];
                    size = indicator;
                    i = 0;
                    file.clear();
                    file.seekg(0);

                    while(!file.eof())
                    {
                        getline(file, str);
                        new_pointer[i] = atoi(str.c_str());
                        indicator++;
                    }
                    delete[] p;
                    p = new_pointer;
                }
                file.close();
            }
            break;
        case 7:
            {
                return 0;
            }
        default:
            {
                cout<<"Nieprawidlowa opcja"<<endl;
            }

        }
    }

    return 0;
}
