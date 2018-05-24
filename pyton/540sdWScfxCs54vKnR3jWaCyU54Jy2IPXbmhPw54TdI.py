
        
            # To avoid having to always use the '|safe' filter in flatpage templates,
    # mark the title and content as already safe (since they are raw HTML
    # content in the first place).
    f.title = mark_safe(f.title)
    f.content = mark_safe(f.content)
    
    from mrjob.job import MRJob
    
        def mapper(self, _, line):
        '''Parse each log line, extract and transform relevant lines.
    
        def __init__(self, floor, total_spots):
        self.floor = floor
        self.num_spots = total_spots
        self.available_spots = 0
        self.spots = []  # List of ParkingSpots
    
            self.assertFalse(self.vhost2.conflicts([self.addr1,
                                                self.addr_default]))
    
        @mock.patch(
        'certbot_compatibility_test.validator.crypto_util.probe_sni')
    def test_certificate_error(self, mock_probe_sni):
        cert = OpenSSL.crypto.X509()
        mock_probe_sni.side_effect = [acme_errors.Error]
        self.assertFalse(self.validator.certificate(
            cert, 'test.com', '127.0.0.1'))
    
    js.load_plugin_modules(plugins)
modules = dict((k, m) for k, m in js.module.iteritems())
print 'JS_MODULES := ' + ' '.join(modules.iterkeys())
outputs = []
for name, module in modules.iteritems():
    outputs.extend(module.outputs)
    print 'JS_MODULE_OUTPUTS_%s := %s' % (name, ' '.join(module.outputs))
    print 'JS_MODULE_DEPS_%s := %s' % (name, ' '.join(module.dependencies))
    
        current_ref = get_current_ref()
    base_ref = get_merge_base()
    if options.files:
        files = options.files
    else:
        files = get_changed_files(base_ref, current_ref)
        logging.debug('files changed: %r', files)
    
            if 'note' in notes_json:
            note = notes_json['note'] or ''
            if not rel_exists:
                # If this is a newly created friend relationship,
                # the cache needs to be updated before a note can
                # be applied
                c.user.friend_rels_cache(_update=True)
            c.user.add_friend_note(friend, note)
        rel_view = FriendTableItem(friend_rel)
        return self.api_wrapper(FriendTableItemJsonTemplate().data(rel_view))
    
        @validate(
        container_id=VGTMContainerId('id')
    )
    def GET_jail(self, container_id):
        return GoogleTagManagerJail(container_id=container_id).render()
    
    import json
import os