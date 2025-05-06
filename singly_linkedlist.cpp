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

    