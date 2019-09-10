
        
            def shuffle(self):
        pass

    
            When updating an entry, updates its position to the front of the LRU list.
        If the entry is new and the cache is at capacity, removes the oldest entry
        before the new entry is added.
        '''
        node = self.lookup.get(query)
        if node is not None:
            # Key exists in cache, update the value
            node.results = results
            self.linked_list.move_to_front(node)
        else:
            # Key does not exist in cache
            if self.size == self.MAX_SIZE:
                # Remove the oldest entry from the linked list and lookup
                self.lookup.pop(self.linked_list.tail.query, None)
                self.linked_list.remove_from_tail()
            else:
                self.size += 1
            # Add the new key and value
            new_node = Node(results)
            self.linked_list.append_to_front(new_node)
            self.lookup[query] = new_node

    
            (2016-01, shopping), 25
        (2016-01, shopping), 100
        (2016-01, gas), 50
        '''
        timestamp, category, amount = line.split('\t')
        period = self. extract_year_month(timestamp)
        if period == self.current_year_month():
            yield (period, category), amount
    
            (foo, p1), 2
        (bar, p1), 3
        (foo, p2), 3
        (bar, p3), 10
        (foo, p4), 1
        '''
        yield key, sum(values)
    
            When updating an entry, updates its position to the front of the LRU list.
        If the entry is new and the cache is at capacity, removes the oldest entry
        before the new entry is added.
        '''
        node = self.map[query]
        if node is not None:
            # Key exists in cache, update the value
            node.results = results
            self.linked_list.move_to_front(node)
        else:
            # Key does not exist in cache
            if self.size == self.MAX_SIZE:
                # Remove the oldest entry from the linked list and lookup
                self.lookup.pop(self.linked_list.tail.query, None)
                self.linked_list.remove_from_tail()
            else:
                self.size += 1
            # Add the new key and value
            new_node = Node(query, results)
            self.linked_list.append_to_front(new_node)
            self.lookup[query] = new_node

    
    
def WriteToFile(data, file_path):
  '''Helper function to write data to a file in DatumProto format.
    
        # Run tested function.
    with tf.Graph().as_default() as g, self.session(graph=g) as sess:
      extractor = feature_aggregation_extractor.ExtractAggregatedRepresentation(
          sess, config)
      rasmk_star, visual_words = extractor.Extract(features,
                                                   num_features_per_region)
    
    '''Generates grid anchors on the fly corresponding to multiple CNN layers.
    
        Args:
      indicator: boolean tensor of shape [N] whose True entries can be sampled.
      batch_size: desired batch size. If None, keeps all positive samples and
        randomly selects negative samples so that the positive sample fraction
        matches self._positive_fraction. It cannot be None is is_static is True.
      labels: boolean tensor of shape [N] denoting positive(=True) and negative
          (=False) examples.
      scope: name scope.
    
      Arguments:
    training: If False, the layer will normalize using the moving average and
      std. dev, without updating the learned avg and std. dev.
      If None or True, the layer will follow the keras BatchNormalization layer
      strategy of checking the Keras learning phase at `call` time to decide
      what to do.
    **kwargs: The keyword arguments to forward to the keras BatchNormalization
        layer constructor.
    
    FLAGS = flags.FLAGS
    
          Returns:
        matches:  int32 tensor indicating the row each column matches to.
      '''
      # Matches for each column
      matches = tf.argmax(similarity_matrix, 0, output_type=tf.int32)
    
        groundtruth_boxes_list = [
        tf.constant([[0, 0, .5, .5], [.5, .5, 1, 1]], dtype=tf.float32),
        tf.constant([[0, .5, .5, 1], [.5, 0, 1, .5]], dtype=tf.float32),
        tf.constant([[0, .5, .5, 1], [.5, 0, 1, 1]], dtype=tf.float32)
    ]
    groundtruth_classes_list = [
        tf.constant([[1, 0], [0, 1]], dtype=tf.float32),
        tf.constant([[1, 0], [1, 0]], dtype=tf.float32),
        tf.constant([[1, 0], [0, 1]], dtype=tf.float32)
    ]
    
      Optionally add an intermediate 1x1 convolutional layer after features and
  predict in parallel branches box_encodings and
  class_predictions_with_background.
    
        if self._convolve_then_upsample:
      # Replace Transposed Convolution with a Nearest Neighbor upsampling step
      # followed by 3x3 convolution.
      height_scale = self._mask_height / shape_utils.get_dim_as_int(
          input_shapes[1])
      width_scale = self._mask_width / shape_utils.get_dim_as_int(
          input_shapes[2])
      # pylint: disable=g-long-lambda
      self._mask_predictor_layers.append(tf.keras.layers.Lambda(
          lambda features: ops.nearest_neighbor_upsampling(
              features, height_scale=height_scale, width_scale=width_scale)
      ))
      # pylint: enable=g-long-lambda
      self._mask_predictor_layers.append(
          tf.keras.layers.Conv2D(
              num_conv_channels,
              [3, 3],
              padding='SAME',
              name='MaskPredictor_upsample_conv2d',
              **self._conv_hyperparams.params()))
      self._mask_predictor_layers.append(
          self._conv_hyperparams.build_batch_norm(
              training=(self._is_training and not self._freeze_batchnorm),
              name='MaskPredictor_upsample_batchnorm'))
      self._mask_predictor_layers.append(
          self._conv_hyperparams.build_activation_layer(
              name='MaskPredictor_upsample_activation'))
    
        Args:
      image_features: A list of float tensors of shape [batch_size, height_i,
      width_i, channels_i] containing features for a batch of images.
      num_predictions_per_location: A list of integers representing the number
        of box predictions to be made per spatial location for each feature map.
        Currently, this must be set to [1], or an error will be raised.
      proposal_boxes: A float tensor of shape [batch_size, num_proposals,
        box_code_size].
    
    
def build_graph(pipeline_config,
                shapes_info,
                input_type='encoded_image_string_tensor',
                use_bfloat16=False):
  '''Builds TPU serving graph of ssd to be exported.
    
      image_reader = build_data.ImageReader('jpeg', channels=3)
  label_reader = build_data.ImageReader('png', channels=1)
    
        @pytest.fixture(autouse=True)
    def shell_aliases(self):
        os.environ['TF_SHELL_ALIASES'] = (
            'alias fuck=\'eval $(thefuck $(fc -ln -1))\'\n'
            'alias l=\'ls -CF\'\n'
            'alias la=\'ls -A\'\n'
            'alias ll=\'ls -alF\'')
    
        def test_get_aliases(self, shell):
        assert shell.get_aliases() == {'fuck': 'eval $(thefuck $(fc -ln -1))',
                                       'l': 'ls -CF',
                                       'la': 'ls -A',
                                       'll': 'ls -alF'}
    
        def instant_mode_alias(self, alias_name):
        if os.environ.get('THEFUCK_INSTANT_MODE', '').lower() == 'true':
            mark = ('%{' +
                    USER_COMMAND_MARK + '\b' * len(USER_COMMAND_MARK)
                    + '%}')
            return '''
                export PS1='{user_command_mark}$PS1';
                {app_alias}
            '''.format(user_command_mark=mark,
                       app_alias=self.app_alias(alias_name))
        else:
            log_path = os.path.join(
                gettempdir(), 'thefuck-script-log-{}'.format(uuid4().hex))
            return '''
                export THEFUCK_INSTANT_MODE=True;
                export THEFUCK_OUTPUT_LOG={log};
                thefuck --shell-logger {log};
                rm -f {log};
                exit
            '''.format(log=log_path)
    
        # One from history:
    already_used = get_closest(
        old_command, _get_used_executables(command),
        fallback_to_first=False)
    if already_used:
        new_cmds = [already_used]
    else:
        new_cmds = []
    
    
