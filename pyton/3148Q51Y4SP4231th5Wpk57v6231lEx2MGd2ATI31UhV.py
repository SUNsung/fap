
        
            with open('README.md', 'w+') as sorted_file:
        sorted_file.write(final_README)
    
    import rsa
import json
from binascii import hexlify
    
    if isinstance(helptext, bytes):
    helptext = helptext.decode('utf-8')
    
    
from youtube_dl import YoutubeDL
    
    
from test.helper import FakeYDL
from youtube_dl.cache import Cache
    
        def test_func(self):
        as_file = os.path.join(TEST_DIR, testfile)
        swf_file = os.path.join(TEST_DIR, test_id + '.swf')
        if ((not os.path.exists(swf_file)) or
                os.path.getmtime(swf_file) < os.path.getmtime(as_file)):
            # Recompile
            try:
                subprocess.check_call([
                    'mxmlc', '-output', swf_file,
                    '-static-link-runtime-shared-libraries', as_file])
            except OSError as ose:
                if ose.errno == errno.ENOENT:
                    print('mxmlc not found! Skipping test.')
                    return
                raise
    
            if check_executable('mplayer', ['-h']):
            args = [
                'mplayer', '-really-quiet', '-vo', 'null', '-vc', 'dummy',
                '-dumpstream', '-dumpfile', tmpfilename, url]
        elif check_executable('mpv', ['-h']):
            args = [
                'mpv', '-really-quiet', '--vo=null', '--stream-dump=' + tmpfilename, url]
        else:
            self.report_error('MMS or RTSP download detected but neither 'mplayer' nor 'mpv' could be run. Please install any.')
            return False
    
        def _real_extract(self, url):
        video_id = self._match_id(url)
    
        _TESTS = [{
        'url': 'http://camwithher.tv/view_video.php?viewkey=6e9a24e2c0e842e1f177&page=&viewtype=&category=',
        'info_dict': {
            'id': '5644',
            'ext': 'flv',
            'title': 'Periscope Tease',
            'description': 'In the clouds teasing on periscope to my favorite song',
            'duration': 240,
            'view_count': int,
            'comment_count': int,
            'uploader': 'MileenaK',
            'upload_date': '20160322',
        },
        'params': {
            'skip_download': True,
        }
    }, {
        'url': 'http://camwithher.tv/view_video.php?viewkey=6dfd8b7c97531a459937',
        'only_matching': True,
    }, {
        'url': 'http://camwithher.tv/view_video.php?page=&viewkey=6e9a24e2c0e842e1f177&viewtype=&category=',
        'only_matching': True,
    }, {
        'url': 'http://camwithher.tv/view_video.php?viewkey=b6c3b5bea9515d1a1fc4&page=&viewtype=&category=mv',
        'only_matching': True,
    }]
    
    cc_library(
    name = 'syntaxnet_transition_state',
    srcs = ['syntaxnet_transition_state.cc'],
    hdrs = ['syntaxnet_transition_state.h'],
    deps = [
        '//dragnn/core/interfaces:cloneable_transition_state',
        '//dragnn/core/interfaces:transition_state',
        '//dragnn/io:syntaxnet_sentence',
        '//dragnn/protos:trace_proto_cc',
        '//syntaxnet:base',
        '//syntaxnet:parser_transitions',
    ],
)
    
    
def main(unused_argv):
  # Left-to-right, character-based LSTM.
  char2word = spec_builder.ComponentSpecBuilder('char_lstm')
  char2word.set_network_unit(
      name='wrapped_units.LayerNormBasicLSTMNetwork',
      hidden_layer_sizes='256')
  char2word.set_transition_system(name='char-shift-only', left_to_right='true')
  char2word.add_fixed_feature(name='chars', fml='char-input.text-char',
                              embedding_dim=16)
    
    cc_test(
    name = 'beam_test',
    srcs = ['beam_test.cc'],
    deps = [
        ':beam',
        '//dragnn/core/interfaces:cloneable_transition_state',
        '//dragnn/core/interfaces:transition_state',
        '//dragnn/core/test:mock_transition_state',
        '//syntaxnet:base',
        '//syntaxnet:test_main',
    ],
)
    
    cc_test(
    name = 'disjoint_set_forest_test',
    size = 'small',
    srcs = ['disjoint_set_forest_test.cc'],
    deps = [
        ':disjoint_set_forest',
        '//syntaxnet:base',
        '//syntaxnet:test_main',
        '@org_tensorflow//tensorflow/core:test',
    ],
)
    
      For each batch of source and target token activations, computes a scalar
  potential for each arc as the 3-way product between the activation vectors of
  the source and target of the arc and the |weights|.  Specifically,
    
      short_to_original = saver_lib.shorten_resource_paths(master_spec)
  saver_lib.export_master_spec(master_spec, graph)
  saver_lib.export_to_graph(master_spec, params_path, stripped_path, graph,
                            export_moving_averages, build_runtime_graph)
  saver_lib.export_assets(master_spec, short_to_original, stripped_path)
    
      tf.logging.info('Building the graph')
  with external_graph.as_default(), tf.device('/device:CPU:0'):
    hyperparam_config = spec_pb2.GridPoint()
    hyperparam_config.use_moving_average = export_moving_averages
    builder = graph_builder.MasterBuilder(master_spec, hyperparam_config)
    post_restore_hook = builder.build_post_restore_hook()
    annotation = builder.add_annotation(build_runtime_graph=build_runtime_graph)
    builder.add_saver()
    
    # Imported for FLAGS.tf_master, which is used in the lexicon module.
    
    from httpie.plugins import plugin_manager
