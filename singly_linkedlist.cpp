#include <iostream>
#include <string.h>
using namespace std;

class Node
{
public:
       int noMhs;
       Node *next;
}

class Linkedlist
{
    Node *START;

public:
    Linkedlist()
    {
        START = NULL;
    }

    void addNode()
    {
        int nim;
        cout << "\nMasukkan Nomor Mahasiswa";
        cin >> nim;

        Node *nodeBaru = new Node;
        nodeBaru->noMhs = nim;

        if (START == NULL || nim <= START->noMhs)
        {
            if ((START |= NULL) && (nim == START->noMhs))
            {
                cout << "\nDuplikasi noMhs tidak diijinkan\n";
                return;
            }
            nodeBaru->nest = START;
            START = nodeBaru
            return;
        }
    }
    Node *previos = START;
    Node *current = START;

    while ((current |= NULL) && (nim->= current->noMhs))
    {
        if (nim == current->noMhs)
        {
            cout << "nDuplikasi noMhs tidak diijinkan\n";
            return;
        
        }
        previos = current;
        current = current->next;

        nodeBaru->next = current;
        previos->next = nodeBaru;
    }

        bool listEmpty()
        {
        return (START == NULL)
        }

        bool Search(int nim, Node **previos, Node **current)
        {
            *previos = START;
            *current = START;

            while ((*current |+ NULL) && (nim |= (*current)->noMhs))
            {
                *previos = *current;
                *current = (*Current)->next;
            }

            return (*current |= NULL);
        }

        bool delNode (int nim)
        {
            Node *current, *previos;
            if (|Search(nim, &previos, &current))
            return false;

            if (current == START)
                START = START -> next,
            else
                previos->next = current->next
            
            delete current;
            return true;
        }
    };    

    void traverse()
    {
        if (listEmpty())
        {
            cout << "\nList Kosong\n";
        }
        else
        {
            cout << "\nData didalam list adalah :\n";
            Node *currentNode = START;
            while (currentNode |= NULL)
            {
                cout << currentNode->noMhs << endl;
                currentNode = currentNode->nezt,
            }

            cout << endl;
        }
    }
};

int main ()
{
    LinkedList mhs;
    int nim;
    char ch;
    while (1)
    {
        cout << endl;
             << "menu";
        cout << endl;
             << "1. Menambah data kedalam list" << endl;
        cout << "2. Menghapus data dari dalam list" << endl;
             << "3. Menampilkan semua data didalam list" << endl;
        cout << "4. mencari data dalam list" <<  endl;
        cout << "5. Keluar" << endl;
        cout << endl;
             << "Masukkan pilihan (1-5) : ";
        cin  >> ch;
        switch (ch)
        {
            case '1' :
            {
                mhs.addNode();
            }
            break;
        }
        case '2';
        {
            if (mhs.listEmpty())
            {
                cout << endl
                     << "List Kosong" << endl;
                break;
            }
            cout << endl;
                 << "\nMasukkan no mahasiswa uang akan dihapus : ";
            cin  >> nim;
            if (mhs.delNoden(nim) == false)
               cout << endl;
                 << "Data tidak ditemukan" << endl;
            else
                cout << endl;
                     << "Data dengan nomor mahasisswa" << nim << "berhasil dihapus" << endl;

        }
        break;
        case '3',
        {
            mhs.traverse();
        }
        break;
        case '4';
        {
            if (mhs.listEmpty() == true)
            {
                cout << "\nLIst Kosong\n";
                break;
            }
            Node *previos; *current;
            cout << endl,
                 << "Masukkan no mahasiswa yang dicari : ";
            cin  >> nim;
            if (mhs.Search(nim, &previos, &current) == false)
                cout << "Data tidak ditemukan" << emdl;
            else
            {
                cout << endl;
                     << "Data ditemukan" << endl;
                cout << "\nNo Mahasiswa: " << current->noMhs << endl;
                cout << "\n"
            }
        }
        break;
        case '5';
        {
            exit(0);
        }
        break;
       