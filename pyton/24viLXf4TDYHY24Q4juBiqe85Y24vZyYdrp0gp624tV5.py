
        
          def postprocess(self, embeddings_batch):
    '''Applies postprocessing to a batch of embeddings.
    
        features_filename = index_list[i] + _DELF_EXTENSION
    features_fullpath = os.path.join(cmd_args.features_dir, features_filename)
    _, _, features, _, _ = feature_io.ReadFromFile(features_fullpath)
    if features.size != 0:
      assert features.shape[1] == _DELF_DIM
    for feature in features:
      features_for_clustering.append(feature)
    
      # Read list of images.
  tf.logging.info('Reading list of images...')
  image_paths = _ReadImageList(cmd_args.list_images_path)
  num_images = len(image_paths)
  tf.logging.info('done! Found %d images', num_images)
    
      if channels != 3:
    raise ValueError('image has incorrect number of channels: %d' % channels)
    
    
if __name__ == '__main__':
  parser = argparse.ArgumentParser()
  parser.register('type', 'bool', lambda v: v.lower() == 'true')
  parser.add_argument(
      '--predictions_path',
      type=str,
      default='/tmp/predictions.csv',
      help='''
      Path to CSV predictions file, formatted with columns 'id,landmarks' (the
      file should include a header).
      ''')
  parser.add_argument(
      '--solution_path',
      type=str,
      default='/tmp/solution.csv',
      help='''
      Path to CSV solution file, formatted with columns 'id,landmarks,Usage'
      (the file should include a header).
      ''')
  cmd_args, unparsed = parser.parse_known_args()
  app.run(main=main, argv=[sys.argv[0]] + unparsed)

    
      def testMeanMedianPositionWorks(self):
    # Define input.
    predictions = _CreateRetrievalPredictions()
    solution = _CreateRetrievalSolution()
    
    current_path = os.path.dirname(os.path.abspath(__file__))
root_path = os.path.abspath( os.path.join(current_path, os.pardir, os.pardir))
data_path = os.path.abspath(os.path.join(root_path, os.pardir, os.pardir, 'data'))
module_data_path = os.path.join(data_path, 'gae_proxy')
python_path = os.path.abspath( os.path.join(root_path, 'python27', '1.0'))
    
        if __hostsdeny__ and netloc.endswith(__hostsdeny__):
        start_response('403 Forbidden', [('Content-Type', 'text/html')])
        yield message_html('403 Hosts Deny', 'Hosts Deny(%r)' % netloc, detail='共用appid因为资源有限，限制观看视频和文件下载等消耗资源过多的访问，请使用自己的appid <a href=' https://github.com/XX-net/XX-Net/wiki/Register-Google-appid' target='_blank'>帮助</a> ')
        raise StopIteration
    
    
class RecognitionException(Exception):
    '''@brief The root of the ANTLR exception hierarchy.
    
        def __init__(self, stream, first, last):
        ReplaceOp.__init__(self, stream, first, last, None)
    
            m = EmailMessage()
        m['Subject'] = 'Hello-Wörld!-Hello-Wörld!-Hello-Wörlds123!-Hello' \
                       ' Wörld!Hello Wörld!'
        self.assertEqual(bytes(m),
                         b'Subject: =?utf-8?q?Hello-W=C3=B6rld!-Hello-W'
                         b'=C3=B6rld!-Hello-W=C3=B6rlds123!?=\n'
                         b' =?utf-8?q?-Hello_W=C3=B6rld!Hello_W=C3=B6rld!?=\n\n')
    
    def escape(pathname):
    '''Escape all special characters.
    '''
    # Escaping is done by wrapping any of '*?[' between square brackets.
    # Metacharacters do not work in the drive part and shouldn't be escaped.
    drive, pathname = os.path.splitdrive(pathname)
    if isinstance(pathname, bytes):
        pathname = magic_check_bytes.sub(br'[\1]', pathname)
    else:
        pathname = magic_check.sub(r'[\1]', pathname)
    return drive + pathname

    
    
class Professor(AbstractExpert):
    @property
    def is_eager_to_contribute(self):
        return True if self.blackboard.common_state['problems'] > 100 else False
    
    
class Blackboard(object):
    def __init__(self):
        self.experts = []
        self.common_state = {
            'problems': 0,
            'suggestions': 0,
            'contributions': [],
            'progress': 0,  # percentage, if 100 -> task is finished
        }
    
    
