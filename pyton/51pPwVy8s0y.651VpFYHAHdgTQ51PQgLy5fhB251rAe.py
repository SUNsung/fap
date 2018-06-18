    # Replacing the non-sorted libraries by the sorted ones and gathering all at the final_README file
    blocks[0] = inner_blocks
    final_README = table_of_contents + '- - -' + ''.join(blocks)
    
    DOCUMENTATION = '''
---
inventory: openshift
short_description: Openshift gears external inventory script
description:
  - Generates inventory of Openshift gears using the REST interface
  - this permit to reuse playbook to setup an Openshift gear
version_added: None
author: Michael Scherer
'''
    
        if args.branch:
        data['branch'] = args.branch
    elif args.run:
        data['runId'] = args.run
    
    try:
    import json
except ImportError:
    import simplejson as json
    
            actual = GCPUtils.filter_gcp_fields(input_data)
        self.assertEquals(expected, actual)

    
    
class TerminalModule(TerminalBase):
    
            # in some cases, we may have pre-read the data and then
        # passed it to the load() call for YAML, in which case we
        # want to override the default datasource (which would be
        # '<string>') to the actual filename we read in
        datasource = self._ansible_file_name or node.start_mark.name
    
        @gen_test
    def test_set_default_executor(self):
        count = [0]
    
    
def bind_sockets(port, address=None, family=socket.AF_UNSPEC,
                 backlog=_DEFAULT_BACKLOG, flags=None, reuse_port=False):
    '''Creates listening sockets bound to the given port and address.
    
        def get_cookie(self, name, default=None):
        '''Returns the value of the request cookie with the given name.
    
        def test_trusted_downstream(self):
        valid_ipv4_list = {'X-Forwarded-For': '127.0.0.1, 4.4.4.4, 5.5.5.5'}
        resp = self.fetch('/', headers=valid_ipv4_list)
        if resp.headers['request-version'].startswith('HTTP/2'):
            # This is a hack - there's nothing that fundamentally requires http/1
            # here but tornado_http2 doesn't support it yet.
            self.skipTest('requires HTTP/1.x')
        result = json_decode(resp.body)
        self.assertEqual(result['remote_ip'], '4.4.4.4')
    
        @gen_test
    def test_close_buffered_data(self):
        # Similar to the previous test, but with data stored in the OS's
        # socket buffers instead of the IOStream's read buffer.  Out-of-band
        # close notifications must be delayed until all data has been
        # drained into the IOStream buffer. (epoll used to use out-of-band
        # close events with EPOLLRDHUP, but no longer)
        #
        # This depends on the read_chunk_size being smaller than the
        # OS socket buffer, so make it small.
        rs, ws = yield self.make_iostream_pair(read_chunk_size=256)
        try:
            ws.write(b'A' * 512)
            data = yield rs.read_bytes(256)
            self.assertEqual(b'A' * 256, data)
            ws.close()
            # Allow the close to propagate to the `rs` side of the
            # connection.  Using add_callback instead of add_timeout
            # doesn't seem to work, even with multiple iterations
            yield gen.sleep(0.01)
            data = yield rs.read_bytes(256)
            self.assertEqual(b'A' * 256, data)
        finally:
            ws.close()
            rs.close()
    
        @skipBefore35
    def test_native_coroutine_timeout(self):
        # Set a short timeout and exceed it.
        namespace = exec_test(globals(), locals(), '''
        @gen_test(timeout=0.1)
        async def test(self):
            await gen.sleep(1)
        ''')
    
        if not app.config.edit_on_github_project:
        warnings.warn('edit_on_github_project not specified')
        return
    if not doctree:
        warnings.warn('doctree is None')
        return
    path = os.path.relpath(doctree.get('source'), app.builder.srcdir)
    show_url = get_github_url(app, 'blob', path)
    edit_url = get_github_url(app, 'edit', path)
    
        hass.services.register(DOMAIN, SERVICE_MEDIA_PREVIOUS_TRACK,
                           lambda service:
                           keyboard.tap_key(keyboard.media_prev_track_key),
                           schema=TAP_KEY_SCHEMA)
    return True
