
        
        // TODO(kenton):  It's hard to write a robust test of the doc comments -- we
//   can only really compare the output against a golden value, which is a
//   fairly tedious and fragile testing strategy.  If we want to go that route,
//   it probably makes sense to bite the bullet and write a test that compares
//   the whole generated output for unittest.proto against a golden value, with
//   a very simple script that can be run to regenerate it with the latest code.
//   This would mean that updates to the golden file would have to be included
//   in any change to the code generator, which would actually be fairly useful
//   as it allows the reviewer to see clearly how the generated code is
//   changing.
    
    
    {
    {    reflection->MutableUnknownFields(message)->Clear();
  }
 private:
  virtual bool ShouldBeClear(const FieldDescriptor *field) = 0;
};
    
        for (int i = 0; i < dataset.payload_size(); i++) {
      message->ParseFromString(dataset.payload(i));
      GogoDataStripper stripper;
      stripper.StripMessage(message);
      dataset.set_payload(i, message->SerializeAsString());
    }
    
        if (dataset.message_name() == 'benchmarks.proto3.GoogleMessage1') {
      message = new benchmarks::proto3::GoogleMessage1;
    } else if (dataset.message_name() == 'benchmarks.proto2.GoogleMessage1') {
      message = new benchmarks::proto2::GoogleMessage1;
    } else if (dataset.message_name() == 'benchmarks.proto2.GoogleMessage2') {
      message = new benchmarks::proto2::GoogleMessage2;
    } else if (dataset.message_name() ==
        'benchmarks.google_message3.GoogleMessage3') {
      message = new benchmarks::google_message3::GoogleMessage3;
    } else if (dataset.message_name() ==
        'benchmarks.google_message4.GoogleMessage4') {
      message = new benchmarks::google_message4::GoogleMessage4;
    } else {
      std::cerr << 'Unknown message type: ' << dataset.message_name();
      exit(1);
    }
    
    
    {        return dict[versionKey].Value<size_t>();
    }
    
                auto scale = initConfig[ScaleAttributeName].Value<double>();
            int outputRank = DefaultParamInitOutputRank, filterRank = DefaultParamInitFilterRank;
            if (initializerType != Microsoft::MSR::CNTK::UniformInitializerTypeName && 
                initializerType != Microsoft::MSR::CNTK::TruncNormalInitializerTypeName)
            {
                outputRank = initConfig[OutputRankAttributeName].Value<int>();
                filterRank = initConfig[FilterRankAttributeName].Value<int>();
    }
    
        int m_fd;               // file descriptor
    std::string m_fileName; // lock file name
    struct flock m_lock;    // fnctl lock structure
    
    #pragma once
#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS // 'secure' CRT not available on all platforms  --add this at the top of all CPP files that give 'function or variable may be unsafe' warnings
#endif
#ifdef _WIN32
#ifndef NOMINMAX
#define NOMINMAX
#endif // NOMINMAX
#pragma comment(lib, 'Dbghelp.lib')
#else
#include <execinfo.h>
#include <cxxabi.h>
#endif
    
    
    {
    {
    {}}}

    
            if (Input(1)->HasMBLayout())
        {
            // infer rows1 as rows0
            Input(1)->ValidateInferInputDimsFrom(TensorShape(rows0));
            SetDims(TensorShape(rows0), true);
        }
        else // multiplying two straight matrices
        {
            size_t cols1 = Input(1)->GetAsMatrixNumCols();
            // infer rows1 as rows0
            Input(1)->ValidateInferInputDimsFrom(TensorShape(rows0, cols1));
            SetDims(TensorShape(rows0, cols1), false);
        }