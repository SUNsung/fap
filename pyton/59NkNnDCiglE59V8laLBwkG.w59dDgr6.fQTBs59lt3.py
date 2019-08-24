
        
          # Compute log mel spectrogram features.
  log_mel = mel_features.log_mel_spectrogram(
      data,
      audio_sample_rate=vggish_params.SAMPLE_RATE,
      log_offset=vggish_params.LOG_OFFSET,
      window_length_secs=vggish_params.STFT_WINDOW_LENGTH_SECONDS,
      hop_length_secs=vggish_params.STFT_HOP_LENGTH_SECONDS,
      num_mel_bins=vggish_params.NUM_MEL_BINS,
      lower_edge_hertz=vggish_params.MEL_MIN_HZ,
      upper_edge_hertz=vggish_params.MEL_MAX_HZ)
    
        # Set up config.
    config = delf_config_pb2.DelfConfig(
        max_image_size=max_image_size, min_image_size=min_image_size)
    
    default_encoding = sys.getfilesystemencoding()
    
    
class TFIDF(KeywordExtractor):
    
    
def viterbi(obs, states, start_p, trans_p, emit_p):
    V = [{}]  # tabular
    path = {}
    for y in states:  # init
        V[0][y] = start_p[y] + emit_p[y].get(obs[0], MIN_FLOAT)
        path[y] = [y]
    for t in xrange(1, len(obs)):
        V.append({})
        newpath = {}
        for y in states:
            em_p = emit_p[y].get(obs[t], MIN_FLOAT)
            (prob, state) = max(
                [(V[t - 1][y0] + trans_p[y0].get(y, MIN_FLOAT) + em_p, y0) for y0 in PrevStatus[y]])
            V[t][y] = prob
            newpath[y] = path[state] + [y]
        path = newpath
    
            for y in obs_states:
            prob, state = max((V[t - 1][y0] + trans_p[y0].get(y, MIN_INF) +
                               emit_p[y].get(obs[t], MIN_FLOAT), y0) for y0 in prev_states)
            V[t][y] = prob
            mem_path[t][y] = state
    
    file_name = args[0]
    
        def testTokenize_NOHMM(self):
        for content in test_contents:
            result = jieba.tokenize(content,HMM=False)
            assert isinstance(result, types.GeneratorType), 'Test Tokenize Generator error'
            result = list(result)
            assert isinstance(result, list), 'Test Tokenize error on content: %s' % content
            for tk in result:
                print('word %s\t\t start: %d \t\t end:%d' % (tk[0],tk[1],tk[2]), file=sys.stderr)
        print('testTokenize_NOHMM', file=sys.stderr)
    
    jieba.enable_parallel(4)