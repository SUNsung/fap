
        
            @classmethod
    def clear_expired(cls):
        pass

    
        @classmethod
    def get_session_store_class(cls):
        raise NotImplementedError
    
    
@html_safe
class BoundWidget:
    '''
    A container class used for iterating over widgets. This is useful for
    widgets that have choices. For example, the following can be used in a
    template:
    
    
def to_native_string(string, encoding='ascii'):
    '''Given a string object, regardless of type, returns a representation of
    that string in the native string type, encoding and decoding where
    necessary. This assumes ASCII unless told otherwise.
    '''
    if isinstance(string, builtin_str):
        out = string
    else:
        if is_py2:
            out = string.encode(encoding)
        else:
            out = string.decode(encoding)
    
        @get_item_parameters
    def test_get(self, key, value):
        assert self.lookup_dict.get(key) == value

    
    
def info():
    '''Generate information for a bug report.'''
    try:
        platform_info = {
            'system': platform.system(),
            'release': platform.release(),
        }
    except IOError:
        platform_info = {
            'system': 'Unknown',
            'release': 'Unknown',
        }
    
        @staticmethod
    def _encode_params(data):
        '''Encode parameters in a piece of data.
    
    Some codes have multiple names, and both upper- and lower-case versions of
the names are allowed. For example, ``codes.ok``, ``codes.OK``, and
``codes.okay`` all correspond to the HTTP status code 200.
'''
    
            #: Dictionary mapping protocol or protocol and host to the URL of the proxy
        #: (e.g. {'http': 'foo.bar:3128', 'http://host.name': 'foo.bar:4012'}) to
        #: be used on each :class:`Request <Request>`.
        self.proxies = {}
    
        def test_HTTP_307_ALLOW_REDIRECT_POST(self, httpbin):
        r = requests.post(httpbin('redirect-to'), data='test', params={'url': 'post', 'status_code': 307})
        assert r.status_code == 200
        assert r.history[0].status_code == 307
        assert r.history[0].is_redirect
        assert r.json()['data'] == 'test'
    
    # For 'manual' documents, if this is true, then toplevel headings are parts,
# not chapters.
# latex_use_parts = False
    
        async def real_ip_startup(app):
        '''Startup of real ip.'''
        app.middlewares.insert(0, mock_real_ip)
    
    
def gradient_loss(y_true, y_pred):
    '''
    Calculates the first and second order gradient difference between pixels of an image in the
    x and y dimensions. These gradients are then compared between the ground truth and the
    predicted image and the difference is taken. The difference used is a smooth L1 norm
    (approximate to MAE but differable at zero) When used as a loss, its minimization will result
    in predicted images approaching the samelevel of sharpness / blurriness as the ground truth.
    
        def start(self):
        ''' Run the processing pool '''
        logging.debug('Pooling Processes: (target: '%s', args: %s, kwargs: %s)',
                      self._name, self._args, self._kwargs)
        for idx in range(self.procs):
            logger.debug('Adding process %s of %s to mp.Pool '%s'',
                         idx + 1, self.procs, self._name)
            self.pool.apply_async(self._method, args=self._args, kwds=self._kwargs)
            _launched_processes.add(self.pool)
        logging.debug('Pooled Processes: '%s'', self._name)
    
        def update_hashes(self):
        ''' Update hashes to alignments '''
        logger.info('Updating hashes to alignments...')
        updated = 0
        for frame, hashes in self.face_hashes.items():
            if not self.alignments.frame_exists(frame):
                logger.warning('Frame not found in alignments file. Skipping: '%s'', frame)
                continue
            if not self.alignments.frame_has_faces(frame):
                logger.warning('Frame does not have faces. Skipping: '%s'', frame)
                continue
            existing = [face.get('hash', None)
                        for face in self.alignments.get_faces_in_frame(frame)]
            if any(hsh not in existing for hsh in list(hashes.values())):
                self.alignments.add_face_hashes(frame, hashes)
                updated += 1
        return updated

    
                if offscreen:
    
            if self.axis is None:
            shape = (1,)
        else:
            shape = (input_shape[self.axis],)
    
        # partial derivatives to the checkpointed tensors and xs
    ops_to_copy = fast_backward_ops(seed_ops=[y.op for y in ys],
                                    stop_at_ts=checkpoints, within_ops=fwd_ops)
    debug_print('Found {} ops to copy within fwd_ops {}, seed {}, stop_at {}'.format(
        len(ops_to_copy), fwd_ops, [r.op for r in ys], checkpoints))
    debug_print('ops_to_copy = {}'.format(ops_to_copy))
    debug_print('Processing list {}'.format(ys))
    _, info = ge.copy_with_input_replacements(ge.sgv(ops_to_copy), {})
    for origin_op, op in info._transformed_ops.items():
        op._set_device(origin_op.node_def.device)
    copied_ops = info._transformed_ops.values()
    debug_print('Copied {} to {}'.format(ops_to_copy, copied_ops))
    ge.reroute_ts(checkpoints_disconnected.values(),
                  checkpoints_disconnected.keys(),
                  can_modify=copied_ops)
    debug_print('Rewired {} in place of {} restricted to {}'.format(
        checkpoints_disconnected.values(), checkpoints_disconnected.keys(), copied_ops))