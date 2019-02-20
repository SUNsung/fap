
        
        Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    // Unlike test_ops.cc, these are built with the 'require_shapes' option in the
// BUILD file.
    
      void Compute(OpKernelContext* context) override {
    // Output a scalar string.
    Tensor* output_tensor = nullptr;
    OP_REQUIRES_OK(context,
                   context->allocate_output(0, TensorShape(), &output_tensor));
    auto output = output_tensor->scalar<string>();
    }
    
    namespace tensorflow {
    }
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    Safe_TF_StatusPtr make_safe(TF_Status* status) {
  return Safe_TF_StatusPtr(status);
}
    
    namespace tensorflow {
namespace swig {
    }
    }
    
    PLATFORM_DEFINE_ID(kCudaPlatformId);
    
      // Acquire the per-Entry mutex without holding the map mutex. Initializing
  // an Executor may be expensive, so we want to allow concurrent
  // initialization of different entries.
  mutex_lock lock{entry->configurations_mutex};
  for (const auto& iter : entry->configurations) {
    if (iter.first.plugin_config == config.plugin_config &&
        iter.first.device_options == config.device_options) {
      VLOG(2) << 'hit in cache';
      return iter.second.get();
    }
  }
    
     private:
  // Each Entry contains zero or more cached executors for a device ordinal.
  struct Entry {
    ~Entry();
    }
    
    const Message* GetCProtoInsidePyProto(PyObject* msg) {
  return GetCProtoInsidePyProtoPtr(msg);
}
Message* MutableCProtoInsidePyProto(PyObject* msg) {
  return MutableCProtoInsidePyProtoPtr(msg);
}
    
      PyObjectStruct* operator->() const {
    assert(ptr_ != NULL);
    return ptr_;
  }
    
    void ReflectionClassGenerator::WriteIntroduction(io::Printer* printer) {
  printer->Print(
    '// <auto-generated>\n'
    '//     Generated by the protocol buffer compiler.  DO NOT EDIT!\n'
    '//     source: $file_name$\n'
    '// </auto-generated>\n'
    '#pragma warning disable 1591, 0612, 3021\n'
    '#region Designer generated code\n'
    '\n'
    'using pb = global::Google.Protobuf;\n'
    'using pbc = global::Google.Protobuf.Collections;\n'
    'using pbr = global::Google.Protobuf.Reflection;\n'
    'using scg = global::System.Collections.Generic;\n',
    'file_name', file_->name());
    }
    
    void WriteEnumValueDocComment(io::Printer* printer,
                              const EnumValueDescriptor* value) {
  printer->Print('/**\n');
  WriteDocCommentBody(printer, value);
  printer->Print(
    ' * <code>$def$</code>\n'
    ' */\n',
    'def', EscapeJavadoc(FirstLineOf(value->DebugString())));
}
    
    TEST(JavaDocCommentTest, Escaping) {
  EXPECT_EQ('foo /&#42; bar *&#47; baz', EscapeJavadoc('foo /* bar */ baz'));
  EXPECT_EQ('foo /&#42;&#47; baz', EscapeJavadoc('foo /*/ baz'));
  EXPECT_EQ('{&#64;foo}', EscapeJavadoc('{@foo}'));
  EXPECT_EQ('&lt;i&gt;&amp;&lt;/i&gt;', EscapeJavadoc('<i>&</i>'));
  EXPECT_EQ('foo&#92;u1234bar', EscapeJavadoc('foo\\u1234bar'));
  EXPECT_EQ('&#64;deprecated', EscapeJavadoc('@deprecated'));
}
    
    MessageGenerator* ImmutableGeneratorFactory::NewMessageGenerator(
    const Descriptor* descriptor) const {
  if (HasDescriptorMethods(descriptor, context_->EnforceLite())) {
    return new ImmutableMessageGenerator(descriptor, context_);
  } else {
    return new ImmutableMessageLiteGenerator(descriptor, context_);
  }
}
    
      desired_output_for_decode = 'zbcdefghIJ';
  expected = string('\0zbcdefghIJ\0', 12);
  result = TextFormatDecodeData::DecodeDataForString(input_for_decode,
                                                     desired_output_for_decode);
  EXPECT_EQ(expected, result);
    
    #include <cstdint>  // for int16_t
    
      /**
   * Returns the type of the current block. See apitypes.h for
   * PolyBlockType.
   */
  PolyBlockType BlockType() const;
    
    #ifndef TESSERACT_CCMAIN_PARAGRAPHS_H_
#define TESSERACT_CCMAIN_PARAGRAPHS_H_
    
    // ReadNextBox factors out the code to interpret a line of a box
// file so that applybox and unicharset_extractor interpret the same way.
// This function returns the next valid box file utf8 string and coords
// and returns true, or false on eof (and closes the file).
// It ignores the utf8 file signature ByteOrderMark (U+FEFF=EF BB BF), checks
// for valid utf-8 and allows space or tab between fields.
// utf8_str is set with the unichar string, and bounding box with the box.
// If there are page numbers in the file, it reads them all.
bool ReadNextBox(int *line_number, FILE* box_file,
                 STRING* utf8_str, TBOX* bounding_box);
// As ReadNextBox above, but get a specific page number. (0-based)
// Use -1 to read any page number. Files without page number all
// read as if they are page 0.
bool ReadNextBox(int target_page, int *line_number, FILE* box_file,
                 STRING* utf8_str, TBOX* bounding_box);
    
    #include 'dppoint.h'
