    check.In('sources', self._linked_feature_dims,
             'Missing required linked feature')
    check.In('targets', self._linked_feature_dims,
             'Missing required linked feature')
    self._source_dim = self._linked_feature_dims['sources']
    self._target_dim = self._linked_feature_dims['targets']
    
    flags.DEFINE_string('actual_file', None, 'File to test.')
flags.DEFINE_string('expected_file', None, 'File with expected contents.')
    
            self.assertEqual(len(test_reader_strings), len(annotations))
        pred_sentences = []
        for annotation in annotations:
          pred_sentences.append(sentence_pb2.Sentence())
          pred_sentences[-1].ParseFromString(annotation)
    
        By default this will get the strings from the blns.txt file