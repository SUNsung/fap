
        
        /**
 * \class Predictor
 *
 * \brief Performs prediction on individual training instances or batches of
 * instances for GBTree. The predictor also manages a prediction cache
 * associated with input matrices. If possible, it will use previously
 * calculated predictions instead of calculating new predictions.
 *        Prediction functions all take a GBTreeModel and a DMatrix as input and
 * output a vector of predictions. The predictor does not modify any state of
 * the model itself.
 */
    
    
    {template<typename IndexType, typename DType = real_t>
Parser<IndexType> *
CreateDenseLibSVMParser(const std::string& path,
                        const std::map<std::string, std::string>& args,
                        unsigned part_index,
                        unsigned num_parts) {
  CHECK_NE(args.count('num_col'), 0) << 'expect num_col in dense_libsvm';
  return new DensifyParser<IndexType>(
            Parser<IndexType>::Create(path.c_str(), part_index, num_parts, 'libsvm'),
           uint32_t(atoi(args.at('num_col').c_str())));
}
}  // namespace data
    
    
    {// The number of bits required to represent a given unsigned range
static size_t SymbolBits(size_t num_symbols) {
  auto bits = std::ceil(std::log2(num_symbols));
  return std::max(static_cast<size_t>(bits), size_t(1));
}
}  // namespace detail