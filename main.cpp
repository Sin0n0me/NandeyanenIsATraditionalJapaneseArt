#include <stdexcept>

enum class 進捗 {
    なしw,
    少し,
    たくさん
};

static bool 楽しい = true;

進捗 進捗どうですか(const int 気力) {
  if (気力 < 0) {
    throw std::runtime_error("もうダメだお終いだぁ！");
  } 
  if (気力 == 0) {
    return 進捗::なしw;
  }

  return 楽しい ? 進捗::たくさん : 進捗::少し;
}


int main(void) {
    
    進捗どうですか(0);

    return 0;
}
