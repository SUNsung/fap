
        
        #ifndef GRPC_INTERNAL_COMPILER_NODE_GENERATOR_HELPERS_H
#define GRPC_INTERNAL_COMPILER_NODE_GENERATOR_HELPERS_H
    
    
    { private:
  GeneratorConfiguration config_;
};
    
    std::vector<grpc::string_ref> SecureAuthContext::FindPropertyValues(
    const grpc::string& name) const {
  if (!ctx_) {
    return std::vector<grpc::string_ref>();
  }
  grpc_auth_property_iterator iter =
      grpc_auth_context_find_properties_by_name(ctx_, name.c_str());
  const grpc_auth_property* property = nullptr;
  std::vector<grpc::string_ref> values;
  while ((property = grpc_auth_property_iterator_next(&iter))) {
    values.push_back(grpc::string_ref(property->value, property->value_length));
  }
  return values;
}
    
    #include 'test/cpp/qps/histogram.h'
    
    grpc::string DescribeMethod(const grpc::protobuf::MethodDescriptor* method) {
  std::stringstream result;
  result << '  rpc ' << method->name()
         << (method->client_streaming() ? '(stream ' : '(')
         << method->input_type()->full_name() << ') returns '
         << (method->server_streaming() ? '(stream ' : '(')
         << method->output_type()->full_name() << ') {}\n';
  if (method->options().deprecated()) {
    result << ' DEPRECATED';
  }
  return result.str();
}
    
    #include 'jsapi.h'
#include 'jsfriendapi.h'
    
    bool js_cocos2dx_studio_Timeline_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_studio_Timeline_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_studio_Timeline(JSContext *cx, JS::HandleObject global);
void register_all_cocos2dx_studio(JSContext* cx, JS::HandleObject obj);
bool js_cocos2dx_studio_Timeline_clone(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_Timeline_gotoFrame(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_Timeline_setNode(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_Timeline_getActionTimeline(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_Timeline_insertFrame(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_Timeline_setActionTag(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_Timeline_addFrame(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_Timeline_getFrames(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_Timeline_getActionTag(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_Timeline_getNode(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_Timeline_removeFrame(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_Timeline_setActionTimeline(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_Timeline_stepToFrame(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_Timeline_create(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_Timeline_Timeline(JSContext *cx, uint32_t argc, jsval *vp);
    
    
    
    
#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,'cc.SimpleAudioEngine',0,&tolua_err)) goto tolua_lerror;
#endif
    
    
    
    
    
    
    
    
    
    			b2FixtureDef sd;
			sd.shape = &shape;
			sd.density = 0.0f;
			sd.restitution = k_restitution;
    
    			b2EdgeShape shape;
			shape.Set(b2Vec2(-20.0f, 0.0f), b2Vec2(20.0f, 0.0f));
    
    	enum
	{
		e_count = 30
	};
    
    			m_body = m_world->CreateBody(&bd);
			m_body->CreateFixture(&box, 1.0f);
    
    			b2EdgeShape shape;
    
    
    {  // Returns a heuristic cutoff on block errors in the sense that we won't
  // consider distortions where a block error is greater than this.
  virtual float BlockErrorLimit() const = 0;
  // Given the search direction (+1 for upwards and -1 for downwards) and the
  // current distance map, fills in *block_weight image with the relative block
  // error adjustment weights.
  // The target_mul param has the same semantics as in DistanceOK().
  // Note that this is essentially a static function in the sense that it does
  // not depend on the last Compare() call.
  virtual void ComputeBlockErrorAdjustmentWeights(
      int direction, int max_block_dist, double target_mul, int factor_x,
      int factor_y, const std::vector<float>& distmap,
      std::vector<float>* block_weight) = 0;
};
    
    void OutputImage::ApplyGlobalQuantization(const int q[3][kDCTBlockSize]) {
  for (int c = 0; c < 3; ++c) {
    components_[c].ApplyGlobalQuantization(&q[c][0]);
  }
}
    
          // The sentinel node becomes the parent node.
      size_t j_end = 2 * n - k;
      tree[j_end].total_count_ =
          tree[left].total_count_ + tree[right].total_count_;
      tree[j_end].index_left_ = static_cast<int16_t>(left);
      tree[j_end].index_right_or_value_ = static_cast<int16_t>(right);
    
    namespace guetzli {
    }
    
    // Computes the DCT (Discrete Cosine Transform) of the 8x8 array in 'block',
// scaled up by a factor of 16. The values in 'block' are laid out row-by-row
// and the result is written to the same memory area.
void ComputeBlockDCT(coeff_t* block);
    
    // Decodes the parsed jpeg coefficients into an RGB image.
// There can be only either 1 or 3 image components, in either case, an RGB
// output image will be generated.
// Only YUV420 and YUV444 sampling factors are supported.
// Vector will be empty if a decoding error occurred.
std::vector<uint8_t> DecodeJpegToRGB(const JPEGData& jpg);
    
    namespace guetzli {
    }
    
    #endif  // GUETZLI_JPEG_ERROR_H_
