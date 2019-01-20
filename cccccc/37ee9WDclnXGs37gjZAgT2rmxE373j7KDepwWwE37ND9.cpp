
        
        void ModelAnalyzer::PrintNodeInfo(const NodeDef* node,
                                  const GraphProperties& properties, bool debug,
                                  std::ostream& os) const {
  os << node->name() << ' [' << node->op() << ']' << std::endl;
  if (properties.HasOutputProperties(node->name())) {
    const std::vector<OpInfo::TensorProperties>& props =
        properties.GetOutputProperties(node->name());
    for (int i = 0; i < props.size(); ++i) {
      const OpInfo::TensorProperties& prop = props[i];
      os << '\t'
         << 'output ' << i << ' (' << DataTypeString(prop.dtype())
         << ') has shape ';
      if (prop.shape().unknown_rank()) {
        os << '?';
      } else {
        os << '[';
        for (int i = 0; i < prop.shape().dim_size(); ++i) {
          if (i > 0) {
            os << ', ';
          }
          if (prop.shape().dim(i).size() >= 0) {
            // Print the actual dimension.
            os << prop.shape().dim(i).size();
          } else if (prop.shape().dim(i).size() == -1) {
            // We don't know anything about the dimension.
            os << '?';
          } else {
            // Symbolic dimension.
            os << 'x' << -prop.shape().dim(i).size();
          }
        }
        os << ']';
      }
      os << std::endl;
    }
  }
    }
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    
    {  DCHECK(PyDict_Check(code_to_exc_type_map));
  PyObject* key;
  PyObject* value;
  Py_ssize_t pos = 0;
  while (PyDict_Next(code_to_exc_type_map, &pos, &key, &value)) {
    TF_Code code = static_cast<TF_Code>(PyLong_AsLong(key));
    singleton_->exc_types_[code] = value;
    // The exception classes should also have the lifetime of the process, but
    // incref just in case.
    Py_INCREF(value);
  }
}
    
    namespace tensorflow {
    }
    
        /*
        Convert YUV420sp image to BGR
    */
    void yuv420sp2bgr(const Size2D &size,
                      const u8 *  yBase, ptrdiff_t  yStride,
                      const u8 * uvBase, ptrdiff_t uvStride,
                      u8 * dstBase, ptrdiff_t dstStride);
    
    
    {        // these are measured in elements
        size_t left, right, top, bottom;
    };
    
    
    {    func(size, srcBase, srcStride, dstBase, dstStride);
#else
    (void)size;
    (void)srcBase;
    (void)srcStride;
    (void)dstBase;
    (void)dstStride;
    (void)shift;
#endif
}
    
    
    {    // the final pass, form the final image
    uint8x16_t v2 = vmovq_n_u8(2);
    const u8* ptrmap = map + mapstep + 1;
    for (size_t i = 0; i < size.height; i++, ptrmap += mapstep)
    {
        u8* _dst = internal::getRowPtr(dstBase, dstStride, i);
        ptrdiff_t j = 0;
        for (; j < (ptrdiff_t)size.width - 16; j += 16)
        {
            internal::prefetch(ptrmap);
            uint8x16_t vmap = vld1q_u8(ptrmap + j);
            uint8x16_t vdst = vceqq_u8(vmap, v2);
            vst1q_u8(_dst+j, vdst);
        }
        for (; j < (ptrdiff_t)size.width; j++)
            _dst[j] = (u8)-(ptrmap[j] >> 1);
    }
}
    
    
    {    if (!parametersSupported) {
        std::cerr << 'internal error: attempted to use a function with unsupported parameters' << std::endl;
        std::abort();
    }
}
    
    void convert(const Size2D &_size,
             const u8 * srcBase, ptrdiff_t srcStride,
             s16 * dstBase, ptrdiff_t dstStride)
{
    convert(_size, srcBase, srcStride, (u16*)dstBase, dstStride);
}
    
    Example 2 (with KEY):
DATA  = [1, 2, 3, 4, 5, 6, 7, 8]
KEY   = [0, 1, 3, 2, 1, 0, 1, 0]
RANGES = [
  [
    [2, 4],
    [0, 2],
  ],
  [
    [0, 0],
    [6, 2],
  ]
]
lengths = [4, 2]
OUTPUT[0] = [[6, 5, 4, 3], [0, 0, 0, 0]]
OUTPUT[1] = [[1, 2], [8, 7]]
    
    class GetFloatToHalfGradient : public GradientMakerBase {
  using GradientMakerBase::GradientMakerBase;
  vector<OperatorDef> GetGradientDefs() override {
    return SingleGradientDef(
        'HalfToFloat', '', vector<string>{GO(0)}, vector<string>{GI(0)});
  }
};
REGISTER_GRADIENT(FloatToHalf, GetFloatToHalfGradient);
    
        /** World boundaries. */
    float _leftBoundary;
    float _rightBoundary;
    float _topBoundary;
    float _bottomBoundary;
    
    /** Horizontal (x) and vertical (y) offset values. */
    float _offsetX;
    float _offsetY;
    
    Rect _worldRect;
    
    
    {// end of actions group
/// @}
    
    
    {    _previousPosition = target->getPosition();
    _accumulatedDiff.setZero();
}