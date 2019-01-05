
        
            http://www.apache.org/licenses/LICENSE-2.0
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    void CostAnalyzer::GatherCosts() {
  CostGraphDef cost_graph_measured;
  PredictCosts(&measure_estimator_, &cost_graph_measured,
               &total_time_measured_);
  VLOG(1) << 'Graph size: ' << item_->graph.node_size();
  VLOG(1) << 'cost_graph_measured size: ' << cost_graph_measured.node_size();
    }
    
    REGISTER_OP('Ackermann')
    .Output('ackermann: string')
    .Doc(R'doc(
Output a fact about the ackermann function.
)doc');
    
    Status TF_DataType_to_PyArray_TYPE(TF_DataType tf_datatype,
                                   int* out_pyarray_type) {
  switch (tf_datatype) {
    case TF_HALF:
      *out_pyarray_type = NPY_FLOAT16;
      break;
    case TF_FLOAT:
      *out_pyarray_type = NPY_FLOAT32;
      break;
    case TF_DOUBLE:
      *out_pyarray_type = NPY_FLOAT64;
      break;
    case TF_INT32:
      *out_pyarray_type = NPY_INT32;
      break;
    case TF_UINT32:
      *out_pyarray_type = NPY_UINT32;
      break;
    case TF_UINT8:
      *out_pyarray_type = NPY_UINT8;
      break;
    case TF_UINT16:
      *out_pyarray_type = NPY_UINT16;
      break;
    case TF_INT8:
      *out_pyarray_type = NPY_INT8;
      break;
    case TF_INT16:
      *out_pyarray_type = NPY_INT16;
      break;
    case TF_INT64:
      *out_pyarray_type = NPY_INT64;
      break;
    case TF_UINT64:
      *out_pyarray_type = NPY_UINT64;
      break;
    case TF_BOOL:
      *out_pyarray_type = NPY_BOOL;
      break;
    case TF_COMPLEX64:
      *out_pyarray_type = NPY_COMPLEX64;
      break;
    case TF_COMPLEX128:
      *out_pyarray_type = NPY_COMPLEX128;
      break;
    case TF_STRING:
      *out_pyarray_type = NPY_OBJECT;
      break;
    case TF_RESOURCE:
      *out_pyarray_type = NPY_VOID;
      break;
    // TODO(keveman): These should be changed to NPY_VOID, and the type used for
    // the resulting numpy array should be the custom struct types that we
    // expect for quantized types.
    case TF_QINT8:
      *out_pyarray_type = NPY_INT8;
      break;
    case TF_QUINT8:
      *out_pyarray_type = NPY_UINT8;
      break;
    case TF_QINT16:
      *out_pyarray_type = NPY_INT16;
      break;
    case TF_QUINT16:
      *out_pyarray_type = NPY_UINT16;
      break;
    case TF_QINT32:
      *out_pyarray_type = NPY_INT32;
      break;
    case TF_BFLOAT16:
      *out_pyarray_type = Bfloat16NumpyType();
      break;
    default:
      return errors::Internal('Tensorflow type ', tf_datatype,
                              ' not convertible to numpy dtype.');
  }
  return Status::OK();
}
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
#ifndef TENSORFLOW_PYTHON_LIB_CORE_PY_EXCEPTION_REGISTRY_H_
#define TENSORFLOW_PYTHON_LIB_CORE_PY_EXCEPTION_REGISTRY_H_
    
    // Safe containers for an owned TF_Status. On destruction, the handle
// will be deleted by TF_DeleteStatus.
using Safe_TF_StatusPtr = std::unique_ptr<TF_Status, detail::TFStatusDeleter>;
Safe_TF_StatusPtr make_safe(TF_Status* status);
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    b2Polygon TraceEdge(b2Polygon* p); //For use with self-intersecting polygons, finds outline
    
    /Ox /Ob2 /Oi /Ot /I '.' /I '..\..' /I '..\..\src' /D 'NDEBUG' /D '_LIB' /D '_WINDOWS' /D '_CRT_SECURE_NO_DEPRECATE' /D '_CRT_NONSTDC_NO_DEPRECATE' /D 'WIN32'
/GF /FD /MT /GS- /Gy /arch:SSE2 /Zc:wchar_t- /Fp'..\..\out\release8\build\libbulletcollision\libbulletcollision.pch'
/Fo'..\..\out\release8\build\libbulletcollision\\'
/Fd'..\..\out\release8\build\libbulletcollision\bulletcollision.pdb'
/W3 /nologo /c /Wp64 /Zi /errorReport:prompt
    
        // 3 rows to make body rotations equal
	info->m_J1angularAxis[start_index] = 1;
    info->m_J1angularAxis[start_index + s + 1] = 1;
    info->m_J1angularAxis[start_index + s*2+2] = 1;
    if ( info->m_J2angularAxis)
    {
        info->m_J2angularAxis[start_index] = -1;
        info->m_J2angularAxis[start_index + s+1] = -1;
        info->m_J2angularAxis[start_index + s*2+2] = -1;
    }
    
    This software is provided 'as-is', without any express or implied warranty.
In no event will the authors be held liable for any damages arising from the use of this software.
Permission is granted to anyone to use this software for any purpose, 
including commercial applications, and to alter it and redistribute it freely, 
subject to the following restrictions:
    
    #endif //B3_TYPED_CONSTRAINT_H