def main():
    import os
    import re
    import shutil
    import sys
    dests = sys.argv[1:] or ['.']
    filename = re.sub(r'\.pyc$', '.py', __file__)
    
    The most similar choice to 'providers' is:
    provider
'''
    
    def mask_rcnn_fcn_head_v1up4convs(model, blob_in, dim_in, spatial_scale):
    '''v1up design: 4 * (conv 3x3), convT 2x2.'''
    return mask_rcnn_fcn_head_v1upXconvs(
        model, blob_in, dim_in, spatial_scale, 4
    )
    
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
    
        cfg_yaml = envu.yaml_dump(cfg)
    if ind_range is not None:
        rpn_name = 'rpn_proposals_range_%s_%s.pkl' % tuple(ind_range)
    else:
        rpn_name = 'rpn_proposals.pkl'
    rpn_file = os.path.join(output_dir, rpn_name)
    save_object(
        dict(boxes=boxes, scores=scores, ids=ids, cfg=cfg_yaml), rpn_file
    )
    logger.info('Wrote RPN proposals to {}'.format(os.path.abspath(rpn_file)))
    return boxes, scores, ids, rpn_file
    
        def test_merge_cfg_from_file(self):
        with tempfile.NamedTemporaryFile() as f:
            envu.yaml_dump(cfg, f)
            s = cfg.MODEL.TYPE
            cfg.MODEL.TYPE = 'dummy'
            assert cfg.MODEL.TYPE != s
            core_config.merge_cfg_from_file(f.name)
            assert cfg.MODEL.TYPE == s
    
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
    
        @contextlib.contextmanager
    def stop_on_exception(self):
        try:
            yield
        except Exception:
            if not self.should_stop():
                traceback.print_exc()
                self.request_stop()
    
    
def send_email(subject, body, to):
    s = smtplib.SMTP('localhost')
    mime = MIMEText(body)
    mime['Subject'] = subject
    mime['To'] = to
    s.sendmail('detectron', to, mime.as_string())
    
        filename, file_extension = os.path.splitext(os.path.basename(json_file))
    filename = filename + '_test-dev'
    filename = os.path.join(output_dir, filename + file_extension)
    with open(filename, 'w') as fid:
        info_test = json.dump(dt_testdev, fid)
    print('Done writing: {}!'.format(filename))
    
    from detectron.utils.io import save_object