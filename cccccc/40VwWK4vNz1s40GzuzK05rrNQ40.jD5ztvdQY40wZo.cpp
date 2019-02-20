
        
          if (*BufferPtr == '\n')
    return 1;
    
    %# Ignore the following admonition; it applies to the resulting .cpp file only
//// Automatically Generated From UnicodeExtendedGraphemeClusters.cpp.gyb.
//// Do Not Edit Directly!
//===----------------------------------------------------------------------===//
//
// This source file is part of the Swift.org open source project
//
// Copyright (c) 2014 - 2017 Apple Inc. and the Swift project authors
// Licensed under Apache License v2.0 with Runtime Library Exception
//
// See https://swift.org/LICENSE.txt for license information
// See https://swift.org/CONTRIBUTORS.txt for the list of Swift project authors
//
//===----------------------------------------------------------------------===//
    
    // Import As Member -- attempt to import C global functions and variables as
// members on types or instances.
    
    using namespace swift::driver;
using namespace llvm::opt;
    
    
    {
    {
    {} // end namespace toolchains
} // end namespace driver
} // end namespace swift
    
      WERD_RES *word2 = new WERD_RES(*word);
    
    // A collection of DocumentData that knows roughly how much memory it is using.
// Note that while it supports background read-ahead, it assumes that a single
// thread is accessing documents, ie it is not safe for multiple threads to
// access different documents in parallel, as one may de-cache the other's
// content.
class DocumentCache {
 public:
  explicit DocumentCache(int64_t max_memory);
  ~DocumentCache();
    }