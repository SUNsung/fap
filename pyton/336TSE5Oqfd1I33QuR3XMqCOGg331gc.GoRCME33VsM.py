
        
        
def add_error(line_num, message):
    '''adds an error to the dynamic error list'''
    err = '(L{:03d}) {}'.format(line_num + 1, message)
    errors.append(err)
    
    
HandlerEx = ctypes.WINFUNCTYPE(
    ctypes.c_int,     # return
    ctypes.c_int,     # dwControl
    ctypes.c_int,     # dwEventType
    ctypes.c_void_p,  # lpEventData,
    ctypes.c_void_p,  # lpContext,
)
    
    
if __name__ == '__main__':
    main()

    
    module_contents.append(
    '_ALL_CLASSES = [{0}]'.format(', '.join(names)))
    
        def test_cbc_encrypt(self):
        data = bytes_to_intlist(self.secret_msg)
        encrypted = intlist_to_bytes(aes_cbc_encrypt(data, self.key, self.iv))
        self.assertEqual(
            encrypted,
            b'\x97\x92+\xe5\x0b\xc3\x18\x91ky9m&\xb3\xb5@\xe6'\xc2\x96.\xc8u\x88\xab9-[\x9e|\xf1\xcd')
    
        def matching_ies(self, url):
        return [ie.IE_NAME for ie in self.ies if ie.suitable(url) and ie.IE_NAME != 'generic']
    
                if 'playlist_mincount' in test_case:
                assertGreaterEqual(
                    self,
                    len(res_dict['entries']),
                    test_case['playlist_mincount'],
                    'Expected at least %d in playlist %s, but got only %d' % (
                        test_case['playlist_mincount'], test_case['url'],
                        len(res_dict['entries'])))
            if 'playlist_count' in test_case:
                self.assertEqual(
                    len(res_dict['entries']),
                    test_case['playlist_count'],
                    'Expected %d entries in playlist %s, but got %d.' % (
                        test_case['playlist_count'],
                        test_case['url'],
                        len(res_dict['entries']),
                    ))
            if 'playlist_duration_sum' in test_case:
                got_duration = sum(e['duration'] for e in res_dict['entries'])
                self.assertEqual(
                    test_case['playlist_duration_sum'], got_duration)
    
        for i in range(1, 6):
        fpath = os.path.join(path, 'data_batch_' + str(i))
        (x_train[(i - 1) * 10000: i * 10000, :, :, :],
         y_train[(i - 1) * 10000: i * 10000]) = load_batch(fpath)
    
        ```python
    # Consider an array of 5 labels out of a set of 3 classes {0, 1, 2}:
    > labels
    array([0, 2, 1, 2, 0])
    # `to_categorical` converts this into a matrix with as many
    # columns as there are classes. The number of rows
    # stays the same.
    > to_categorical(labels)
    array([[ 1.,  0.,  0.],
           [ 0.,  0.,  1.],
           [ 0.,  1.,  0.],
           [ 0.,  0.,  1.],
           [ 1.,  0.,  0.]], dtype=float32)
    ```
    '''
    
    # Vectorize the data.  We use the same approach as the training script.
# NOTE: the data must be identical, in order for the character -> integer
# mappings to be consistent.
# We omit encoding target_texts since they are not needed.
input_texts = []
target_texts = []
input_characters = set()
target_characters = set()
with open(data_path, 'r', encoding='utf-8') as f:
    lines = f.read().split('\n')
for line in lines[: min(num_samples, len(lines) - 1)]:
    input_text, target_text = line.split('\t')
    # We use 'tab' as the 'start sequence' character
    # for the targets, and '\n' as 'end sequence' character.
    target_text = '\t' + target_text + '\n'
    input_texts.append(input_text)
    target_texts.append(target_text)
    for char in input_text:
        if char not in input_characters:
            input_characters.add(char)
    for char in target_text:
        if char not in target_characters:
            target_characters.add(char)
    
    # Clean up the TF session.
K.clear_session()
    
    
def create_network(n_dense=6,
                   dense_units=16,
                   activation='selu',
                   dropout=AlphaDropout,
                   dropout_rate=0.1,
                   kernel_initializer='lecun_normal',
                   optimizer='adam',
                   num_classes=1,
                   max_words=max_words):
    '''Generic function to create a fully-connected neural network.
    
    
def plot_feature_times(all_times, batch_size, all_components, data):
    plt.figure()
    plot_results(all_components, all_times['pca'], label='PCA')
    plot_results(all_components, all_times['ipca'],
                 label='IncrementalPCA, bsize=%i' % batch_size)
    plt.legend(loc='upper left')
    plt.suptitle('Algorithm runtime vs. n_components\n \
                 LFW, size %i x %i' % data.shape)
    plt.xlabel('Number of components (out of max %i)' % data.shape[1])
    plt.ylabel('Time (seconds)')
    
    The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.
    
    legend2_values_list = list(legend2.values())
legend2_keys_list = list(legend2.keys())
    
    model = SpectralBiclustering(n_clusters=n_clusters, method='log',
                             random_state=0)
model.fit(data)
score = consensus_score(model.biclusters_,
                        (rows[:, row_idx], columns[:, col_idx]))
    
    
plt.show()

    
        ax.scatter(X[:, 3], X[:, 0], X[:, 2],
               c=labels.astype(np.float), edgecolor='k')
    
    
# Code source: Gaël Varoquaux
# Modified for documentation by Jaques Grobler
# License: BSD 3 clause
    
    plt.figure(figsize=(12, 12))
    
        if not hasattr(env, 'scrapy_all_settings'):
        env.scrapy_all_settings = []
    
    def _get_commands_dict(settings, inproject):
    cmds = _get_commands_from_module('scrapy.commands', inproject)
    cmds.update(_get_commands_from_entry_points(inproject))
    cmds_module = settings['COMMANDS_MODULE']
    if cmds_module:
        cmds.update(_get_commands_from_module(cmds_module, inproject))
    return cmds
    
    from scrapy.commands import ScrapyCommand
from scrapy.settings import BaseSettings
    
    from . import Contract
    
        class ScrapyClientContextFactory(ClientContextFactory):
        'A SSL context factory which is more permissive against SSL bugs.'
        # see https://github.com/scrapy/scrapy/issues/82
        # and https://github.com/scrapy/scrapy/issues/26
        # and https://github.com/scrapy/scrapy/issues/981
    
            self._download_http = httpdownloadhandler(settings).download_request
    
            self.factory.noPage(\
                defer.TimeoutError('Getting %s took longer than %s seconds.' % \
                (self.factory.url, self.factory.timeout)))
    
        if __hostsdeny__ and netloc.endswith(__hostsdeny__):
        start_response('403 Forbidden', [('Content-Type', 'text/html')])
        yield message_html('403 Hosts Deny', 'Hosts Deny(%r)' % netloc, detail='共用appid因为资源有限，限制观看视频和文件下载等消耗资源过多的访问，请使用自己的appid <a href=' https://github.com/XX-net/XX-Net/wiki/Register-Google-appid' target='_blank'>帮助</a> ')
        raise StopIteration
    
    EOF = -1
    
            raise NotImplementedError
    
              name, _, val = line.partition('=')
          name = name.strip()
          val = val.strip()
          if name == 'set noparent':
            keep_looking = False
          elif name == 'filter':
            cfg_filters.append(val)
          elif name == 'exclude_files':
            # When matching exclude_files pattern, use the base_name of
            # the current file name or the directory name we are processing.
            # For example, if we are checking for lint errors in /foo/bar/baz.cc
            # and we found the .cfg file at /foo/CPPLINT.cfg, then the config
            # file's 'exclude_files' filter is meant to be checked against 'bar'
            # and not 'baz' nor 'bar/baz.cc'.
            if base_name:
              pattern = re.compile(val)
              if pattern.match(base_name):
                _cpplint_state.PrintInfo('Ignoring '%s': file excluded by '
                    ''%s'. File path component '%s' matches pattern '%s'\n' %
                    (filename, cfg_file, base_name, val))
                return False
          elif name == 'linelength':
            global _line_length
            try:
                _line_length = int(val)
            except ValueError:
                _cpplint_state.PrintError('Line length must be numeric.')
          elif name == 'extensions':
              global _valid_extensions
              try:
                  extensions = [ext.strip() for ext in val.split(',')]
                  _valid_extensions = set(extensions)
              except ValueError:
                  sys.stderr.write('Extensions should be a comma-separated list of values;'
                                   'for example: extensions=hpp,cpp\n'
                                   'This could not be parsed: '%s'' % (val,))
          elif name == 'headers':
              global _header_extensions
              try:
                  extensions = [ext.strip() for ext in val.split(',')]
                  _header_extensions = set(extensions)
              except ValueError:
                  sys.stderr.write('Extensions should be a comma-separated list of values;'
                                   'for example: extensions=hpp,cpp\n'
                                   'This could not be parsed: '%s'' % (val,))
          elif name == 'root':
            global _root
            _root = val
          else:
            _cpplint_state.PrintError(
                'Invalid configuration option (%s) in file %s\n' %
                (name, cfg_file))
    
    '''Collection of available datasets.'''
    
    
def evaluate_boxes(
    json_dataset,
    all_boxes,
    output_dir,
    use_salt=True,
    cleanup=True,
    use_matlab=False
):
    salt = '_{}'.format(str(uuid.uuid4())) if use_salt else ''
    filenames = _write_voc_results_files(json_dataset, all_boxes, salt)
    _do_python_eval(json_dataset, salt, output_dir)
    if use_matlab:
        _do_matlab_eval(json_dataset, salt, output_dir)
    if cleanup:
        for filename in filenames:
            shutil.copy(filename, output_dir)
            os.remove(filename)
    return None
    
        # rois are in [[batch_idx, x0, y0, x1, y2], ...] format
    # Combine predictions across all levels and retain the top scoring
    rois = np.concatenate([blob.data for blob in roi_inputs])
    scores = np.concatenate([blob.data for blob in score_inputs]).squeeze()
    inds = np.argsort(-scores)[:post_nms_topN]
    rois = rois[inds, :]
    return rois
    
        if len(data.shape) == 1:
        ret = np.empty((count, ), dtype=data.dtype)
        ret.fill(fill)
        ret[inds] = data
    else:
        ret = np.empty((count, ) + data.shape[1:], dtype=data.dtype)
        ret.fill(fill)
        ret[inds, :] = data
    return ret
    
    '''Construct minibatches for Mask R-CNN training when keypoints are enabled.
Handles the minibatch blobs that are specific to training Mask R-CNN for
keypoint detection. Other blobs that are generic to RPN or Fast/er R-CNN are
handled by their respecitive roi_data modules.
'''