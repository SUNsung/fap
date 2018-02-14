
        
        enum CommentPlacement {
  commentBefore = 0,      ///< a comment placed on the line before a value
  commentAfterOnSameLine, ///< a comment just after a value on the same line
  commentAfter, ///< a comment on the line after a value (only make sense for
  /// root value)
  numberOfCommentPlacement
};
    
    bool Value::isNull() const { return type_ == nullValue; }
    
    #include <google/protobuf/compiler/code_generator.h>
#include <google/protobuf/compiler/plugin.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/descriptor.pb.h>
#include <google/protobuf/io/printer.h>
#include <google/protobuf/io/zero_copy_stream.h>
#include <google/protobuf/stubs/strutil.h>
    
    
    { private:
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(MapFieldGenerator);
};
    
    const Options* SourceGeneratorBase::options() {
  return this->options_;
}
    
    namespace google {
namespace protobuf {
  namespace io {
    class Printer;             // printer.h
  }
}
    }
    
     private:
  const FieldDescriptor* descriptor_;
  Context* context_;
  ClassNameResolver* name_resolver_;
  string scope_;
    
    
    {  // Calculate num_trailing and trailing_certainty.
  for (*trailing_certainty = 0.0f, *num_rebuilt_trailing = 0;
       *num_rebuilt_trailing < trailing_outliers;
       (*num_rebuilt_trailing)++) {
    int blob_idx = num_blobs - 1 - *num_rebuilt_trailing;
    float char_certainty = word->best_choice->certainty(blob_idx);
    if (char_certainty > *unlikely_threshold) {
      break;
    }
    if (char_certainty < *trailing_certainty) {
      *trailing_certainty = char_certainty;
    }
  }
}
    
      // Sets up the norm_truth_word from truth_word using the given DENORM.
  void SetupNormTruthWord(const DENORM& denorm);
    
    
    {  name += UNLV_EXT;              //add extension
  if ((pdfp = fopen (name.string (), 'rb')) == NULL) {
    return false;                //didn't read one
  } else {
    while (tfscanf(pdfp, '%d %d %d %d %*s', &x, &y, &width, &height) >= 4) {
                                 //make rect block
      block = new BLOCK (name.string (), TRUE, 0, 0,
                         (inT16) x, (inT16) (ysize - y - height),
                         (inT16) (x + width), (inT16) (ysize - y));
                                 //on end of list
      block_it.add_to_end (block);
    }
    fclose(pdfp);
  }
  return true;
}
    
    
    {    ICOORD pt;
    int halfwidth;
  };
  // Type holds the distance of each point from the fitted line and the point
  // itself. Use of double allows integer distances from ICOORDs to be stored
  // exactly, and also the floating point results from ConstrainedFit.
  typedef KDPairInc<double, ICOORD> DistPointPair;
    
    double LLSQ::m() const {  // get gradient
  double covar = covariance();
  double x_var = x_variance();
  if (x_var != 0.0)
    return covar / x_var;
  else
    return 0.0;                    // too little
}
    
    
/**********************************************************************
 * ROW::ROW
 *
 * Constructor to build a ROW. Only the stats stuff are given here.
 * The words are added directly.
 **********************************************************************/
    
        void close() {
        loop->post([this]() {
            delete this;
        });
    }
    
    
    {        delete transferData;
        transferCb(s);
    }
    
            uv_os_sock_t listenFd = SOCKET_ERROR;
        addrinfo *listenAddr;
        if ((options & uS::ONLY_IPV4) == 0) {
            for (addrinfo *a = result; a && listenFd == SOCKET_ERROR; a = a->ai_next) {
                if (a->ai_family == AF_INET6) {
                    listenFd = netContext->createSocket(a->ai_family, a->ai_socktype, a->ai_protocol);
                    listenAddr = a;
                }
            }
        }
    
    template <bool isServer>
struct WIN32_EXPORT Group : protected uS::NodeData {
protected:
    friend struct Hub;
    friend struct WebSocket<isServer>;
    friend struct HttpSocket<false>;
    friend struct HttpSocket<true>;
    }