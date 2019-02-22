
        
        
    {
    {    return SingleGradientDef(
        'MergeSingleMapFeatureTensorsGradient',
        '',
        input_blob_names,
        output_blob_names);
  }
};
    
    
<details>
    
    <details>
    
    OPERATOR_SCHEMA(GivenTensorIntFill)
    .NumInputs(0, 1)
    .NumOutputs(1)
    .AllowInplace({{0, 0}})
    .Arg(
        'values',
        'The value for the elements of the output tensor.',
        true /* required */)
    .Arg(
        'shape',
        'The shape of the output tensor.'
        'Cannot set the shape argument and pass in an input at the same time.')
    .Arg(
        'extra_shape',
        'The additional dimensions appended at the end of the shape indicated'
        'by the input blob.'
        'Cannot set the extra_shape argument when there is no input blob.')
    .Arg(
        'input_as_shape',
        '1D tensor containing the desired output shape. First input must be in CPU context.')
    .TensorInferenceFunction(FillerTensorInference<TensorProto_DataType_INT32>);