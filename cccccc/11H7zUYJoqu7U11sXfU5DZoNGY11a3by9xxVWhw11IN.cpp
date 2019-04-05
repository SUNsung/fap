
        
        data:
 [8. 2. 1. 1. 7. 8. 1.]
indices:
 [3 5 6]
    
    #endif // CAFFE2_OPERATORS_JSD_OP_H_

    
    #endif  // TESSERACT_CCSTRUCT_DEBUGPIXA_H_

    
      // Returns the direction of the fitted line as a unit vector, using the
  // least mean squared perpendicular distance. The line runs through the
  // mean_point, i.e. a point p on the line is given by:
  // p = mean_point() + lambda * vector_fit() for some real number lambda.
  // Note that the result (0<=x<=1, -1<=y<=-1) is directionally ambiguous
  // and may be negated without changing its meaning, since a line is only
  // unique to a range of pi radians.
  // Modernists prefer to think of this as an Eigenvalue problem, but
  // Pearson had the simple solution in 1901.
  //
  // Note that this is equivalent to returning the Principal Component in PCA,
  // or the eigenvector corresponding to the largest eigenvalue in the
  // covariance matrix.
  FCOORD vector_fit() const;
    
    bool ParagraphModel::ValidBodyLine(int lmargin, int lindent,
                                   int rindent, int rmargin) const {
  switch (justification_) {
    case JUSTIFICATION_LEFT:
      return NearlyEqual(lmargin + lindent, margin_ + body_indent_,
                         tolerance_);
    case JUSTIFICATION_RIGHT:
      return NearlyEqual(rmargin + rindent, margin_ + body_indent_,
                         tolerance_);
    case JUSTIFICATION_CENTER:
      return NearlyEqual(lindent, rindent, tolerance_ * 2);
    default:
      // shouldn't happen
      return false;
  }
}
    
    void Assembler::rlwinm(const Reg64& ra, const Reg64& rs, uint8_t sh, uint8_t mb,
                       uint16_t me, bool rc) {
  EmitMForm(21, rn(rs), rn(ra), rn(sh), mb, me, rc);
}
    
    public:
  static void Add(InfoVec& out, const char* name, const std::string& value);
  static void AddServerStats(InfoVec& out, const char* name,
                             const char* statsName = nullptr);
    
      path_str += strlen(prefix);
  path_len -= strlen(prefix);
    
    
    {};
    
    using namespace ::apache::thrift;
using namespace ::apache::thrift::protocol;
using namespace ::apache::thrift::transport;
using namespace ::apache::thrift::server;
    
    
  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->code);
          this->__isset.code = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->message);
          this->__isset.message = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->uuid);
          this->__isset.uuid = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }
    
      void __set_code(const int32_t val);