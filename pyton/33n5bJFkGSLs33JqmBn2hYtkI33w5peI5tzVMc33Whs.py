
        
            def take_call(self, call):
        '''Assume the employee will always successfully take the call.'''
        self.call = call
        self.call.employee = self
        self.call.state = CallState.IN_PROGRESS
    
    
class Message(object):
    
        def bfs(self, source, dest):
        if source is None:
            return False
        queue = deque()
        queue.append(source)
        source.visit_state = State.visited
        while queue:
            node = queue.popleft()
            print(node)
            if dest is node:
                return True
            for adjacent_node in node.adj_nodes.values():
                if adjacent_node.visit_state == State.unvisited:
                    queue.append(adjacent_node)
                    adjacent_node.visit_state = State.visited
        return False
    
        def remove(self, key):
        hash_index = self._hash_function(key)
        for index, item in enumerate(self.table[hash_index]):
            if item.key == key:
                del self.table[hash_index][index]
                return
        raise KeyError('Key not found')

    
        # By default the `-a` argument is parsed for `username:password`.
    # Set this to `False` to disable the parsing and error handling.
    auth_parse = True
    
    from httpie.plugins.base import AuthPlugin
    
        def __init__(self):
        self._plugins = []
    
    
def test_credentials_in_url_auth_flag_has_priority(httpbin_both):
    '''When credentials are passed in URL and via -a at the same time,
     then the ones from -a are used.'''
    url = add_auth(httpbin_both.url + '/basic-auth/user/password',
                   auth='user:wrong')
    r = http('--auth=user:password', 'GET', url)
    assert HTTP_OK in r
    assert r.json == {'authenticated': True, 'user': 'user'}
    
        def __getattr__(self, item):
        return self[item]
    
        return out
    
    '''
requests.structures
~~~~~~~~~~~~~~~~~~~
    
        def getheaders(self, name):
        self._headers.getheaders(name)
    
        def test_multiple_requests(self):
        '''multiple requests can be served'''
        requests_to_handle = 5
    
    from .structures import LookupDict
    
        def syntax(self):
        '''
        Command syntax (preferably one-line). Do not include command name.
        '''
        return ''
    
            sfile = sys.modules[spidercls.__module__].__file__
        sfile = sfile.replace('.pyc', '.py')
        self.exitcode = os.system('%s '%s'' % (editor, sfile))

    
        def add_options(self, parser):
        ScrapyCommand.add_options(self, parser)
        parser.add_option('--spider', dest='spider',
            help='use this spider')
        parser.add_option('--headers', dest='headers', action='store_true', \
            help='print response HTTP headers instead of body')
        parser.add_option('--no-redirect', dest='no_redirect', action='store_true', \
            default=False, help='do not handle HTTP 3xx status codes and print response as-is')
    
        def add_options(self, parser):
        ScrapyCommand.add_options(self, parser)
        parser.add_option('--get', dest='get', metavar='SETTING',
            help='print raw setting value')
        parser.add_option('--getbool', dest='getbool', metavar='SETTING',
            help='print setting value, interpreted as a boolean')
        parser.add_option('--getint', dest='getint', metavar='SETTING',
            help='print setting value, interpreted as an integer')
        parser.add_option('--getfloat', dest='getfloat', metavar='SETTING',
            help='print setting value, interpreted as a float')
        parser.add_option('--getlist', dest='getlist', metavar='SETTING',
            help='print setting value, interpreted as a list')
    
            def getContext(self, hostname=None, port=None):
            ctx = ClientContextFactory.getContext(self)
            # Enable all workarounds to SSL bugs as documented by
            # https://www.openssl.org/docs/manmaster/man3/SSL_CTX_set_options.html
            ctx.set_options(SSL.OP_ALL)
            return ctx

    
        from twisted.internet.ssl import AcceptableCiphers
    from twisted.internet._sslverify import (ClientTLSOptions,
                                             verifyHostname,
                                             VerificationError)
    try:
        # XXX: this import would fail on Debian jessie with system installed
        # service_identity library, due to lack of cryptography.x509 dependency
        # See https://github.com/pyca/service_identity/issues/21
        from service_identity.exceptions import CertificateError
        verification_errors = (CertificateError, VerificationError)
    except ImportError:
        verification_errors = VerificationError
    
    REVERSE_NAME_MAPPING.update({
    ('_functools', 'reduce'): ('__builtin__', 'reduce'),
    ('tkinter.filedialog', 'FileDialog'): ('FileDialog', 'FileDialog'),
    ('tkinter.filedialog', 'LoadFileDialog'): ('FileDialog', 'LoadFileDialog'),
    ('tkinter.filedialog', 'SaveFileDialog'): ('FileDialog', 'SaveFileDialog'),
    ('tkinter.simpledialog', 'SimpleDialog'): ('SimpleDialog', 'SimpleDialog'),
    ('xmlrpc.server', 'ServerHTMLDoc'): ('DocXMLRPCServer', 'ServerHTMLDoc'),
    ('xmlrpc.server', 'XMLRPCDocGenerator'):
        ('DocXMLRPCServer', 'XMLRPCDocGenerator'),
    ('xmlrpc.server', 'DocXMLRPCRequestHandler'):
        ('DocXMLRPCServer', 'DocXMLRPCRequestHandler'),
    ('xmlrpc.server', 'DocXMLRPCServer'):
        ('DocXMLRPCServer', 'DocXMLRPCServer'),
    ('xmlrpc.server', 'DocCGIXMLRPCRequestHandler'):
        ('DocXMLRPCServer', 'DocCGIXMLRPCRequestHandler'),
    ('http.server', 'SimpleHTTPRequestHandler'):
        ('SimpleHTTPServer', 'SimpleHTTPRequestHandler'),
    ('http.server', 'CGIHTTPRequestHandler'):
        ('CGIHTTPServer', 'CGIHTTPRequestHandler'),
    ('_socket', 'socket'): ('socket', '_socketobject'),
})
    
        def test_unicode(self):
        # Legacy unicode literals:
        self.check_tokenize('Örter = u'places'\ngrün = U'green'', '''\
    NAME       'Örter'       (1, 0) (1, 5)
    OP         '='           (1, 6) (1, 7)
    STRING     'u'places''   (1, 8) (1, 17)
    NEWLINE    '\\n'          (1, 17) (1, 18)
    NAME       'grün'        (2, 0) (2, 4)
    OP         '='           (2, 5) (2, 6)
    STRING     'U'green''    (2, 7) (2, 15)
    ''')
    
        def test_dialog_logo(self):
        '''Test about dialog logo.'''
        path, file = os.path.split(self.dialog.icon_image['file'])
        fn, ext = os.path.splitext(file)
        self.assertEqual(fn, 'idle_48')
    
        def testPeekBytesIO(self):
        with BytesIO(self.DATA) as bio:
            with BZ2File(bio) as bz2f:
                pdata = bz2f.peek()
                self.assertNotEqual(len(pdata), 0)
                self.assertTrue(self.TEXT.startswith(pdata))
                self.assertEqual(bz2f.read(), self.TEXT)
    
        def __init__(self, file, connection):
        super().__init__(file)
        self.connection = connection
    
        for filename in os.listdir(directory):
        path = os.path.join(directory, filename)
        if not os.path.isfile(path):
            continue
        # Guess the content type based on the file's extension.  Encoding
        # will be ignored, although we should check for simple things like
        # gzip'd or compressed files.
        ctype, encoding = mimetypes.guess_type(path)
        if ctype is None or encoding is not None:
            # No guess could be made, or the file is encoded (compressed), so
            # use a generic bag-of-bits type.
            ctype = 'application/octet-stream'
        maintype, subtype = ctype.split('/', 1)
        with open(path, 'rb') as fp:
            msg.add_attachment(fp.read(),
                               maintype=maintype,
                               subtype=subtype,
                               filename=filename)
    # Now send or store the message
    if args.output:
        with open(args.output, 'wb') as fp:
            fp.write(msg.as_bytes(policy=SMTP))
    else:
        with smtplib.SMTP('localhost') as s:
            s.send_message(msg)
    
    
def main():
    parser = ArgumentParser(description='''\
