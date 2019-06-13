/*
  (C) 2018 David Lettier
  lettier.com
*/

#include <chrono>

#include "purescript.h"

FOREIGN_BEGIN( Effect_Now )

exports["now"] = []() -> boxed {
  double m =
      std::chrono::system_clock::now().time_since_epoch()
    / std::chrono::milliseconds(1);
  return m;
};

FOREIGN_END
