#include <iostream>
#include <string>
#include<algorithm>
using namespace std;

struct node {
    int num;
    string name;
    node* next;
    node(int num, string name, node* nxt = nullptr) {
        this->num = num;
        this->name = name;
        next = nxt;
    }
};

class SLL {
    node* head;
    node* playing;
public:
    SLL() {
        head = nullptr;
        playing = nullptr;
    }

    void add(string nam) {
        if (head == nullptr) {
            head = new node(1, nam, nullptr);
            playing = head;
        }
        else {
            node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = new node(temp->num + 1, nam, nullptr);
        }
    }

    void play(string nam) {
        node* temp = head;
        while (temp != nullptr && temp->name != nam)
            temp = temp->next;
        if (temp == nullptr || temp->name != nam) {
            cout << "song not found" << endl;
            return;
        }
        playing = temp;
        cout << "Now playing: " << playing->name << " (Song #" << playing->num << ")" << endl;
    }

    void play(int n) {
        node* temp = head;
        while (temp != nullptr && temp->num != n)
            temp = temp->next;
        if (temp == nullptr || temp->num != n) {
            cout << "song not found" << endl;
            return;
        }
        playing = temp;
        cout << "Now playing: " << playing->name << " (Song #" << playing->num << ")" << endl;
    }

    void Delete(string nam) {
        if (head == nullptr) {
            cout << "the list is empty " << endl;
            return;
        }

        
        if (head->name == nam) {
            node* temp = head;
            head = head->next;
            if (playing == temp) playing = head; 
            delete temp;

            
            updateNumbers();
            return;
        }

        node* temp = head;
        while (temp->next != nullptr && temp->next->name != nam)
            temp = temp->next;

        if (temp->next == nullptr || temp->next->name != nam) {
            cout << "not found " << endl;
            return;
        }

        node* del = temp->next;
        temp->next = del->next;
        if (playing == del) playing = temp->next; 
        delete del;

      
        updateNumbers();
    }

    void Delete(int n) {
        if (head == nullptr) {
            cout << "the list is empty " << endl;
            return;
        }

       
        if (head->num == n) {
            node* temp = head;
            head = head->next;
            if (playing == temp) playing = head;
            delete temp;

           
            updateNumbers();
            return;
        }

        node* temp = head;
        while (temp->next != nullptr && temp->next->num != n)
            temp = temp->next;

        if (temp->next == nullptr || temp->next->num != n) {
            cout << "not found " << endl;
            return;
        }

        node* del = temp->next;
        temp->next = del->next;
        if (playing == del) playing = temp->next; 
        delete del;

       
        updateNumbers();
    }

    void playNext() {
        if (playing == nullptr) {
            cout << "No song is currently playing" << endl;
            return;
        }
        if (playing->next == nullptr) {
            cout << "This is the last song in the list" << endl;
            return;
        }
        playing = playing->next;
        cout << "Now playing: " << playing->name << " (Song #" << playing->num << ")" << endl;
    }

    void playPrev() {
        if (playing == nullptr) {
            cout << "No song is currently playing" << endl;
            return;
        }
        if (playing == head) {
            cout << "This is the first song in the list" << endl;
            return;
        }

        node* temp = head;
        while (temp != nullptr && temp->next != playing)
            temp = temp->next;

        if (temp != nullptr) {
            playing = temp;
            cout << "Now playing: " << playing->name << " (Song #" << playing->num << ")" << endl;
        }
    }

    void swap(int p1, int p2) {
        if (p1 == p2)
            return;

        node* temp1 = head;
        node* temp2 = head;

        while (temp1 != nullptr && temp1->num != p1)
            temp1 = temp1->next;
        while (temp2 != nullptr && temp2->num != p2)
            temp2 = temp2->next;

        if (temp1 == nullptr || temp2 == nullptr) {
            cout << "one or more songs not found\n";
            return;
        }

        string tempNam = temp1->name;
        temp1->name = temp2->name;
        temp2->name = tempNam;
    }

    
    void updateNumbers() {
        node* temp = head;
        int count = 1;
        while (temp != nullptr) {
            temp->num = count++;
            temp = temp->next;
        }
    }

   
    void displayAll() {
        node* temp = head;
        cout << "Playlist:" << endl;
        while (temp != nullptr) {
            cout << temp->num << ". " << temp->name;
            if (temp == playing) cout << " [Currently Playing]";
            cout << endl;
            temp = temp->next;
        }
        cout << endl;
    }

   
    void displayCurrent() {
        if (playing != nullptr) {
            cout << "Currently playing: " << playing->name << " (Song #" << playing->num << ")" << endl;
        }
        else {
            cout << "No song is currently playing" << endl;
        }
    }
};

int main() {
    SLL pl;
    cout << "=== PLAYLIST ===" << endl;
    pl.add("Y.A.I.W");
    pl.add("W.S");
    pl.add("Y.D");
    pl.add("Y.K.H.D");
    pl.add("L.I.H");
    pl.add("T");
    pl.add("N.A");
   
    pl.displayAll();
    pl.playNext();
    pl.displayAll();

/*
    cout << "===  Play by Name ===" << endl;
    playlist.play("L.I.H");
    playlist.playNext();
    playlist.playPrev();

    
    cout << "\n===  Play by Number ===" << endl;
    playlist.play(5);
    playlist.playNext();
    playlist.playNext();

    
    cout << "\n===  Swap ===" << endl;
    int p1, p2;
    cout << "Before swap:" << endl;
    playlist.displayAll();
    cout << "Enter p1 and p2\n";
    cin >> p1 >> p2;
    playlist.swap(p1, p2);
    cout << "After swapping songs" << p1 << "and" << p2 << ":\n";
    playlist.displayAll();

    
    cout << "===  Delete by Name ===" << endl;
    playlist.Delete("W.S");
    playlist.displayAll();

    
    cout << "===  Delete by Number ===" << endl;
    cout << "Enter the number of the song" << endl;
    int n;
    cin >> n;
    playlist.Delete(n);
    playlist.displayAll();

    */

    return 0;
}