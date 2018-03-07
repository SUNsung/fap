
        
        filenames = {
    'bin': 'youtube-dl',
    'exe': 'youtube-dl.exe',
    'tar': 'youtube-dl-%s.tar.gz' % version}
build_dir = os.path.join('..', '..', 'build', version)
for key, filename in filenames.items():
    url = 'https://yt-dl.org/downloads/%s/%s' % (version, filename)
    fn = os.path.join(build_dir, filename)
    with open(fn, 'rb') as f:
        data = f.read()
    if not data:
        raise ValueError('File %s is empty!' % fn)
    sha256sum = hashlib.sha256(data).hexdigest()
    new_version[key] = (url, sha256sum)
    
        def tearDown(self):
        if self._SKIP_SOCKS_TEST:
            return
    
        def _real_extract(self, url):
        mobj = re.match(self._VALID_URL, url)
        video_id = mobj.group('id')
    
                return {
                'id': video_id,
                'title': json_data['title'],
                'description': json_data.get('subtitle'),
                'thumbnail': json_data.get('thumbnail_image', {}).get('file'),
                'timestamp': parse_iso8601(json_data.get('publication_date')),
                'duration': int_or_none(json_data.get('duration')),
                'view_count': int_or_none(json_data.get('view_count')),
                'formats': formats,
            }

    
            info_dict = self._extract_from_id(mvp_id, webpage)
        info_dict['display_id'] = display_id
    
    # TODO: run all these tests in session mode as well
    
    
PACKAGES = [
    'httpie',
    'requests',
    'pygments',
]
    
      1. Read, validate and process the input (args, `stdin`).
  2. Create and send a request.
  3. Stream, and possibly process and format, the parts
     of the request-response exchange selected by output options.
  4. Simultaneously write to `stdout`
  5. Exit.
    
    
class SessionNameValidator(object):
    
        # Adapters
    def get_transport_plugins(self):
        return [plugin for plugin in self
                if issubclass(plugin, TransportPlugin)]

    
    from __future__ import print_function
from keras.preprocessing.image import load_img, img_to_array
from scipy.misc import imsave
import numpy as np
from scipy.optimize import fmin_l_bfgs_b
import time
import argparse
    
    
@pytest.mark.parametrize('tensor_shape', [FC_SHAPE, CONV_SHAPE], ids=['FC', 'CONV'])
def test_he_uniform(tensor_shape):
    fan_in, _ = initializers._compute_fans(tensor_shape)
    scale = np.sqrt(6. / fan_in)
    _runner(initializers.he_uniform(), tensor_shape,
            target_mean=0., target_max=scale, target_min=-scale)
    
    
@keras_test
def test_convert_weights():
    def get_model(shape, data_format):
        model = Sequential()
        model.add(Conv2D(filters=2,
                         kernel_size=(4, 3),
                         input_shape=shape,
                         data_format=data_format))
        model.add(Flatten())
        model.add(Dense(5))
        return model
    
                # check dropout
            layer_test(convolutional_recurrent.ConvLSTM2D,
                       kwargs={'data_format': data_format,
                               'return_sequences': return_sequences,
                               'filters': filters,
                               'kernel_size': (num_row, num_col),
                               'padding': 'same',
                               'dropout': 0.1,
                               'recurrent_dropout': 0.1},
                       input_shape=inputs.shape)
    
    
@keras_test
def test_merge_sum(in_tmpdir):
    (x_train, y_train), (x_test, y_test) = _get_test_data()
    left = Sequential()
    left.add(Dense(num_hidden, input_shape=(input_dim,)))
    left.add(Activation('relu'))
    
        code_block_index = 0
    last_header = ''
    linenum = 0
    with io.open(args.sourcefile, 'r') as read_filehandle:
        with io.open(args.targetfile, 'w') as text_filehandle:
            for line in read_filehandle:
                linenum += 1
                indent_depth = is_code(line)
                if indent_depth:
                    (line, linenum) = process_code(read_filehandle,
                                                    text_filehandle,
                                                    line, linenum,
                                                    args.sourcefile, args.codedir,
                                                    last_header, code_block_index,
                                                    indent_depth)
                    code_block_index += 1
                # reach here either line was not code, or was code
                # and we dealt with n code lines
                if indent_depth < 4 or not is_code(line, indent_depth):
                    # store header id for codeblock
                    section_id = get_marker(line)
                    if section_id is not None:
                        code_block_index = 0
                        last_header = section_id
                    sline = stripped(line)
                    text_filehandle.write(sline)