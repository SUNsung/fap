
        
        
class MissingNonceTest(unittest.TestCase):
    '''Tests for acme.errors.MissingNonce.'''
    
        def test_jwk_serialize(self):
        from acme.jws import JWS
        jws = JWS.sign(payload=b'foo', key=self.privkey,
                       alg=jose.RS256, nonce=self.nonce,
                       url=self.url)
        self.assertEqual(jws.signature.combined.kid, None)
        self.assertEqual(jws.signature.combined.jwk, self.pubkey)
    
    # The encoding of source files.
#source_encoding = 'utf-8-sig'
    
    
def _split_aug_path(vhost_path):
    '''Splits an Augeas path into a file path and an internal path.
    
    
from certbot import errors
from certbot.plugins import common
    
        def __str__(self):
        return (
            'File: {filename}\n'
            'Vhost path: {vhpath}\n'
            'Addresses: {addrs}\n'
            'Name: {name}\n'
            'Aliases: {aliases}\n'
            'TLS Enabled: {tls}\n'
            'Site Enabled: {active}\n'
            'mod_macro Vhost: {modmacro}'.format(
                filename=self.filep,
                vhpath=self.path,
                addrs=', '.join(str(addr) for addr in self.addrs),
                name=self.name if self.name is not None else '',
                aliases=', '.join(name for name in self.aliases),
                tls='Yes' if self.ssl else 'No',
                active='Yes' if self.enabled else 'No',
                modmacro='Yes' if self.modmacro else 'No'))
    
            self.config.rollback_checkpoints()
        self.assertEqual(mock_load.call_count, 1)
    
    from certbot.tests import util as certbot_util
    
            with mock.patch('certbot.util.get_os_info') as mock_info:
            for distro in entrypoint.OVERRIDE_CLASSES.keys():
                mock_info.return_value = (distro, 'whatever')
                self.assertEqual(entrypoint.get_configurator(),
                                 entrypoint.OVERRIDE_CLASSES[distro])
    
    # The master toctree document.
master_doc = 'index'
    
        def test_delete_unknown_attr(self):
        try:
            del self.b.unknown_attr
        except AttributeError:
            pass
        else:
            self.fail('deleting unknown attribute should raise TypeError')
    
            class DummyValue:
            def __init__(self, ctr):
                self.ctr = ctr
    
        def _find_tests(self, start_dir, pattern, namespace=False):
        '''Used by discovery. Yields test suites it loads.'''
        # Handle the __init__ in this package
        name = self._get_name_from_path(start_dir)
        # name is '.' when start_dir == top_level_dir (and top_level_dir is by
        # definition not a package).
        if name != '.' and name not in self._loading_packages:
            # name is in self._loading_packages while we have called into
            # loadTestsFromModule with name.
            tests, should_recurse = self._find_test_path(
                start_dir, pattern, namespace)
            if tests is not None:
                yield tests
            if not should_recurse:
                # Either an error occurred, or load_tests was used by the
                # package.
                return
        # Handle the contents.
        paths = sorted(os.listdir(start_dir))
        for path in paths:
            full_path = os.path.join(start_dir, path)
            tests, should_recurse = self._find_test_path(
                full_path, pattern, namespace)
            if tests is not None:
                yield tests
            if should_recurse:
                # we found a package that didn't use load_tests.
                name = self._get_name_from_path(full_path)
                self._loading_packages.add(name)
                try:
                    yield from self._find_tests(full_path, pattern, namespace)
                finally:
                    self._loading_packages.discard(name)
    
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
    
    ans = input('View full message?')
if ans.lower()[0] == 'n':
    sys.exit()
    
    document = '''\
<slideshow>
<title>Demo slideshow</title>
<slide><title>Slide title</title>
<point>This is a demo</point>
<point>Of a program for processing slides</point>
</slide>
    
        it = manager.baz()
    for i in it:
        print('<%d>' % i, end=' ')
    print()
    
            #
        # Testing timeouts
        #