from httpie.context import Environment
    
        exc = ConnectionError('Connection aborted')
    exc.request = Request(method='GET', url='http://www.google.com')
    get_response.side_effect = exc
    ret = main(['--ignore-stdin', 'www.google.com'], custom_log_error=error)
    assert ret == ExitStatus.ERROR
    assert error_msg == (
        'ConnectionError: '
        'Connection aborted while doing GET request to URL: '
        'http://www.google.com')
    
    
class HTTPBasicAuth(requests.auth.HTTPBasicAuth):
    
        def test_verify_custom_ca_bundle_invalid_path(self, httpbin_secure):
        # since 2.14.0 requests raises IOError
        with pytest.raises((SSLError, IOError)):
            http(httpbin_secure.url + '/get', '--verify', '/__not_found__')
    
    
def test_credentials_in_url_auth_flag_has_priority(httpbin_both):
    '''When credentials are passed in URL and via -a at the same time,
     then the ones from -a are used.'''
    url = add_auth(httpbin_both.url + '/basic-auth/user/password',
                   auth='user:wrong')
    r = http('--auth=user:password', 'GET', url)
    assert HTTP_OK in r
    assert r.json == {'authenticated': True, 'user': 'user'}
    
    # begin[licence]
#
# [The 'BSD licence']
# Copyright (c) 2005-2008 Terence Parr
# All rights reserved.
#
# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions
# are met:
# 1. Redistributions of source code must retain the above copyright
#    notice, this list of conditions and the following disclaimer.
# 2. Redistributions in binary form must reproduce the above copyright
#    notice, this list of conditions and the following disclaimer in the
#    documentation and/or other materials provided with the distribution.
# 3. The name of the author may not be used to endorse or promote products
#    derived from this software without specific prior written permission.
#
# THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
# IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
# OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
# IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
# INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
# NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
# DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
# THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
# (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
# THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
#
# end[licence]
    
            '''
    
    from .theplatform import theplatform_download_by_pid
    
    
def huaban_download_board(url, output_dir, **kwargs):
    kwargs['merge'] = False
    board = extract_board_data(url)
    output_dir = os.path.join(output_dir, board.title)
    print_info(site_info, board.title, 'jpg', float('Inf'))
    for pin in board.pins:
        download_urls([pin.url], pin.id, pin.ext, float('Inf'),
                      output_dir=output_dir, faker=True, **kwargs)