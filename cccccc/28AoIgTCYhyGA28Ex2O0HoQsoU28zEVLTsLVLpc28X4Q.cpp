
        
            D3D_FEATURE_LEVEL featureLevels[] =
    {
        D3D_FEATURE_LEVEL_11_0,
        D3D_FEATURE_LEVEL_10_1,
        D3D_FEATURE_LEVEL_10_0,
    };
    UINT numFeatureLevels = ARRAYSIZE(featureLevels);
    
    cv::Mat dls::skewsymm(const cv::Mat * X1)
{
    cv::MatConstIterator_<double> it = X1->begin<double>();
    return (cv::Mat_<double>(3,3) <<        0, -*(it+2),  *(it+1),
                                      *(it+2),        0, -*(it+0),
                                     -*(it+1),  *(it+0),       0);
}
    
      // Calculate the normalized form x^3 + a2 * x^2 + a1 * x + a0 = 0
  double inv_a = 1. / a;
  double b_a = inv_a * b, b_a2 = b_a * b_a;
  double c_a = inv_a * c;
  double d_a = inv_a * d;
    
    
    {    bool checkSubsetPublic( const CvMat* ms1, int count, bool checkPartialSubset );
};
    
        // Extension: ARB_framebuffer_object
    
        // assign a part of the matrix (used for parallelized data copying--our matrices can be 32 MB and more)
    void assign(const ssematrixbase &other, size_t i, size_t n)
    {
        assert(cols() == other.cols() && rows() == other.rows());
        assert(i < n);
        const size_t j0 = numcols * i / n;
        const size_t j1 = numcols * (i + 1) / n;
        const size_t totalelem = colstride * (j1 - j0);
        if (totalelem > 0)
            memcpy(&(*this)(0, j0), &other(0, j0), totalelem * sizeof(*p));
    }
    
        Matrix<float> mBdense(c_deviceIdZero);
    mBdense.AssignTruncateBottomOf(Matrix<float>::RandomUniform(dim2, dim1, c_deviceIdZero, -5.0f, 0.4f, IncrementCounter()), 0);
    Matrix<float> mBsparse(mBdense.DeepClone());
    mBsparse.SwitchToMatrixType(MatrixType::SPARSE, matrixFormatSparseCSR, true);
    
        StreamMinibatchInputs inputMatrices;
    for (auto& node : featureNodes)
        inputMatrices.AddInput(node->NodeName(), node->ValuePtr(), node->GetMBLayout(), node->GetSampleLayout());
    
    template <class ConfigRecordType, typename ElemType>
ComputationNetworkPtr GetModelFromConfig(const ConfigRecordType& config, const wstring& outputNodeNamesConfig, vector<wstring>& outputNodeNamesVector)
{
    DEVICEID_TYPE deviceId = DeviceFromConfig(config);
    }
    
    
    {    return std::equal(s1.begin(), s1.end(), s2.begin(), [](const TElement& a, const TElement& b)
    {
        return std::tolower(a) == std::tolower(b);
    });
}
    
    
    {public:
    inline const_array_ref(const _T* ptr, size_t size) throw()
        : data(ptr), n(size)
    {
    }
    inline const_array_ref() throw()
        : data(NULL), n(0)
    {
    } // in case we have a vector of this
    inline const _T& operator[](size_t i) const throw()
    {
        check_index(i);
        return data[i];
    }
    inline size_t size() const throw()
    {
        return n;
    }
    inline const _T* begin()
    {
        return data;
    }
    inline const _T* end()
    {
        return data + n;
    }
    inline const _T& front() const throw()
    {
        check_index(0);
        return data[0];
    }
    inline const _T& back() const throw()
    {
        check_index(0);
        return data[n - 1];
    }
    // construct from other vector types
    template <class _V>
    inline const_array_ref(const _V& v)
        : data(v.size() > 0 ? &v[0] : NULL), n((size_t) v.size())
    {
    }
};
    
    class float4
{
    __m128 v; // value
private:
    // return the low 'float'
    float f0() const
    {
        float f;
        _mm_store_ss(&f, v);
        return f;
    }
    // construct from a __m128, assuming it is a f32 vector (needed for directly returning __m128 below)
    float4(const __m128& v)
        : v(v)
    {
    }
    // return as a __m128 --should this be a reference?
    operator __m128() const
    {
        return v;
    }
    // assign a __m128 (needed for using nested float4 objects inside this class, e.g. sum())
    float4& operator=(const __m128& other)
    {
        v = other;
        return *this;
    }
    }
    
    namespace guetzli {
    }
    
    typedef void (*Transform1d)(const double* in, int stride, double* out);
    
    
    {}  // namespace guetzli
    
    #ifndef GUETZLI_FDCT_H_
