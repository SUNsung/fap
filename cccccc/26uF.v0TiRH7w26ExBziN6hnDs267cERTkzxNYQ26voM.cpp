
        
        
    {// TODO(nareshmodi): Move EagerCast and ReadVariableOp (which use the C API to
// execute TFE Ops) to a separate common library.
TFE_TensorHandle* EagerCast(TFE_Context* ctx, TFE_TensorHandle* handle,
                            TF_DataType src_type_enum,
                            TF_DataType dst_type_enum, TF_Status* out_status);
}
    
    namespace tensorflow {
namespace python_op_gen_internal {
    }
    }
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    
    {  if (debug) {
    const OpRegistrationData* op_reg_data;
    Status status = OpRegistry::Global()->LookUp(node->op(), &op_reg_data);
    if (!status.ok()) {
      os << '\tCouldn't find op registration for ' << node->op() << std::endl;
    } else if (!op_reg_data->shape_inference_fn) {
      os << '\tCouldn't find shape function for op ' << node->op() << std::endl;
    } else if (properties.HasInputProperties(node->name())) {
      const std::vector<OpInfo::TensorProperties>& props =
          properties.GetInputProperties(node->name());
      for (int i = 0; i < props.size(); ++i) {
        const OpInfo::TensorProperties& prop = props[i];
        if (prop.has_value()) {
          os << '\t'
             << 'input ' << i << ' (' << DataTypeString(prop.dtype())
             << ') has known value' << std::endl;
        }
      }
    }
  }
}
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    Status TF_TensorToPyArray(Safe_TF_TensorPtr tensor, PyObject** out_ndarray);
    
    // Actually dereferences cached numpy arrays. REQUIRES being called while
// holding the GIL.
void ClearDecrefCache();
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    #endif  // TENSORFLOW_PYTHON_LIB_CORE_PY_SEQ_TENSOR_H_

    
        http://www.apache.org/licenses/LICENSE-2.0
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
      // Post 'reopen' event.
  // (This event is received when the user clicked the icon in the Dock).
  static void EmitReopenEvent();
    
    static KeyMap keymap = {
  {'`'    , 'Backquote'},
  {'\\'   , 'Backslash'},
  {'['    , 'BracketLeft'},
  {']'    , 'BracketRight'},
  {','    , 'Comma'},
  {'='    , 'Equal'},
  {'-'    , 'Minus'},
  {'.'    , 'Period'},
  {'''    , 'Quote'},
  {';'    , 'Semicolon'},
  {'/'    , 'Slash'},
  {'\n'   , 'Enter'},
  {'\t'   , 'Tab'},
  {'UP'   , 'ArrowUp'},
  {'DOWN' , 'ArrowDown'},
  {'LEFT' , 'ArrowLeft'},
  {'RIGHT', 'ArrowRight'},
  {'ESC'  , 'Escape'},
  {'MEDIANEXTTRACK', 'MediaTrackNext'},
  {'MEDIAPREVTRACK', 'MediaTrackPrevious'}
};
    
        std::string error() {
      return error_;
    }
    
    
void unregister_fd(int fd) {
  pollfds.erase(
    std::remove_if(pollfds.begin(), pollfds.end(),
        [fd](const struct pollfd &pfd) { return pfd.fd == fd; }),
    pollfds.end());
  client_sessions.erase(fd);
}
    
    #include <string>
#include <vector>
    
    class GetMergeSingleMapFeatureTensorsGradient : public GradientMakerBase {
  using GradientMakerBase::GradientMakerBase;
  vector<OperatorDef> GetGradientDefs() override {
    vector<string> input_blob_names{};
    vector<string> output_blob_names{};
    }
    }
    
    #endif // CAFFE2_OPERATORS_FIND_DUPLICATE_ELEMENTS_OP_H

    
    
    {} // namespace caffe2
    
    #endif // CAFFE2_OPERATORS_FLOOR_OP_H_

    
    #include 'caffe2/core/context.h'
#include 'caffe2/core/operator.h'
    
    namespace mxnet {
    }
    
    /*!
 * Copyright (c) 2016 by Contributors
 * \file caffe_blob.cc
 * \brief Implementations of SetDataGradToBlob given various device/dimension
 * \author Haoran Wang
*/
#include 'caffe_blob.h'
namespace mxnet {
namespace op {
namespace caffe {
    }
    }
    }
    
    /*!
 * Copyright (c) 2016 by Contributors
 * \file caffe_blob.h
 * \brief conversion between tensor and caffeBlob
 * \author Haoran Wang
*/
#ifndef PLUGIN_CAFFE_CAFFE_BLOB_H_
#define PLUGIN_CAFFE_CAFFE_BLOB_H_
    
    #include <mxnet/operator.h>
#include <dmlc/type_traits.h>
    
    DMLC_REGISTER_PARAMETER(CaffeLossParam);
    
    
    {    caffe::InitCaffeBlobs<Dtype>(&bot_, param_.num_data);
    caffe::InitCaffeBlobs<Dtype>(&top_, param_.num_out);
    caffe::InitCaffeBlobs<Dtype>(&wei_, param_.num_weight);
    flags_.resize(param_.num_data);
  }
    
        /** Replace the interior action.
     *
     * @param action The new action, it will replace the running action.
     */
    void setInnerAction(ActionInterval *action);
    /** Return the interior action.
     *
     * @return The interior action.
     */
    ActionInterval* getInnerAction() const { return _innerAction; }
    
        /** 
    @brief Initializes an action with duration.
    @param duration Specify the duration of the FlipX3D action. It's a value in seconds.
    @return If the initialization success, return true; otherwise, return false.
    */
    bool initWithDuration(float duration);
    
    
    {
    {
    {            p.z = (r * ( 1 - cosBeta ) * cosTheta);// '100' didn't work for
            p.x = p.z * sinf(rotateByYAxis) + p.x * cosf(rotateByYAxis);
            p.z = p.z * cosf(rotateByYAxis) - p.x * sinf(rotateByYAxis);
            p.z/=7;
            //    Stop z coord from dropping beneath underlying page in a transition
            // issue #751
            if( p.z < 0.5f )
            {
                p.z = 0.5f;
            }
            
            // Set new coords
            p.x += getGridRect().origin.x;
            setVertex(Vec2(i, j), p);
            
        }
    }
}
    
    
    {// end of actions group
/// @}
    
    Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the 'Software'), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:
    
            for (auto& frameName : frameNames)
        {
            SpriteFrame* spriteFrame = frameCache->getSpriteFrameByName(frameName.asString());
    }
    
    void AtlasNode::calculateMaxItems()
{
    Size s = _textureAtlas->getTexture()->getContentSize();
    
    if (_ignoreContentScaleFactor)
    {
        s = _textureAtlas->getTexture()->getContentSizeInPixels();
    }
    
    _itemsPerColumn = (int)(s.height / _itemHeight);
    _itemsPerRow = (int)(s.width / _itemWidth);
}