#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <memory>

// 1. Запись/чтение в/из бинарный файл + поиск
// 2. Сортировка бинарного файла

struct Record {
  int key;
  char data[100];
};

// ДЗ
// n * k -> n * log(k) + k  // std::priority_queue

// 1 5 6
// 2 7 8
// 3 4 9

void MergeFiles(const std::vector<std::string>& input_files, const std::string& output_file) {
  std::vector<std::ifstream> fins(input_files.size());
  std::vector<Record> records(input_files.size());
  std::vector<bool> is_file_empty(input_files.size(), false);
  std::ofstream fout(output_file, std::ios::binary);

  for (size_t i = 0; i < input_files.size(); ++i) {
    fins[i].open(input_files[i], std::ios::binary);
    fins[i].read(reinterpret_cast<char*>(&records[i]), sizeof(Record));
    if (fins[i].gcount() != sizeof(Record)) {
      is_file_empty[i] = true;
    }
  }

  // merge
  size_t min_index = 0;
  while (true) {
    for (size_t i = 0; i < input_files.size(); ++i) {
      if (is_file_empty[min_index] || (!is_file_empty[i] && records[i].key < records[min_index].key)) {
        min_index = i;
      }
    }
    if (is_file_empty[min_index]) {
      break;
    }
    fout.write(reinterpret_cast<const char*>(&records[min_index]), sizeof(Record));
    fins[min_index].read(reinterpret_cast<char*>(&records[min_index]), sizeof(Record));
    if (fins[min_index].gcount() != sizeof(Record)) {
      is_file_empty[min_index] = true;
    }
  }
}

int main() {
  std::string input_file = "data.bin";
  std::string output_file = "sorted.bin";
  std::vector<std::string> sorted_chunks;

  const int chunk_size = 10000;
  std::vector<Record> chunk(chunk_size);
  size_t id = 0;
  std::ifstream fin(input_file, std::ios::binary);
  while (fin) {
    fin.read(reinterpret_cast<char*>(chunk.data()), sizeof(Record) * chunk_size);
    const int read_count = fin.gcount() / sizeof(Record);
    if (read_count > 0) {
      std::sort(chunk.begin(), chunk.begin() + read_count,
                [](const Record& l, const Record& r) { return l.key < r.key; });
      sorted_chunks.push_back("chunk_" + std::to_string(++id) + ".bin");
      std::ofstream fout(sorted_chunks.back(), std::ios::binary);
      fout.write(reinterpret_cast<const char*>(chunk.data()), sizeof(Record) * read_count);
    }
  }
  fin.close();
  MergeFiles(sorted_chunks, output_file);
  for (const auto& filename : sorted_chunks) {
    std::remove(filename.c_str());
  }
  return 0;
}