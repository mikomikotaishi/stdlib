import std;

using std::collections::HashMap;
using std::collections::TreeMap;
using std::collections::Vector;
using std::concurrent::Thread;
using std::fs::Path;
using std::io::OpenMode;
using std::io::IOException;
using std::io::IOState;
using std::io::OutputFileStream;
using std::io::Stderr;
using std::mem::UniquePointer;

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

    UniquePointer<OutputFileStream> file = std::mem::make_unique<OutputFileStream>(Path("./example.txt"));
    file->exceptions(IOState::STREAM_ERROR | IOState::IO_OPERATION_FAIL);
    try {
        std::io::println(*file, "Here is some text");
    } catch (const IOException& e) {
        std::io::println(Stderr, "Failed to write!");
    }
}
