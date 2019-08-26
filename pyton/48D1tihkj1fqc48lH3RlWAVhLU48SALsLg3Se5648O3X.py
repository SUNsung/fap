
        
            # Run tested function.
    with tf.Graph().as_default() as g, self.session(graph=g) as sess:
      extractor = feature_aggregation_extractor.ExtractAggregatedRepresentation(
          sess, config)
      with self.assertRaisesRegex(
          ValueError,
          r'Incorrect arguments: sum\(num_features_per_region\) and '
          r'features.shape\[0\] are different'):
        extractor.Extract(features, num_features_per_region)
    
      model = create_model_fn()
    
      include_instance_masks = (fields.InputDataFields.groundtruth_instance_masks
                            in tensor_dict)
  include_keypoints = (fields.InputDataFields.groundtruth_keypoints
                       in tensor_dict)
  include_multiclass_scores = (fields.InputDataFields.multiclass_scores
                               in tensor_dict)
  if data_augmentation_options:
    tensor_dict = preprocessor.preprocess(
        tensor_dict, data_augmentation_options,
        func_arg_map=preprocessor.get_default_func_arg_map(
            include_label_weights=True,
            include_multiclass_scores=include_multiclass_scores,
            include_instance_masks=include_instance_masks,
            include_keypoints=include_keypoints))
    
    This class takes a similarity matrix and matches columns to rows based on the
maximum value per column. One can specify matched_thresholds and
to prevent columns from matching to rows (generally resulting in a negative
training example) and unmatched_theshold to ignore the match (generally
resulting in neither a positive or negative training example).
    
      def __init__(self, use_matmul_gather=False):
    '''Constructs a Matcher.
    
    BOX_ENCODINGS = box_predictor.BOX_ENCODINGS
CLASS_PREDICTIONS_WITH_BACKGROUND = (
    box_predictor.CLASS_PREDICTIONS_WITH_BACKGROUND)
MASK_PREDICTIONS = box_predictor.MASK_PREDICTIONS
    
      def __init__(self,
               is_training,
               num_classes,
               freeze_batchnorm,
               conv_hyperparams,
               mask_height=14,
               mask_width=14,
               mask_prediction_num_conv_layers=2,
               mask_prediction_conv_depth=256,
               masks_are_class_agnostic=False,
               convolve_then_upsample=False,
               name=None):
    '''Constructor.
    
    
def build_graph(pipeline_config,
                shapes_info,
                input_type='encoded_image_string_tensor',
                use_bfloat16=False):
  '''Builds TPU serving graph of ssd to be exported.
    
            epoch_gen_loss = []
        epoch_disc_loss = []
    
        def _get_node_attribute_at_index(self, node_index, attr, attr_name):
        '''Retrieves an attribute (e.g. input_tensors) from a node.
    
    nb_examples = 100
in_encoder = encoder_input_data[:nb_examples]
in_decoder = np.zeros(
    (len(input_texts), max_decoder_seq_length, num_decoder_tokens),
    dtype='float32')
    
    input_characters = sorted(list(input_characters))
target_characters = sorted(list(target_characters))
num_encoder_tokens = len(input_characters)
num_decoder_tokens = len(target_characters)
max_encoder_seq_length = max([len(txt) for txt in input_texts])
max_decoder_seq_length = max([len(txt) for txt in target_texts])
    
    decoder_inputs = model.input[1]   # input_2
decoder_state_input_h = Input(shape=(latent_dim,), name='input_3')
decoder_state_input_c = Input(shape=(latent_dim,), name='input_4')
decoder_states_inputs = [decoder_state_input_h, decoder_state_input_c]
decoder_lstm = model.layers[3]
decoder_outputs, state_h_dec, state_c_dec = decoder_lstm(
    decoder_inputs, initial_state=decoder_states_inputs)
decoder_states = [state_h_dec, state_c_dec]
decoder_dense = model.layers[4]
decoder_outputs = decoder_dense(decoder_outputs)
decoder_model = Model(
    [decoder_inputs] + decoder_states_inputs,
    [decoder_outputs] + decoder_states)
    
    # Build the InceptionV3 network with our placeholder.
# The model will be loaded with pre-trained ImageNet weights.
model = inception_v3.InceptionV3(weights='imagenet',
                                 include_top=False)
dream = model.input
print('Model loaded.')
    
    from keras.preprocessing import sequence
from keras.models import Sequential
from keras.layers import Dense, Embedding
from keras.layers import LSTM
from keras.datasets import imdb
    
    
def sparse_top_k_categorical_accuracy(y_true, y_pred, k=5):
    # If the shape of y_true is (num_samples, 1), flatten to (num_samples,)
    return K.cast(K.in_top_k(y_pred, K.cast(K.flatten(y_true), 'int32'), k),
                  K.floatx())
    
        一般用法
        ```
        x = attention1d(x)
        o = dense(x, n_unit)
        ```
    '''
    n_input = int(x.get_shape()[-1])
    
    
# TODO(huay): char_cnn_embedding
def char_cnn_embedding(x, c_embed_size=8, share_cnn_weights=True, name='char_cnn_embedding', reuse=None):
    '''
    In:  [N, max_n_word, max_n_char]
    Out: [N, max_n_word, c_embed_size]
    
        公式
        `o = H(x, W)T(x, W) + x(1 - T(x, W))`
    其中
        H, T = conv2d
    '''
    if isinstance(kernel_size, int):
        kernel_size = [kernel_size] * 2
    if isinstance(strides, int):
        strides = [strides] * 4
    
        with tf.variable_scope(name or 'attention_flow', reuse=reuse):
        h_expand = tf.tile(tf.expand_dims(h, axis=2), [1, 1, J, 1])  # [N, T, J, d]
        u_expand = tf.tile(tf.expand_dims(u, axis=1), [1, T, 1, 1])  # [N, T, J, d]
        hu = tf.multiply(h_expand, u_expand)  # [N, T, J, d]
        h_u_hu = tf.concat([h_expand, u_expand, hu], axis=-1)  # [N, T, J, 3d]
        W_s = get_w([3 * d, 1])  # [3d, 1]