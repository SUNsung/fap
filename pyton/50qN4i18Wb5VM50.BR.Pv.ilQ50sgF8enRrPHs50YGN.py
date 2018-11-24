
        
            return app

    
    
@pytest.mark.parametrize('path', (
    '/create',
    '/1/update',
))
def test_create_update_validate(client, auth, path):
    auth.login()
    response = client.post(path, data={'title': '', 'body': ''})
    assert b'Title is required.' in response.data
    
    import pytest
from flaskr.db import get_db
    
        from inspect import getargspec
    from cStringIO import StringIO
    
    
def jsonify(*args, **kwargs):
    '''This function wraps :func:`dumps` to add a few enhancements that make
    life easier.  It turns the JSON output into a :class:`~flask.Response`
    object with the :mimetype:`application/json` mimetype.  For convenience, it
    also converts multiple arguments into an array or multiple keyword arguments
    into a dict.  This means that both ``jsonify(1,2,3)`` and
    ``jsonify([1,2,3])`` serialize to ``[1,2,3]``.
    
    Originally created for this issue:
https://github.com/scrapy/scrapy/issues/606
    
        cmd = cmds[cmdname]
    parser.usage = 'scrapy %s %s' % (cmdname, cmd.syntax())
    parser.description = cmd.long_desc()
    settings.setdict(cmd.default_settings, priority='command')
    cmd.settings = settings
    cmd.add_options(parser)
    opts, args = parser.parse_args(args=argv[1:])
    _run_print_help(parser, cmd.process_options, args, opts)
    
                tested_methods = conman.tested_methods_from_spidercls(spidercls)
            if opts.list:
                for method in tested_methods:
                    contract_reqs[spidercls.name].append(method)
            elif tested_methods:
                self.crawler_process.crawl(spidercls)
    
        def gotClient(self, client, request, filepath):
        self.client = client
        protocol = ReceivedDataProtocol(request.meta.get('ftp_local_filename'))
        return client.retrieveFile(filepath, protocol)\
                .addCallbacks(callback=self._build_response,
                        callbackArgs=(request, protocol),
                        errback=self._failed,
                        errbackArgs=(request,))
    
    
def generateKey(keySize):
    print('Generating prime p...')
    p = rabinMiller.generateLargePrime(keySize)  # select large prime number.
    e_1 = primitiveRoot(p)  # one primitive root on modulo p.
    d = random.randrange(3, p)  # private_key -> have to be greater than 2 for safety.
    e_2 = cryptoMath.findModInverse(pow(e_1, d, p), p)
    
    def rabinMiller(num):
    s = num - 1
    t = 0
    
            next_prime_gt = next_prime(value % self.size_table) \
            if not check_prime(value % self.size_table) else value % self.size_table  #gt = bigger than
        return next_prime_gt - (data % next_prime_gt)
    
    print('writing anagrams to file...')
with open('anagrams.txt', 'w') as file:
    file.write('all_anagrams = ')
    file.write(pprint.pformat(all_anagrams))
    
    
'''
* Wondering how this method works !
* It's pretty simple.
* Let's say you need to calculate a ^ b
* RULE 1 : a * b = (a+a) * (b/2) ---- example : 4 * 4 = (4+4) * (4/2) = 8 * 2
* RULE 2 : IF b is ODD, then ---- a * b = a + (a * (b - 1)) :: where (b - 1) is even.
* Once b is even, repeat the process to get a * b
* Repeat the process till b = 1 OR b = 0, because a*1 = a AND a*0 = 0
*
* As far as the modulo is concerned,
* the fact : (a+b) % c = ((a%c) + (b%c)) % c
* Now apply RULE 1 OR 2, whichever is required.
'''
