
        
                const auto paramShape = GetMatrixShape(parameter);
        NDShape shape;
        if (factor == 0)
        {
            shape = NDShape({});
        }
        else
        {
            if (factor == 1)
                shape = parameter.Shape();
            else
                shape = NDShape({ paramShape[0], factor * paramShape[1] });
        }
    
            auto matrix = sequenceData->GetMatrix<ElementType>();
        matrix->TransferToDeviceIfNotThere(AsCNTKImplDeviceId(DeviceDescriptor::CPUDevice()), true);
        auto cpuSparseMatrix = matrix->m_CPUSparseMatrix;
        auto currentSequenceNumCols = matrix->GetNumCols();
        auto currentSequenceColStarts = cpuSparseMatrix->SecondaryIndexLocation();
        auto currentSequenceNumNonZeroValues = currentSequenceColStarts[currentSequenceNumCols] - currentSequenceColStarts[0];
        std::copy(cpuSparseMatrix->MajorIndexLocation(), cpuSparseMatrix->MajorIndexLocation() + currentSequenceNumNonZeroValues, std::back_inserter(rowIndices));
        std::copy((char*)(cpuSparseMatrix->Data()), (char*)(cpuSparseMatrix->Data() + currentSequenceNumNonZeroValues), std::back_inserter(nonZeroValues));
    
        static void noOpAlarmHandler(int /*signum*/)
    {
        // this handler is intentionally NO-OP
        // the side effect of execution this handler
        // will be a termination of fcntl call below with EINTR
    }
    
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
    
        void Start();
    void Stop();
    void Restart();
    
        // master data structure
    std::list<QueryUrls> m_queryUrls;
    // buffer for sorting
    std::vector<Url> m_urlSorter;
    // lookup table for position based weights
    std::vector<ElemType> m_logWeights;
    
    
    {        bool isImage = configp->Get(L'isImage');
        if (!isImage)
            Init(configp->Get(L'shape'), isSparse, axisName);
        else
            Init(ImageDimensions::AsTensorShape(configp->Get(L'imageWidth'), configp->Get(L'imageHeight'), configp->Get(L'imageChannels'), ImageLayoutKindFrom(configp->Get(L'imageLayout'))), isSparse, axisName);
    }
    
    
    {    std::ifstream file(filename, std::ios::binary | std::ios::ate);
    state.SetBytesProcessed(state.iterations() * file.tellg());
}
BENCHMARK_CAPTURE(ParseFile, jeopardy,      'data/jeopardy/jeopardy.json');
BENCHMARK_CAPTURE(ParseFile, canada,        'data/nativejson-benchmark/canada.json');
BENCHMARK_CAPTURE(ParseFile, citm_catalog,  'data/nativejson-benchmark/citm_catalog.json');
BENCHMARK_CAPTURE(ParseFile, twitter,       'data/nativejson-benchmark/twitter.json');
BENCHMARK_CAPTURE(ParseFile, floats,        'data/numbers/floats.json');
BENCHMARK_CAPTURE(ParseFile, signed_ints,   'data/numbers/signed_ints.json');
BENCHMARK_CAPTURE(ParseFile, unsigned_ints, 'data/numbers/unsigned_ints.json');
    
    // Parses a string for a Double flag, in the form of
// '--flag=value'.
//
// On success, stores the value of the flag in *value, and returns
// true.  On failure, returns false without changing *value.
bool ParseDoubleFlag(const char* str, const char* flag, double* value);
    
      if (run.bytes_per_second > 0.0) {
    Out << run.bytes_per_second;
  }
  Out << ',';
  if (run.items_per_second > 0.0) {
    Out << run.items_per_second;
  }
  Out << ',';
  if (!run.report_label.empty()) {
    // Field with embedded double-quote characters must be doubled and the field
    // delimited with double-quotes.
    std::string label = run.report_label;
    ReplaceAll(&label, '\'', '\'\'');
    Out << '\'' << label << '\'';
  }
  Out << ',,';  // for error_occurred and error_message
    
      out << indent << '\'caches\': [\n';
  indent = std::string(6, ' ');
  std::string cache_indent(8, ' ');
  for (size_t i = 0; i < info.caches.size(); ++i) {
    auto& CI = info.caches[i];
    out << indent << '{\n';
    out << cache_indent << FormatKV('type', CI.type) << ',\n';
    out << cache_indent << FormatKV('level', static_cast<int64_t>(CI.level))
        << ',\n';
    out << cache_indent
        << FormatKV('size', static_cast<int64_t>(CI.size) * 1000u) << ',\n';
    out << cache_indent
        << FormatKV('num_sharing', static_cast<int64_t>(CI.num_sharing))
        << '\n';
    out << indent << '}';
    if (i != info.caches.size() - 1) out << ',';
    out << '\n';
  }
  indent = std::string(4, ' ');
  out << indent << '],\n';
    
    
    { private:
  LogType(std::ostream* out) : out_(out) {}
  std::ostream* out_;
  BENCHMARK_DISALLOW_COPY_AND_ASSIGN(LogType);
};
    
          // regerror returns the number of bytes necessary to null terminate
      // the string, so we move that when assigning to error.
      CHECK_NE(needed, 0);
      error->assign(errbuf, needed - 1);