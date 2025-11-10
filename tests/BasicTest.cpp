import std;

using std::collections::HashMap;
using std::collections::TreeMap;
using std::collections::Vector;
using std::concurrent::Thread;

int main() {
    Thread t;
    if (t.joinable()) {
        std::io::println("t.joinable() returned true");
    }

    String s = "This is a test string";
    std::io::println("{}", s);

    Vector<int> v{1, 2, 3, 4, 5};
    for (usize i = 0; i < v.size(); ++i) {
        std::io::println("v[{}] = {}", i, v[i]);
    }
}
