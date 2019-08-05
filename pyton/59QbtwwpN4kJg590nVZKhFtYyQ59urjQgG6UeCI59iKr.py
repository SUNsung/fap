
        
            # Separating the 'table of contents' from the contents (blocks)
    table_of_contents = ''.join(read_me.split('- - -')[0])
    blocks = ''.join(read_me.split('- - -')[1]).split('\n# ')
    for i in range(len(blocks)):
        if i == 0:
            blocks[i] = blocks[i] + '\n'
        else:
            blocks[i] = '# ' + blocks[i] + '\n'
    
      Args:
    grid_height: size of the grid in the y direction (int or int scalar tensor)
    grid_width: size of the grid in the x direction (int or int scalar tensor)
    scales: a 1-d  (float) tensor representing the scale of each box in the
      basis set.
    aspect_ratios: a 1-d (float) tensor representing the aspect ratio of each
      box in the basis set.  The length of the scales and aspect_ratios tensors
      must be equal.
    base_anchor_size: base anchor size as [height, width]
      (float tensor of shape [2])
    anchor_stride: difference in centers between base anchors for adjacent grid
                   positions (float tensor of shape [2])
    anchor_offset: center of the anchor with scale and aspect ratio 1 for the
                   upper left element of the grid, this should be zero for
                   feature networks with only VALID padding and even receptive
                   field size, but may need some additional calculation if other
                   padding is used (float tensor of shape [2])
  Returns:
    a BoxList holding a collection of N anchor boxes
  '''
  ratio_sqrts = tf.sqrt(aspect_ratios)
  heights = scales / ratio_sqrts * base_anchor_size[0]
  widths = scales * ratio_sqrts * base_anchor_size[1]
    
        tiled_anchor_centers = tf.tile(
        tf.stack([ycenter_a, xcenter_a]), [self._num_keypoints, 1])
    tiled_anchor_sizes = tf.tile(
        tf.stack([ha, wa]), [self._num_keypoints, 1])
    tkeypoints = (keypoints - tiled_anchor_centers) / tiled_anchor_sizes
    
      def call(self, inputs, training=None):
    # Override the call arg only if the batchnorm is frozen. (Ignore None)
    if self._training is False:  # pylint: disable=g-bool-id-comparison
      training = self._training
    return super(FreezableBatchNorm, self).call(inputs, training=training)

    
        Args:
      rpn_box_encodings: 3-D float tensor of shape
        [batch_size, num_valid_anchors, self._box_coder.code_size] containing
        predicted boxes.
      rpn_objectness_predictions_with_background: 3-D float tensor of shape
        [batch_size, num_valid_anchors, 2] containing class
        predictions (logits) for each of the anchors.  Note that this
        tensor *includes* background class predictions (at class index 0).
      rpn_features: A 4-D float32 tensor with shape
        [batch_size, height, width, depth] representing image features from the
        RPN.
      anchors: 2-D float tensor of shape
        [num_anchors, self._box_coder.code_size].
      image_shape: A 1D int32 tensors of size [4] containing the image shape.
      true_image_shapes: int32 tensor of shape [batch, 3] where each row is
        of the form [height, width, channels] indicating the shapes
        of true images in the resized images, as resized images can be padded
        with zeros.
    
    
class WeightSharedConvolutionalMaskHead(head.KerasHead):
  '''Weight shared convolutional mask prediction head based on Keras.'''
    
            i = 1