#define GUETZLI_FDCT_H_
    
    // Butteraugli scores that correspond to JPEG quality levels, starting at
// kLowestQuality. They were computed by taking median BA scores of JPEGs
// generated using libjpeg-turbo at given quality from a set of PNGs.
// The scores above quality level 100 are just linearly decreased so that score
// for 110 is 90% of the score for 100.
const double kScoreForQuality[] = {
  2.810761,  // 70
  2.729300,
  2.689687,
  2.636811,
  2.547863,
  2.525400,
  2.473416,
  2.366133,
  2.338078,
  2.318654,
  2.201674,  // 80
  2.145517,
  2.087322,
  2.009328,
  1.945456,
  1.900112,
  1.805701,
  1.750194,
  1.644175,
  1.562165,
  1.473608,  // 90
  1.382021,
  1.294298,
  1.185402,
  1.066781,
  0.971769,  // 95
  0.852901,
  0.724544,
  0.611302,
  0.443185,
  0.211578,  // 100
  0.209462,
  0.207346,
  0.205230,
  0.203114,
  0.200999,  // 105
  0.198883,
  0.196767,
  0.194651,
  0.192535,
  0.190420,  // 110
  0.190420,
};
    
    	if (genSend) {
		printer->Print(vars, 'func (x *$StreamType$) Send(m *$Request$) error {\n');
		printer->Indent();
		printer->Print('return x.ClientStream.SendMsg(m)\n');
		printer->Outdent();
		printer->Print('}\n\n');
	}
    
    
    {    auto stream = stub_->SayManyHellos(&context, request_msg);
    while (stream->Read(&response_msg)) {
      const HelloReply *response = response_msg.GetRoot();
      callback(response->message()->str());
    }
    auto status = stream->Finish();
    if (!status.ok()) {
      std::cerr << status.error_code() << ': ' << status.error_message()
                << std::endl;
      callback('RPC failed');
    }
  }
    
    ::grpc::Status MonsterStorage::Service::Store(::grpc::ServerContext* context, const flatbuffers::grpc::Message<Monster>* request, flatbuffers::grpc::Message<Stat>* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, '');
}
    
    #if defined(ARDUINO) && !defined(ARDUINOSTL_M_H)
  #include <utility.h>
#else
  #include <utility>
#endif
    
    
    {}  // namespace flatbuffers
    
    // Get any table field as a string, regardless of what type it is.
// You may pass nullptr for the schema if you don't care to have fields that
// are of table type pretty-printed.
inline std::string GetAnyFieldS(const Table &table,
                                const reflection::Field &field,
                                const reflection::Schema *schema) {
  auto field_ptr = table.GetAddressOf(field.offset());
  return field_ptr ? GetAnyValueS(field.type()->base_type(), field_ptr, schema,
                                  field.type()->index())
                   : '';
}
    
    
    {
    {        // Start the ASIO io_service run loop
        echo_server.run();
    } catch (websocketpp::exception const & e) {
        std::cout << e.what() << std::endl;
    } catch (...) {
        std::cout << 'other exception' << std::endl;
    }
}

    
    int totalConnections = 500000;
int port = 3000;
    
    template <bool isServer>
void Group<isServer>::addHttpSocket(HttpSocket<isServer> *httpSocket) {
    if (httpSocketHead) {
        httpSocketHead->prev = httpSocket;
        httpSocket->next = httpSocketHead;
    } else {
        httpSocket->next = nullptr;
        // start timer
        httpTimer = new uS::Timer(hub->getLoop());
        httpTimer->setData(this);
        httpTimer->start([](uS::Timer *httpTimer) {
            Group<isServer> *group = (Group<isServer> *) httpTimer->getData();
            group->forEachHttpSocket([](HttpSocket<isServer> *httpSocket) {
                if (httpSocket->missedDeadline) {
                    httpSocket->terminate();
                } else if (!httpSocket->outstandingResponsesHead) {
                    httpSocket->missedDeadline = true;
                }
            });
        }, 1000, 1000);
    }
    httpSocketHead = httpSocket;
    httpSocket->prev = nullptr;
}
    
            if (status < 0) {
            STATE::onEnd((Socket *) p);
            return;
        }
    
    enum HttpMethod {
    METHOD_GET,
    METHOD_POST,
    METHOD_PUT,
    METHOD_DELETE,
    METHOD_PATCH,
    METHOD_OPTIONS,
    METHOD_HEAD,
    METHOD_TRACE,
    METHOD_CONNECT,
    METHOD_INVALID
};