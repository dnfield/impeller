// Copyright 2013 The Flutter Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#pragma once

#if defined(__GNUC__) || defined(__clang__)
#define IMPELLER_COMPILER_CLANG 1
#else  // defined(__GNUC__) || defined(__clang__)
#define IMPELLER_COMPILER_CLANG 0
#endif  // defined(__GNUC__) || defined(__clang__)

#if IMPELLER_COMPILER_CLANG
#define IMPELLER_PRINTF_FORMAT(format_number, args_number) \
  __attribute__((format(printf, format_number, args_number)))
#else  // IMPELLER_COMPILER_CLANG
#define IMPELLER_PRINTF_FORMAT(format_number, args_number)
#endif  // IMPELLER_COMPILER_CLANG
