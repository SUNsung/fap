
        
                # shell command to list all cert
        # certutil -L -d sql:$HOME/.pki/nssdb
    
            if response.status not in self.config.check_ip_accept_status:
            return False
    
            if cmd.startswith('#'):
            log.write('%s' % cmd)
            continue
    
        data = response.content
    response_headers = response.headers
    if 'content-encoding' not in response_headers and len(response.content) < URLFETCH_DEFLATE_MAXSIZE and response_headers.get('content-type', '').startswith(('text/', 'application/json', 'application/javascript')):
        if 'gzip' in accept_encoding:
            response_headers['Content-Encoding'] = 'gzip'
            compressobj = zlib.compressobj(zlib.Z_DEFAULT_COMPRESSION, zlib.DEFLATED, -zlib.MAX_WBITS, zlib.DEF_MEM_LEVEL, 0)
            dataio = BytesIO()
            dataio.write('\x1f\x8b\x08\x00\x00\x00\x00\x00\x02\xff')
            dataio.write(compressobj.compress(data))
            dataio.write(compressobj.flush())
            dataio.write(struct.pack('<LL', zlib.crc32(data) & 0xFFFFFFFFL, len(data) & 0xFFFFFFFFL))
            data = dataio.getvalue()
        elif 'deflate' in accept_encoding:
            response_headers['Content-Encoding'] = 'deflate'
            data = zlib.compress(data)[2:-4]
    if data:
         response_headers['Content-Length'] = str(len(data))
    response_headers_data = zlib.compress('\n'.join('%s:%s' % (k.title(), v) for k, v in response_headers.items() if not k.startswith('x-google-')))[2:-4]
    if 'rc4' not in options:
        start_response('200 OK', [('Content-Type', __content_type__)])
        yield struct.pack('!hh', int(response.status_code), len(response_headers_data))+response_headers_data
        yield data
    else:
        start_response('200 OK', [('Content-Type', __content_type__), ('X-GOA-Options', 'rc4')])
        yield struct.pack('!hh', int(response.status_code), len(response_headers_data))
        yield rc4crypt(response_headers_data, __password__)
        yield rc4crypt(data, __password__)
    
                    if c >= self.min[s] and c <= self.max[s]:
                    # move to next state
                    snext = self.transition[s][c-self.min[s]]
                    #print 'in range, next state = %d' % snext
                    
                    if snext < 0:
                        #print 'not a normal transition'
                        # was in range but not a normal transition
                        # must check EOT, which is like the else clause.
                        # eot[s]>=0 indicates that an EOT edge goes to another
                        # state.
                        if self.eot[s] >= 0: # EOT Transition to accept state?
                            #print 'EOT trans to accept state %d' % self.eot[s]
                            
                            s = self.eot[s]
                            input.consume()
                            # TODO: I had this as return accept[eot[s]]
                            # which assumed here that the EOT edge always
                            # went to an accept...faster to do this, but
                            # what about predicated edges coming from EOT
                            # target?
                            continue
    
                else:
                if isinstance(self.input, CharStream):
                    self.c = self.input.LT(1)
                    self.line = self.input.line
                    self.charPositionInLine = self.input.charPositionInLine
    
            See also reportError()
	'''
        return self._state.syntaxErrors
    
        def test_unset_attr(self):
        for func in [self.b, self.fi.a]:
            try:
                func.non_existent_attr
            except AttributeError:
                pass
            else:
                self.fail('using unknown attributes should raise '
                          'AttributeError')
    
                path = self.handler.translate_path('c:c:foo\\c:c:bar/filename')
            path = path.replace(ntpath.sep, os.sep)
            self.assertEqual(path, self.translated)
    
    [1] http://www.yummly.com/recipe/Roasted-Asparagus-Epicurious-203718
    
            print('Ordered results using pool.map() --- will block till complete:')
        for x in pool.map(calculatestar, TASKS):
            print('\t', x)
        print()
    
    #
#
#
    
        - register() themselves and save the returned ID
    - unregister() themselves upon close()
    - include a __del__ method which close()'s the object
    '''
    
    def create_seed(a=None, max_bytes=8):
    '''Create a strong random seed. Otherwise, Python 2 would seed using
    the system time, which might be non-robust especially in the
    presence of concurrency.
    
    def add_new_rollouts(spec_ids, overwrite):
    environments = [spec for spec in envs.registry.all() if spec._entry_point is not None]
    if spec_ids:
        environments = [spec for spec in environments if spec.id in spec_ids]
        assert len(environments) == len(spec_ids), 'Some specs not found'
    with open(ROLLOUT_FILE) as data_file:
        rollout_dict = json.load(data_file)
    modified = False
    for spec in environments:
        if not overwrite and spec.id in rollout_dict:
            logger.debug('Rollout already exists for {}. Skipping.'.format(spec.id))
        else:
            modified = update_rollout_dict(spec, rollout_dict) or modified