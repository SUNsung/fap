
        
        encoder_input_data = np.zeros(
    (len(input_texts), max_encoder_seq_length, num_encoder_tokens),
    dtype='float32')
decoder_input_data = np.zeros(
    (len(input_texts), max_decoder_seq_length, num_decoder_tokens),
    dtype='float32')
decoder_target_data = np.zeros(
    (len(input_texts), max_decoder_seq_length, num_decoder_tokens),
    dtype='float32')
    
        return new_sequences
    
    
def contrastive_loss(y_true, y_pred):
    '''Contrastive loss from Hadsell-et-al.'06
    http://yann.lecun.com/exdb/publis/pdf/hadsell-chopra-lecun-06.pdf
    '''
    margin = 1
    square_pred = K.square(y_pred)
    margin_square = K.square(K.maximum(margin - y_pred, 0))
    return K.mean(y_true * square_pred + (1 - y_true) * margin_square)
    
    the initial state of the RNN layer.
    
        data_format = 'channels_last'
    return_sequences = False
    inputs = np.random.rand(num_samples, sequence_len,
                            input_num_row, input_num_col,
                            input_channel)
    # Tests for statefulness
    model = Sequential()
    kwargs = {'data_format': data_format,
              'return_sequences': return_sequences,
              'filters': filters,
              'kernel_size': (num_row, num_col),
              'stateful': True,
              'batch_input_shape': inputs.shape,
              'padding': 'same'}
    layer = convolutional_recurrent.ConvLSTM2D(**kwargs)
    
    STOP_WORDS = frozenset(('a', 'an', 'and', 'are', 'as', 'at', 'be', 'by', 'can',
                        'for', 'from', 'have', 'if', 'in', 'is', 'it', 'may',
                        'not', 'of', 'on', 'or', 'tbd', 'that', 'the', 'this',
                        'to', 'us', 'we', 'when', 'will', 'with', 'yet',
                        'you', 'your', '的', '了', '和'))
    
    
class TFIDF(KeywordExtractor):
    
    if sys.platform.startswith('java'):
    start_P, trans_P, emit_P = load_model()
else:
    from .prob_start import P as start_P
    from .prob_trans import P as trans_P
    from .prob_emit import P as emit_P