//Project 3
#include <iostream>
#include <string>
#include "QueueList.hpp"
using namespace std;

int main()
{
    QueueList queue;
    string word;
    
    cout << "Enter a word: ";
    cin >> word;
    
    queue.enqueue(word);
    
    while(!queue.isEmpty())
    {
        queue.dequeue(word);
        cout << "\nYou typed: " << word;
    }
    
    for(int i = 0; i < word.length(); i++)
    {
        if(word[i] >= 'A' && word[i] <= 'Z')
        {
        word[i] = word[i]+32;
        cout << "\nLowercase: " << (word);
        }
        else
        {
            word[i] = word[i]-32;
            cout << "\nUppercase: " << (word);
        }
    }
    
    return 0;
}
