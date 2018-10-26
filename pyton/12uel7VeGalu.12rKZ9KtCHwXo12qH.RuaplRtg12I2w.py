
        
        
def build_completion(opt_parser):
    commands = []
    
    password = key + 16 * [0]
new_key = aes_encrypt(password, key_expansion(password)) * (32 // 16)
r = openssl_encode('aes-256-ctr', new_key, iv)
print('aes_decrypt_text 32')
print(repr(r))

    
    # We must be able to import youtube_dl
sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__)))))
    
        def gen_ies_md(ies):
        for ie in ies:
            ie_md = '**{0}**'.format(ie.IE_NAME)
            ie_desc = getattr(ie, 'IE_DESC', None)
            if ie_desc is False:
                continue
            if ie_desc is not None:
                ie_md += ': {0}'.format(ie.IE_DESC)
            if not ie.working():
                ie_md += ' (Currently broken)'
            yield ie_md
    
            info_dict = _make_result(formats)
        ydl = YDL({'format': 'best'})
        ie = YoutubeIE(ydl)
        ie._sort_formats(info_dict['formats'])
        ydl.process_ie_result(copy.deepcopy(info_dict))
        downloaded = ydl.downloaded_info_dicts[0]
        self.assertEqual(downloaded['format_id'], 'aac-64')
    
    
def test_preprocess_input():
    # Test image batch with float and int image input
    x = np.random.uniform(0, 255, (2, 10, 10, 3))
    xint = x.astype('int32')
    assert utils.preprocess_input(x).shape == x.shape
    assert utils.preprocess_input(xint).shape == xint.shape
    
        with custom_object_scope({'MSE_MAE_loss': MSE_MAE_loss}):
        loss = MSE_MAE_loss(0.3)
        inputs = keras.layers.Input((2,))
        outputs = keras.layers.Dense(1, name='model_output')(inputs)
        model = keras.models.Model(inputs, outputs)
        model.compile(optimizer='sgd', loss={'model_output': loss})
        model.fit(np.random.rand(256, 2), np.random.rand(256, 1))
        model.save(model_filename)
    
        # Note on specifying the initial state of RNNs
    Note: that
        One: You can specify the initial state of RNN layers symbolically by
            calling them with the keyword argument `initial_state`.
        Two: The value of `initial_state` should be a tensor or list of
            tensors representing
            the initial state of the RNN layer.
        You can specify the initial state of RNN layers numerically by:
        One: calling `reset_states`
            - With the keyword argument `states`.
                - The value of
            `states` should be a numpy array or
            list of numpy arrays representing
        the initial state of the RNN layer.
    
        # Output shape
        - if `return_state`: a list of tensors. The first tensor is
            the output. The remaining tensors are the last states,
            each 5D tensor with shape:
            `(samples, timesteps,
              filters, new_rows, new_cols)` if data_format='channels_first'
            or 5D tensor with shape:
            `(samples, timesteps,
              new_rows, new_cols, filters)` if data_format='channels_last'.
            `rows` and `cols` values might have changed due to padding.
        - if `return_sequences`: 5D tensor with shape:
            `(samples, timesteps,
              filters, new_rows, new_cols)` if data_format='channels_first'
            or 5D tensor with shape:
            `(samples, timesteps,
              new_rows, new_cols, filters)` if data_format='channels_last'.
        - else, 4D tensor with shape:
            `(samples, filters, new_rows, new_cols)` if data_format='channels_first'
            or 4D tensor with shape:
            `(samples, new_rows, new_cols, filters)` if data_format='channels_last'.
    
            # Broken links can't be fixed and
        # I am not sure what do with the local ones.
        if errortype.lower() in ['broken', 'local']:
            print('Not Fixed: ' + line)
        else:
            # If this is a new file
            if newfilename != _filename:
    
    from scrapy.commands import ScrapyCommand
from scrapy.exceptions import UsageError
    
        def syntax(self):
        return '[options] <url>'
    
        def add_options(self, parser):
        ScrapyCommand.add_options(self, parser)
        parser.add_option('-a', dest='spargs', action='append', default=[], metavar='NAME=VALUE',
                          help='set spider argument (may be repeated)')
        parser.add_option('-o', '--output', metavar='FILE',
                          help='dump scraped items into FILE (use - for stdout)')
        parser.add_option('-t', '--output-format', metavar='FORMAT',
                          help='format to use for dumping items with -o')
    
        def syntax(self):
        return '[options]'
    
            # The crawler is created this way since the Shell manually handles the
        # crawling engine, so the set up in the crawl method won't work
        crawler = self.crawler_process._create_crawler(spidercls)
        # The Shell class needs a persistent engine in the crawler
        crawler.engine = crawler._create_engine()
        crawler.engine.start()
    
        def syntax(self):
        return '[-v]'
    
    
FILEPATH = os.path.join(
    os.path.abspath(os.path.dirname(os.path.dirname(__file__))), 'blns.txt')
