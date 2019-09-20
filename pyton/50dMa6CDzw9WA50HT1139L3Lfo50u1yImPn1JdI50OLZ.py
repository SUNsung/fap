
        
            @nonce.decoder
    def nonce(value):  # pylint: disable=missing-docstring,no-self-argument
        try:
            return jose.decode_b64jose(value)
        except jose.DeserializationError as error:
            # TODO: custom error
            raise jose.DeserializationError('Invalid nonce: {0}'.format(error))
    
    from certbot import errors
    
        def test_get_sni_addr(self):
        from certbot_apache.obj import Addr
        self.assertEqual(
            self.addr.get_sni_addr('443'), Addr.fromstring('*:443'))
        self.assertEqual(
            self.addr.get_sni_addr('225'), Addr.fromstring('*:225'))
        self.assertEqual(
            self.addr1.get_sni_addr('443'), Addr.fromstring('127.0.0.1'))
    
    DOMAIN = 'example.com'
KEY = jose.JWKRSA.load(test_util.load_vector('rsa512_key.pem'))
    
            if record_contents:
            # We need to remove old records in the same request
            data['deletions'] = [
                {
                    'kind': 'dns#resourceRecordSet',
                    'type': 'TXT',
                    'name': record_name + '.',
                    'rrdatas': record_contents,
                    'ttl': record_ttl,
                },
            ]
    
            # Adding index on 'EventTag', fields ['environment_id', 'key', 'value']
        db.create_index(u'tagstore_eventtag', ['environment_id', 'key', 'value'])
    
            # Changing field 'GroupTagKey.group_id'
        db.alter_column(u'tagstore_grouptagkey', 'group_id', self.gf(
            'sentry.db.models.fields.bounded.BoundedPositiveIntegerField')())
    
        def run(self):
        while True:
            try:
                ident, func, args, kwargs = self.queue.get_nowait()
            except Empty:
                break
    
        if debug_on:
        if logging_file:
            if len(_logger.handlers) < 2:
                _logger.addHandler(logging.FileHandler(logging_file))
                _logger.setLevel(logging.DEBUG)
        else:
            raise IOError('SOUTH_LOGGING_ON is True. You also need a SOUTH_LOGGING_FILE setting.')