/*
 *  This source file is part of the Radar project.
 *  Licensed under the MIT License. See LICENSE file for details.
 */

#pragma once

#include "ImageResult.h"
#include "Size.h"

namespace rl {
namespace image {

class ImageEncoder {
 public:
  enum class Type {
    PNG,
  };

  ImageEncoder(Type type, core::FileHandle handle);

  ~ImageEncoder();

  bool isReady() const;

  bool encode(ImageResult image);

 private:
  bool _isReady;
  Type _type;
  core::FileIOAdapter _adapter;

  bool encodePNG(ImageResult image);

  void write(const uint8_t* data, size_t size);

  FML_DISALLOW_COPY_AND_ASSIGN(ImageEncoder);
};

}  // namespace image
}  // namespace rl
