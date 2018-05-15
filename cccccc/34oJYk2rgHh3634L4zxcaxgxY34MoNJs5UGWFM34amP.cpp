
        
        Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    
    {  template <typename Packet>
  inline Packet packetOp(const Packet& y) const {
    const Packet one = internal::pset1<Packet>(1);
    return internal::pmul(internal::psub(one, y), y);
  }
};
    
    
    {}  // namespace tensorflow
#endif  // TENSORFLOW_USE_SYCL

    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    
    {  DynamicStitchKernel<T>
      <<<config.block_count, config.thread_per_block, 0, gpu_device.stream()>>>(
          slice_size, output_size, input_indices, input_ptrs, output);
}
    
    #include 'tensorflow/cc/ops/const_op.h'
#include 'tensorflow/cc/ops/image_ops.h'
#include 'tensorflow/cc/ops/nn_ops.h'
#include 'tensorflow/cc/ops/sendrecv_ops.h'
#include 'tensorflow/cc/ops/standard_ops.h'
#include 'tensorflow/core/framework/tensor_testutil.h'
#include 'tensorflow/core/lib/core/status_test_util.h'
#include 'tensorflow/core/platform/test.h'
#include 'tensorflow/core/platform/test_benchmark.h'
#include 'tensorflow/core/public/session.h'
#include 'tensorflow/tools/graph_transforms/transform_utils.h'
    
    void MPIUtils::InitMPI() {
  // Initialize the MPI environment if that hasn't been done
  int flag = 0;
  MPI_CHECK(MPI_Initialized(&flag));
  if (!flag) {
    int proc_id = 0, number_of_procs = 1, len = -1;
    char my_host_name[max_worker_name_length];
    // MPI_CHECK(MPI_Init_thread(0, 0, MPI_THREAD_MULTIPLE, &flag));
    MPI_CHECK(MPI_Init(0, 0));
    MPI_CHECK(MPI_Comm_rank(MPI_COMM_WORLD, &proc_id));
    MPI_CHECK(MPI_Comm_size(MPI_COMM_WORLD, &number_of_procs));
    MPI_CHECK(MPI_Get_processor_name(my_host_name, &len));
    fprintf(stderr,
            'MPI Environment initialized. Process id: %d Total processes: %d '
            '|| Hostname: %s \n',
            proc_id, number_of_procs, my_host_name);
  }
}
    
    #ifndef TENSORFLOW_LIB_IO_ZLIB_COMPRESSION_OPTIONS_H_
#define TENSORFLOW_LIB_IO_ZLIB_COMPRESSION_OPTIONS_H_
    
      for (auto s: tensor->sizes())
    assert(s == 2);
  for (int i = 0; i < 2; i++)
    assert(reinterpret_cast<float*>(tensor->data())[i] == 5);
    
    