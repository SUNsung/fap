
        
        #include 'leveldb/status.h'
    
      // Evict any entry for the specified file number
  void Evict(uint64_t file_number);
    
    int main(int argc, char** argv) {
  return leveldb::test::RunAllTests();
}

    
    namespace leveldb {
    }
    
      void FinishedSingleOp() {
    if (FLAGS_histogram) {
      double now = Env::Default()->NowMicros() * 1e-6;
      double micros = (now - last_op_finish_) * 1e6;
      hist_.Add(micros);
      if (micros > 20000) {
        fprintf(stderr, 'long op: %.1f micros%30s\r', micros, '');
        fflush(stderr);
      }
      last_op_finish_ = now;
    }
    }
    
    #ifndef GRPC_COMMON_CPP_ROUTE_GUIDE_HELPER_H_
#define GRPC_COMMON_CPP_ROUTE_GUIDE_HELPER_H_
    
    #ifndef GRPC_INTERNAL_COMPILER_PYTHON_GENERATOR_H
#define GRPC_INTERNAL_COMPILER_PYTHON_GENERATOR_H
    
      Result Mark() const;