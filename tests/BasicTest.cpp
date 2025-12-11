import std;
import stdx;

using std::collections::HashMap;
using std::collections::TreeMap;
using std::collections::Vector;
using std::concurrent::Thread;
using std::fs::DirectoryEntry;
using std::fs::DirectoryIterator;
using std::fs::Path;
using std::io::OpenMode;
using std::io::IOException;
using std::io::IOState;
using std::io::OutputFileStream;
using std::io::Stderr;
using std::mem::UniquePointer;
using stdx::linq::Query;

int main() {
    Thread t;
    if (t.joinable()) {
        std::io::println("t.joinable() returned true");
    }

    String s = "This is a test string";
    std::io::println("{}", s);

    Vector<i32> v{1, 2, 3, 4, 5};
    for (usize i = 0; i < v.size(); ++i) {
        std::io::println("v[{}] = {}", i, v[i]);
    }
    // for (int i: v) {
    //     std::io::println("i = {}", i);
    // }

    UniquePointer<OutputFileStream> file = std::mem::make_unique<OutputFileStream>(Path("./example.txt"));
    file->exceptions(IOState::STREAM_ERROR | IOState::IO_OPERATION_FAIL);
    try {
        std::io::println(*file, "Here is some text");
    } catch (const IOException& e) {
        std::io::println(Stderr, "Failed to write!");
    }

    // Path dir = std::fs::current_path();

    // Vector<DirectoryEntry> files;
    // for (const DirectoryEntry& entry: DirectoryIterator(dir)) {
    //     if (std::fs::is_regular_file(entry)) {
    //         files.push_back(entry);
    //     }
    // }

    // // Use LINQ-style query to find the largest .txt file
    // Optional<DirectoryEntry> result = Query<Vector<DirectoryEntry>>::from(files)
    //     .where([](const DirectoryEntry& entry) -> bool { return entry.path().extension() == ".txt"; })
    //     .order_by([](const DirectoryEntry& entry) -> i64 { return -static_cast<i64>(std::fs::file_size(entry)); })
    //     .first_or(DirectoryEntry());

    // if (result->path().empty()) {
    //     std::io::println("No .txt files found in directory: {}", dir.string());
    // } else {
    //     std::io::println("Largest .txt file: {} ({} bytes)", result->path().string(), std::fs::file_size(result));
    // }
}
