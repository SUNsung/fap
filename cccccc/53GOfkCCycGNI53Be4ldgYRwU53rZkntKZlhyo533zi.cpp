
        
          // Return value from Code() is prelude_ + result_.
  string prelude_;  // Code before function definition
  string result_;   // Function definition
    
    // Comparisons on PyBfloat16s.
PyObject* PyBfloat16_RichCompare(PyObject* a, PyObject* b, int op) {
  bfloat16 x, y;
  if (!AsBfloat16(a, &x) || !AsBfloat16(b, &y)) return nullptr;
  bool result;
  switch (op) {
    case Py_LT:
      result = x < y;
      break;
    case Py_LE:
      result = x <= y;
      break;
    case Py_EQ:
      result = x == y;
      break;
    case Py_NE:
      result = x != y;
      break;
    case Py_GT:
      result = x > y;
      break;
    case Py_GE:
      result = x >= y;
      break;
    default:
      LOG(FATAL) << 'Invalid op type ' << op;
  }
  return PyBool_FromLong(result);
}
    
    // Opaque and unique identifier for the cuda platform.
// This is needed so that plugins can refer to/identify this platform without
// instantiating a CudaPlatform object.
// This is broken out here to avoid a circular dependency between CudaPlatform
// and CudaExecutor.
extern const Platform::Id kCudaPlatformId;
    
    /**
 * Provides the minimal api for a simple out of line executor that can run non-cancellable
 * callbacks.
 *
 * The contract for scheduling work on an executor is that it never blocks the caller.  It doesn't
 * necessarily need to offer forward progress guarantees, but actual calls to schedule() should not
 * deadlock.
 *
 * If you manage the lifetime of your executor using a shared_ptr, you can begin a chain of
 * execution like this:
 *      ExecutorFuture(myExec)
 *          .then([] { return doThing1(); })
 *          .then([] { return doThing2(); })
 *          ...
 */
class OutOfLineExecutor {
public:
    using Task = unique_function<void(Status)>;
    }
    
        void _incrementHistogram(OperationContext* opCtx,
                             long long latency,
                             OperationLatencyHistogram* histogram,
                             Command::ReadWriteType readWriteType);
    
    #include 'mongo/platform/basic.h'
    
    
    {
    {        BSONElement a = fixed['a'];
        ASSERT(o['a'].type() == bsonTimestamp);
        ASSERT(o['a'].timestampValue() == 0);
        ASSERT(a.type() == bsonTimestamp);
        ASSERT(a.timestampValue() > 0);
    }
};
    
    
//---------------------------------------------------------------------
//
//   patternText
//
//---------------------------------------------------------------------
UText *RegexPattern::patternText(UErrorCode      &status) const {
    if (U_FAILURE(status)) {return NULL;}
    status = U_ZERO_ERROR;
    }
    
    UnicodeString&
SelectFormat::format(const Formattable& obj,
                   UnicodeString& appendTo,
                   FieldPosition& pos,
                   UErrorCode& status) const
{
    if (U_FAILURE(status)) {
        return appendTo;
    }
    if (obj.getType() == Formattable::kString) {
        return format(obj.getString(status), appendTo, pos, status);
    } else {
        status = U_ILLEGAL_ARGUMENT_ERROR;
        return appendTo;
    }
}