
        
        def rabinMiller(num):
    s = num - 1
    t = 0
    
    
class HashTable:
    '''
        Basic Hash Table example with open addressing and linear probing
    '''
    
        score = np.sqrt(mean_square_diff)
    
            a += a
        b >>= 1
    
    letters = [letter for letter in string.ascii_letters]
digits = [digit for digit in string.digits]
symbols = [symbol for symbol in string.punctuation]
chars = letters + digits + symbols
random.shuffle(chars)
    
                # the (n+1)th request fails
            with pytest.raises(requests.exceptions.ConnectionError):
                r = requests.get(server_url)
    
    from .structures import LookupDict
    
        return urlunparse((scheme, netloc, path, params, query, ''))
    
            # Adding unique constraint on 'TagKey', fields ['project_id', 'environment_id', 'key']
        db.create_unique(u'tagstore_tagkey', ['project_id', 'environment_id', 'key'])
    
        # Flag to indicate if this migration is too risky
    # to run online and needs to be coordinated for offline
    is_dangerous = True
    
        return results
    
            for platform, project_id in queryset:
            platform = platform.lower()
            if platform not in VALID_PLATFORMS:
                continue
            ProjectPlatform.objects.create_or_update(
                project_id=project_id,
                platform=platform,
                values={
                    'last_seen': now,
                },
            )
        min_project_id += step
    
    import logging
    
    
def main():
    parse_command_line()
    t = Timer(e1)
    results = t.timeit(options.num) / options.num
    print('engine: %0.3f ms per iteration' % (results * 1000))
    t = Timer(c1)
    results = t.timeit(options.num) / options.num
    print('coroutine: %0.3f ms per iteration' % (results * 1000))
    
        url = options.url + '/updateReports?agent=%s' % options.name
    update_ws = yield websocket_connect(url, None)
    msg = yield update_ws.read_message()
    assert msg is None
    IOLoop.instance().stop()
    
        @gen.coroutine
    def resolve(
        self, host: str, port: int, family: int = 0
    ) -> 'Generator[Any, Any, List[Tuple[int, Any]]]':
        if is_valid_ip(host):
            addresses = [host]
        else:
            # gethostbyname doesn't take callback as a kwarg
            fut = Future()  # type: Future[Tuple[Any, Any]]
            self.channel.gethostbyname(
                host, family, lambda result, error: fut.set_result((result, error))
            )
            result, error = yield fut
            if error:
                raise IOError(
                    'C-Ares returned error %s: %s while resolving %s'
                    % (error, pycares.errno.strerror(error), host)
                )
            addresses = result.addresses
        addrinfo = []
        for address in addresses:
            if '.' in address:
                address_family = socket.AF_INET
            elif ':' in address:
                address_family = socket.AF_INET6
            else:
                address_family = socket.AF_UNSPEC
            if family != socket.AF_UNSPEC and family != address_family:
                raise IOError(
                    'Requested socket family %d but got %d' % (family, address_family)
                )
            addrinfo.append((typing.cast(int, address_family), (address, port)))
        return addrinfo

    
        def test_ioloop_close_leak(self):
        orig_count = len(IOLoop._ioloop_for_asyncio)
        for i in range(10):
            # Create and close an AsyncIOLoop using Tornado interfaces.
            loop = AsyncIOLoop()
            loop.close()
        new_count = len(IOLoop._ioloop_for_asyncio) - orig_count
        self.assertEqual(new_count, 0)
    
            self._last_char[0] = byte_str[-1]
    
        def __init__(self, model, reversed=False, name_prober=None):
        super(SingleByteCharSetProber, self).__init__()
        self._model = model
        # TRUE if we need to reverse every pair in the model lookup
        self._reversed = reversed
        # Optional auxiliary prober for name decision
        self._name_prober = name_prober
        self._last_order = None
        self._seq_counters = None
        self._total_seqs = None
        self._total_char = None
        self._freq_char = None
        self.reset()
    
        @property
    def language(self):
        return 'Japanese'
    
        def __init__(self):
        super(UTF8Prober, self).__init__()
        self.coding_sm = CodingStateMachine(UTF8_SM_MODEL)
        self._num_mb_chars = None
        self.reset()