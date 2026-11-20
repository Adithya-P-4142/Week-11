#include <iostream>
#include <vector>
#include <string>
#include <stdexcept>
using namespace std;

template <typename T>
class Queue {
private:
    vector<T> data;

public:
    void enqueue(const T& item) {
        data.push_back(item);
    }

    void dequeue() {
        if (data.empty()) {
            throw out_of_range("Queue is empty");
        }
        data.erase(data.begin());
    }

    T front() const {
        if (data.empty()) {
            throw out_of_range("Queue is empty");
        }
        return data.front();
    }

    bool isEmpty() const {
        return data.empty();
    }
};

int main() {
    Queue<string> q;
    q.enqueue("First");
    q.enqueue("Second");
    q.enqueue("Third");

    cout << "Front element: " << q.front() << endl; // Outputs: First
    q.dequeue();
    cout << "New front element: " << q.front() << endl; // Outputs: Second

    return 0;
}