if __name__ == '__main__':
    import doctest
    doctest.testmod()

    
        def __repr__(self):
        fmt = '<Price: {}, price after discount: {}>'
        return fmt.format(self.price, self.price_after_discount())
    
    *Examples in Python ecosystem:
Django class based views: https://docs.djangoproject.com/en/2.1/topics/class-based-views/
'''
    
    *What does this example do?
    
    
if __name__ == '__main__':
    import doctest
    
    
def main():
    '''
    >>> computer_facade = ComputerFacade()
    >>> computer_facade.start()
    Freezing processor.
    Loading from 0x00 data: 'Some data from sector 100 with size 1024'.
    Jumping to: 0x00
    Executing.
    '''
    
    
# ---------------------------------------------------------------------------- #
# Mask R-CNN outputs and losses
# ---------------------------------------------------------------------------- #
    
        def test_gpu_preserves_vals_at_odd_inds(self):
        X = np.array([0, 1, 2, 3, 4], dtype=np.float32)
        Y_exp = np.array([0, 1, 0, 3, 0], dtype=np.float32)
        Y_act = self._run_zero_even_op_gpu(X)
        np.testing.assert_allclose(Y_act[1::2], Y_exp[1::2])
    
        # Collate the results from each subprocess
    boxes, scores, ids = [], [], []
    for rpn_data in outputs:
        boxes += rpn_data['boxes']
        scores += rpn_data['scores']
        ids += rpn_data['ids']
    rpn_file = os.path.join(output_dir, 'rpn_proposals.pkl')
    cfg_yaml = envu.yaml_dump(cfg)
    save_object(
        dict(boxes=boxes, scores=scores, ids=ids, cfg=cfg_yaml), rpn_file
    )
    logger.info('Wrote RPN proposals to {}'.format(os.path.abspath(rpn_file)))
    return boxes, scores, ids, rpn_file
    
        def test_deprecated_key_from_list(self):
        # You should see logger messages like:
        #   'Deprecated config key (ignoring): MODEL.DILATION'
        opts = ['FINAL_MSG', 'foobar', 'MODEL.DILATION', 2]
        with self.assertRaises(AttributeError):
            _ = cfg.FINAL_MSG  # noqa
        with self.assertRaises(AttributeError):
            _ = cfg.MODEL.DILATION  # noqa
        core_config.merge_cfg_from_list(opts)
        with self.assertRaises(AttributeError):
            _ = cfg.FINAL_MSG  # noqa
        with self.assertRaises(AttributeError):
            _ = cfg.MODEL.DILATION  # noqa
    
        def _get_next_minibatch_inds(self):
        '''Return the roidb indices for the next minibatch. Thread safe.'''
        with self._lock:
            # We use a deque and always take the *first* IMS_PER_BATCH items
            # followed by *rotating* the deque so that we see fresh items
            # each time. If the length of _perm is not divisible by
            # IMS_PER_BATCH, then we end up wrapping around the permutation.
            db_inds = [self._perm[i] for i in range(cfg.TRAIN.IMS_PER_BATCH)]
            self._perm.rotate(-cfg.TRAIN.IMS_PER_BATCH)
            self._cur += cfg.TRAIN.IMS_PER_BATCH
            if self._cur >= len(self._perm):
                self._shuffle_roidb_inds()
        return db_inds
    
    '''Caffe2 blob helper functions.'''
    
        def GetGlobalAverageValue(self):
        return self.total / self.count
    
        if len(sys.argv) == 1:
        parser.print_help()
        sys.exit(1)
    
    # Copyright (c) 2017-present, Facebook, Inc.
#
# Licensed under the Apache License, Version 2.0 (the 'License');
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an 'AS IS' BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
##############################################################################
    
      def __init__(self,
               learning_rate,
               weight_decay_rate=0.0,
               beta_1=0.9,
               beta_2=0.999,
               epsilon=1e-6,
               exclude_from_weight_decay=None,
               name='AdamWeightDecayOptimizer'):
    '''Constructs a AdamWeightDecayOptimizer.'''
    super(AdamWeightDecayOptimizer, self).__init__(False, name)
    
      # The casing has to be passed in by the user and there is no explicit check
  # as to whether it matches the checkpoint. The casing information probably
  # should have been stored in the bert_config.json file, but it's not, so
  # we have to heuristically detect it to validate.