#include 'errcode.h'
#include 'tprintf.h'
    
     private:
  // Sets the value of total_pages_ behind a mutex.
  void set_total_pages(int total) {
    SVAutoLock lock(&general_mutex_);
    total_pages_ = total;
  }
  void set_memory_used(int64_t memory_used) {
    SVAutoLock lock(&general_mutex_);
    memory_used_ = memory_used;
  }
  // Locks the pages_mutex_ and Loads as many pages can fit in max_memory_
  // starting at index pages_offset_.
  bool ReCachePages();
    
    
    {    auto status = stub_->SayHello(&context, request_msg, &response_msg);
    if (status.ok()) {
      const HelloReply *response = response_msg.GetRoot();
      return response->message()->str();
    } else {
      std::cerr << status.error_code() << ': ' << status.error_message()
                << std::endl;
      return 'RPC failed';
    }
  }
    
      const char *hash_algorithm = argv[1];
    
    #include <stdlib.h>  // for abort()
#include <iostream>
#include <map>
#include <string>
    
      delete server_instance;
    
    struct OwnedAllocator : public flatbuffers::DefaultAllocator {};
    
    FLATBUFFERS_MANUALLY_ALIGNED_STRUCT(4) StructInNestedNS FLATBUFFERS_FINAL_CLASS {
 private:
  int32_t a_;
  int32_t b_;
    }
    
    	if (genSend) {
		printer->Print(vars, 'func (x *$StreamType$) Send(m *$Request$) error {\n');
		printer->Indent();
		printer->Print('return x.ClientStream.SendMsg(m)\n');
		printer->Outdent();
		printer->Print('}\n\n');
	}
    
    double Scorer::get_sent_log_prob(const std::vector<std::string>& words)
{
  std::vector<std::string> sentence;
  if (words.size() == 0) {
    for (size_t i = 0; i < max_order_; ++i) {
      sentence.push_back(START_TOKEN);
    }
  } else {
    for (size_t i = 0; i < max_order_ - 1; ++i) {
      sentence.push_back(START_TOKEN);
    }
    sentence.insert(sentence.end(), words.begin(), words.end());
  }
  sentence.push_back(END_TOKEN);
  return get_log_prob(sentence);
}
    
    
    {  void SetToReference() {
    std::memset(this, 0, sizeof(OldSanity));
    std::memcpy(magic, kMagicBytes, sizeof(magic));
    zero_f = 0.0; one_f = 1.0; minus_half_f = -0.5;
    one_word_index = 1;
    max_word_index = std::numeric_limits<WordIndex>::max();
    one_uint64 = 1;
  }
};
    
    /*Inspect a file to determine if it is a binary lm.  If not, return false.
 * If so, return true and set recognized to the type.  This is the only API in
 * this header designed for use by decoder authors.
 */
bool RecognizeBinary(const char *file, ModelType &recognized);
    
    // This compiles down nicely.
inline bool HasExtension(const float &backoff) {
  typedef union { float f; uint32_t i; } UnionValue;
  UnionValue compare, interpret;
  compare.f = kNoExtensionBackoff;
  interpret.f = backoff;
  return compare.i != interpret.i;
}
    
    
    {
    {    if (optind + 2 == argc) {
      model_type = 'probing';
      from_file = argv[optind];
      config.write_mmap = argv[optind + 1];
    } else if (optind + 3 == argc) {
      model_type = argv[optind];
      from_file = argv[optind + 1];
      config.write_mmap = argv[optind + 2];
    } else {
      Usage(argv[0], default_mem);
      return 1;
    }
    if (!strcmp(model_type, 'probing')) {
      if (!set_write_method) config.write_method = Config::WRITE_AFTER;
      if (quantize || set_backoff_bits) ProbingQuantizationUnsupported();
      if (rest) {
        RestProbingModel(from_file, config);
      } else {
        ProbingModel(from_file, config);
      }
    } else if (!strcmp(model_type, 'trie')) {
      if (rest) {
        std::cerr << 'Rest + trie is not supported yet.' << std::endl;
        return 1;
      }
      if (!set_write_method) config.write_method = Config::WRITE_MMAP;
      if (quantize) {
        if (bhiksha) {
          QuantArrayTrieModel(from_file, config);
        } else {
          QuantTrieModel(from_file, config);
        }
      } else {
        if (bhiksha) {
          ArrayTrieModel(from_file, config);
        } else {
          TrieModel(from_file, config);
        }
      }
    } else {
      Usage(argv[0], default_mem);
    }
  }
  catch (const std::exception &e) {
    std::cerr << e.what() << std::endl;
    std::cerr << 'ERROR' << std::endl;
    return 1;
  }
  std::cerr << 'SUCCESS' << std::endl;
  return 0;
}

    
        bool Keep() const { return keep_buffer_; }
    
    
    {  out << '\\' << positions.size() << '-grams:' << '\n';
  for (ProxyStream<NGram<Prob> > stream(positions.back(), NGram<Prob>(NULL, positions.size())); stream; ++stream) {
    PrintLead(vocab, stream, out);
    out << '\n';
  }
  out << '\n';
  out << '\\end\\\n';
}
    
        const char *Lookup(WordIndex index) const {
      assert(index < map_.size() - 1);
      return map_[index];
    }
    
    #include 'lm/word_index.hh'
#include 'util/string_piece.hh'