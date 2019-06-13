/*
  (C) 2018 David Lettier
  lettier.com
*/

#include "purescript.h"

FOREIGN_BEGIN( Web_HTML )

exports["window"] = []() -> boxed {
  return boxed();
};

FOREIGN_END
