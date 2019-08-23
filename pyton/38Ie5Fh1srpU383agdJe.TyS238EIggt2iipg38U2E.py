
        
            # Get (branch, commit) if running from a git repo.
    head = git.get_head(kwargs['repo_path'])
    
        @classmethod
    def get_coeff(cls, magic_list):
        magic_set = set(magic_list)
        no_dup = []
        for item in magic_list:
            if item in magic_set:
                magic_set.remove(item)
                no_dup.append(item)
        # really necessary?
    
        if title is None:
      title = url[0]
    
        if not info_only:
        download_url_ffmpeg(m3u8_url, title, 'm3u8', None, output_dir=output_dir, merge=merge)
    
            elif re.search(r'i\.imgur\.com/', self.url):
            # direct image
            _, container, size = url_info(self.url)
            self.streams = {
                'original': {
                    'src': [self.url],
                    'size': size,
                    'container': container
                }
            }
            self.title = r1(r'i\.imgur\.com/([^./]*)', self.url)
    
        parts = []
    if hours:
        parts.append('%s hour' % hours)
    if minutes:
        parts.append('%s min' % minutes)
    if seconds:
        parts.append('%s sec' % seconds)
    if ms:
        parts.append('%s ms' % ms)
    if not parts:
        return '0 ms'
    
    fstring = '''\
a = 42
f'{a}'
'''
    
            self._paths = vc_env.get('path', '')
        paths = self._paths.split(os.pathsep)
        self.cc = _find_exe('cl.exe', paths)
        self.linker = _find_exe('link.exe', paths)
        self.lib = _find_exe('lib.exe', paths)
        self.rc = _find_exe('rc.exe', paths)   # resource compiler
        self.mc = _find_exe('mc.exe', paths)   # message compiler
        self.mt = _find_exe('mt.exe', paths)   # message compiler
        self._vcruntime_redist = vc_env.get('py_vcruntime_redist', '')
    
        def emit(self, record):
        '''
        Emit a record.
    
            stream.feed_data(b'QWEaa')
        stream.feed_data(b'XYaa')
        stream.feed_data(b'a')
        data = self.loop.run_until_complete(stream.readuntil(b'aaa'))
        self.assertEqual(b'QWEaaXYaaa', data)
        self.assertEqual(b'', stream._buffer)
    
        def getcapabilities(self):
        '''Get the server capabilities, as read by __init__().
        If the CAPABILITIES command is not supported, an empty dict is
        returned.'''
        if self._caps is None:
            self.nntp_version = 1
            self.nntp_implementation = None
            try:
                resp, caps = self.capabilities()
            except (NNTPPermanentError, NNTPTemporaryError):
                # Server doesn't support capabilities
                self._caps = {}
            else:
                self._caps = caps
                if 'VERSION' in caps:
                    # The server can advertise several supported versions,
                    # choose the highest.
                    self.nntp_version = max(map(int, caps['VERSION']))
                if 'IMPLEMENTATION' in caps:
                    self.nntp_implementation = ' '.join(caps['IMPLEMENTATION'])
        return self._caps
    
            Really, according to RFC 2449, the cyrus folks should avoid
        having the implementation split into multiple arguments...
        '''
        def _parsecap(line):
            lst = line.decode('ascii').split()
            return lst[0], lst[1:]
    
        @unittest.skipUnless(hasattr(posix, 'lchown'), 'test needs os.lchown()')
    def test_lchown(self):
        os.unlink(support.TESTFN)
        # create a symlink
        os.symlink(_DUMMY_SYMLINK, support.TESTFN)
        self._test_all_chown_common(posix.lchown, support.TESTFN,
                                    getattr(posix, 'lstat', None))
    
        from java.lang import System
    try:
        value = System.getProperty(name)
        if value is None:
            return default
        return value
    except AttributeError:
        return default
    
                self._work_queue.put(w)
            self._adjust_thread_count()
            return f
    submit.__doc__ = _base.Executor.submit.__doc__
    
    if os.name == 'nt':
    def _fix_pcbuild(d):
        if d and os.path.normcase(d).startswith(
                os.path.normcase(os.path.join(PREFIX, 'PCbuild'))):
            return PREFIX
        return d
    project_base = _fix_pcbuild(project_base)
    _sys_home = _fix_pcbuild(_sys_home)
    
                                ann = {}
                            ann['id'] = ann_id
                            ann_id += 1
                            ann['image_id'] = image['id']
                            ann['segmentation'] = obj['contours']
    
    from caffe2.python import core
from caffe2.python import workspace
    
    from __future__ import absolute_import
from __future__ import division
from __future__ import print_function
from __future__ import unicode_literals
    
        detpath: Path to detections
        detpath.format(classname) should produce the detection results file.
    annopath: Path to annotations
        annopath.format(imagename) should be the xml annotations file.
    imagesetfile: Text file containing the list of images, one image per line.
    classname: Category name (duh)
    cachedir: Directory for caching the annotations
    [ovthresh]: Overlap threshold (default = 0.5)
    [use_07_metric]: Whether to use VOC07's 11 point AP computation
        (default False)
    '''
    # assumes detections are in detpath.format(classname)
    # assumes annotations are in annopath.format(imagename)
    # assumes imagesetfile is a text file with each line an image name
    # cachedir caches the annotations in a pickle file
    
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
    
    
def log_json_stats(stats, sort_keys=True):
    # hack to control precision of top-level floats
    stats = {
        k: '{:.6f}'.format(v) if isinstance(v, float) else v
        for k, v in stats.items()
    }
    print('json_stats: {:s}'.format(json.dumps(stats, sort_keys=sort_keys)))
    
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
    
    
if __name__ == '__main__':
    workspace.GlobalInit(['caffe2', '--caffe2_log_level=0'])
    logger = setup_logging(__name__)
    args = parse_args()
    logger.info('Called with args:')
    logger.info(args)
    if args.cfg_file is not None:
        merge_cfg_from_file(args.cfg_file)
    if args.opts is not None:
        merge_cfg_from_list(args.opts)
    assert_and_infer_cfg()
    logger.info('Testing with config:')
    logger.info(pprint.pformat(cfg))
    
        if 'Records' not in event:
        return {
            'event': event,
            'context': {
                'invoked_function_arn': context.invoked_function_arn,
                'function_version': context.function_version,
                'function_name': context.function_name
            }
        }
    
        def test_expand_multipart_filename(self):
        headers = {'Host': '10.0.1.19:4572', 'User-Agent': 'curl/7.51.0',
            'Accept': '*/*', 'Content-Length': '992', 'Expect': '100-continue',
            'Content-Type': 'multipart/form-data; boundary=------------------------3c48c744237517ac'}
    
        def test_extract_query_params(self):
        path, query_params = apigateway_listener.extract_query_string_params(
            '/foo/bar?foo=foo&bar=bar&bar=baz'
        )
        self.assertEqual(path, '/foo/bar')
        self.assertEqual(query_params, {'foo': 'foo', 'bar': ['bar', 'baz']})
    
            # create state machine
        role_arn = aws_stack.role_arn('sfn_role')
        definition = clone(STATE_MACHINE_DEF)
        lambda_arn_1 = aws_stack.lambda_function_arn(TEST_LAMBDA_NAME_1)
        lambda_arn_2 = aws_stack.lambda_function_arn(TEST_LAMBDA_NAME_2)
        definition['States']['step1']['Resource'] = lambda_arn_1
        definition['States']['step2']['Resource'] = lambda_arn_2
        definition = json.dumps(definition)
        result = self.sfn_client.create_state_machine(
            name=STATE_MACHINE_NAME, definition=definition, roleArn=role_arn)