#include <array>
#include <iostream>
#include <string>

class GameBoard {
public:
  GameBoard(int size, const std::string& game_name)
  : size_(size), game_name_(game_name) {}
  int size() const { return size_; }
  const std::string& game_name() const { return game_name_; }
private:
  int size_;
  std::string game_name_;
};

class Figure {
public:
  Figure(const std::string& name, const std::string& game_name,
         const std::array<std::pair<int, int>, 8>& moves)
  : name_(name), game_name_(game_name), moves_(moves) {}
  const std::string& name() const { return name_; }
  const std::string& game_name() const { return game_name_; }
  const std::array<std::pair<int, int>, 8>& moves() const { return moves_; }

private:
  std::string name_;
  std::string game_name_;
  std::array<std::pair<int, int>, 8> moves_;
};

int main() {
}