Unpack a MIME message into a directory of files.
''')
    parser.add_argument('-d', '--directory', required=True,
                        help='''Unpack the MIME message into the named
                        directory, which will be created if it doesn't already
                        exist.''')
    parser.add_argument('msgfile')
    args = parser.parse_args()
    
    ##
    
        # Create queues
    task_queue = Queue()
    done_queue = Queue()
    
        def __repr__(self):
        return '(%f;%f)' % (self.x, self.y)
    
        # Post-hoc scale-specific 3x3 convs
    blobs_fpn = []
    spatial_scales = []
    for i in range(num_backbone_stages):
        if cfg.FPN.USE_GN:
            # use GroupNorm
            fpn_blob = model.ConvGN(
                output_blobs[i],
                'fpn_{}'.format(fpn_level_info.blobs[i]),
                dim_in=fpn_dim,
                dim_out=fpn_dim,
                group_gn=get_group_gn(fpn_dim),
                kernel=3,
                pad=1,
                stride=1,
                weight_init=xavier_fill,
                bias_init=const_fill(0.0)
            )
        else:
            fpn_blob = model.Conv(
                output_blobs[i],
                'fpn_{}'.format(fpn_level_info.blobs[i]),
                dim_in=fpn_dim,
                dim_out=fpn_dim,
                kernel=3,
                pad=1,
                stride=1,
                weight_init=xavier_fill,
                bias_init=const_fill(0.0)
            )
        blobs_fpn += [fpn_blob]
        spatial_scales += [fpn_level_info.spatial_scales[i]]
    
    # Verify that we compute the same anchors as Shaoqing's matlab implementation:
#
#    >> load output/rpn_cachedir/faster_rcnn_VOC2007_ZF_stage1_rpn/anchors.mat
#    >> anchors
#
#    anchors =
#
#       -83   -39   100    56
#      -175   -87   192   104
#      -359  -183   376   200
#       -55   -55    72    72
#      -119  -119   136   136
#      -247  -247   264   264
#       -35   -79    52    96
#       -79  -167    96   184
#      -167  -343   184   360
    
    
def add_fpn_retinanet_outputs(model, blobs_in, dim_in, spatial_scales):
    '''RetinaNet head. For classification and box regression, we can chose to
    have the same conv tower or a separate tower. 'bl_feat_list' stores the list
    of feature blobs for bbox prediction. These blobs can be shared cls feature
    blobs if we share the tower or else are independent blobs.
    '''
    dim_out = dim_in
    k_max = cfg.FPN.RPN_MAX_LEVEL  # coarsest level of pyramid
    k_min = cfg.FPN.RPN_MIN_LEVEL  # finest level of pyramid
    A = len(cfg.RETINANET.ASPECT_RATIOS) * cfg.RETINANET.SCALES_PER_OCTAVE
    
        kp_fg_rois_per_this_image = np.minimum(fg_rois_per_image, kp_fg_inds.size)
    if kp_fg_inds.size > kp_fg_rois_per_this_image:
        kp_fg_inds = np.random.choice(
            kp_fg_inds, size=kp_fg_rois_per_this_image, replace=False
        )
    
            # Map from gt box to an anchor that has highest overlap
        gt_to_anchor_argmax = anchor_by_gt_overlap.argmax(axis=0)
        # For each gt box, amount of overlap with most overlapping anchor
        gt_to_anchor_max = anchor_by_gt_overlap[
            gt_to_anchor_argmax, np.arange(anchor_by_gt_overlap.shape[1])]
        # Find all anchors that share the max overlap amount
        # (this includes many ties)
        anchors_with_max_overlap = np.where(
            anchor_by_gt_overlap == gt_to_anchor_max)[0]
    
            X = np.random.randn(N, 256, 14, 14)
        for _i in range(iters):
            I = np.random.permutation(N)
            workspace.FeedBlob('X', X.astype(np.float32))
            workspace.FeedBlob('I', I.astype(np.int32))
            workspace.RunNet(net.Proto().name)
            np.testing.assert_allclose(
                workspace.FetchBlob('Y'), X[I], rtol=1e-5, atol=1e-08
            )
    
    
def SendEventNotificationAsync( event_name,
                                buffer_number = None,
                                extra_data = None ):
  event = EventNotification( event_name, buffer_number, extra_data )
  event.Start()

    
    from ycm.client.base_request import BaseRequest
    
      opts = { 'filter_diagnostics' : {
    'java,c,cs' : { 'regex' : '.*taco.*' } } }
    
      def shutdown( self, wait=True ):
    with self._shutdown_lock:
      self._shutdown = True
      self._work_queue.put( None )
    if wait:
      for t in self._threads:
        t.join()
  shutdown.__doc__ = _base.Executor.shutdown.__doc__

    
        def set_exception(self, exception):
        '''Sets the result of the future as being the given exception.
    
        # For pickling to work, the __module__ variable needs to be set to the frame
    # where the named tuple is created.  Bypass this step in enviroments where
    # sys._getframe is not defined (Jython for example).
    if hasattr(_sys, '_getframe'):
        result.__module__ = _sys._getframe(1).f_globals.get('__name__', '__main__')