'''Path to the file'''
    
        path = os.fspath(path)
    if isinstance(path, bytes):
        curdir = b'.'
        sep = b'/'
        pardir = b'..'
    else:
        curdir = '.'
        sep = '/'
        pardir = '..'
    
        @unittest.skipIf(posix is None, 'Test requires posix module')
    def test_ismount_directory_not_readable(self):
        # issue #2466: Simulate ismount run on a directory that is not
        # readable, which used to return False.
        save_lstat = os.lstat
        def fake_lstat(path):
            st_ino = 0
            st_dev = 0
            if path.startswith(ABSTFN) and path != ABSTFN:
                # ismount tries to read something inside the ABSTFN directory;
                # simulate this being forbidden (no read permission).
                raise OSError('Fake [Errno 13] Permission denied')
            if path == ABSTFN:
                st_dev = 1
                st_ino = 1
            return posix.stat_result((0, st_ino, st_dev, 0, 0, 0, 0, 0, 0, 0))
        try:
            os.lstat = fake_lstat
            self.assertIs(posixpath.ismount(ABSTFN), True)
        finally:
            os.lstat = save_lstat
    
        Directories are *not* resources.
    '''
    package = _get_package(package)
    _normalize_path(name)
    reader = _get_resource_reader(package)
    if reader is not None:
        return reader.is_resource(name)
    try:
        package_contents = set(contents(package))
    except (NotADirectoryError, FileNotFoundError):
        return False
    if name not in package_contents:
        return False
    # Just because the given file_name lives as an entry in the package's
    # contents doesn't necessarily mean it's a resource.  Directories are not
    # resources, so let's try to find out if it's a directory or not.
    path = Path(package.__spec__.origin).parent / name
    return path.is_file()
    
        def testDecompressorChunksMaxsize(self):
        bzd = BZ2Decompressor()
        max_length = 100
        out = []
    
    # Simple class representing a record in our database.
MemoRecord = namedtuple('MemoRecord', 'key, task')
    
    
def main():
    parser = ArgumentParser(description='''\
Send the contents of a directory as a MIME message.
Unless the -o option is given, the email is sent by forwarding to your local
SMTP server, which then does the normal delivery process.  Your local machine
must be running an SMTP server.
''')
    parser.add_argument('-d', '--directory',
                        help='''Mail the contents of the specified directory,
                        otherwise use the current directory.  Only the regular
                        files in the directory are sent, and we don't recurse to
                        subdirectories.''')
    parser.add_argument('-o', '--output',
                        metavar='FILE',
                        help='''Print the composed message to FILE instead of
                        sending the message to the SMTP server.''')
    parser.add_argument('-s', '--sender', required=True,
                        help='The value of the From: header (required)')
    parser.add_argument('-r', '--recipient', required=True,
                        action='append', metavar='RECIPIENT',
                        default=[], dest='recipients',
                        help='A To: header value (at least one required)')
    args = parser.parse_args()
    directory = args.directory
    if not directory:
        directory = '.'
    # Create the message
    msg = EmailMessage()
    msg['Subject'] = 'Contents of directory %s' % os.path.abspath(directory)
    msg['To'] = ', '.join(args.recipients)
    msg['From'] = args.sender
    msg.preamble = 'You will not see this in a MIME-aware mail reader.\n'
    
            try:
            print(pool.apply(f, (5,)))
        except ZeroDivisionError:
            print('\tGot ZeroDivisionError as expected from pool.apply()')
        else:
            raise AssertionError('expected ZeroDivisionError')
    
      Args:
    filename: The name of the current file.
    clean_lines: A CleansedLines instance containing the file.
    linenum: The number of the line to check.
    nesting_state: A NestingState instance which maintains information about
                   the current stack of nested blocks being parsed.
    error: The function to call with any errors found.
  '''
  # Do nothing if there is no '&' on current line.
  line = clean_lines.elided[linenum]
  if '&' not in line:
    return
    
        def __init__(self, hass, flash_briefings):
        '''Initialize Alexa view.'''
        super().__init__()
        self.flash_briefings = copy.deepcopy(flash_briefings)
        template.attach(hass, self.flash_briefings)
    
    import homeassistant.helpers.config_validation as cv
from homeassistant.components.device_tracker import (
    DOMAIN, PLATFORM_SCHEMA, DeviceScanner)
from homeassistant.const import CONF_HOST
    
    
class SwisscomDeviceScanner(DeviceScanner):
    '''This class queries a router running Swisscom Internet-Box firmware.'''
    
            # Flag C stands for CONNECTED
        active_clients = [client for client in data.values() if
                          client['status'].find('C') != -1]
        self.last_results = active_clients
        return True
    
    ATTR_COUNTRY = 'country_code'
ATTR_FIRST_NAME = 'first_name'
ATTR_LAST_NAME = 'last_name'
ATTR_EMAIL = 'email'
ATTR_PHONE = 'phone'
ATTR_ADDRESS = 'address'
ATTR_ORDERS = 'orders'
ATTR_SHOW_MENU = 'show_menu'
ATTR_ORDER_ENTITY = 'order_entity_id'
ATTR_ORDER_NAME = 'name'
ATTR_ORDER_CODES = 'codes'
    
                    _LOGGER.error('UPNP Responder socket exception occurred: %s',
                              ex.__str__)
                # without the following continue, a second exception occurs
                # because the data object has not been initialized
                continue
    
    
def create_event_handler(patterns, hass):
    '''Return the Watchdog EventHandler object.'''
    from watchdog.events import PatternMatchingEventHandler