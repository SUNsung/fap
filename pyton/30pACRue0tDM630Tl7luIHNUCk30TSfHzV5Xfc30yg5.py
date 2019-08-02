
        
            def __init__(self, num_levels):
        self.num_levels = num_levels
        self.levels = []  # List of Levels
    
            subtitles = {}
        for caption in playinfo.get('captions', {}).get('list', []):
            lang = dict_get(caption, ('locale', 'language', 'country', 'label'))
            if lang and caption.get('source'):
                subtitles[lang] = [{
                    'ext': 'vtt',
                    'url': caption['source']}]
    
        _TESTS = [{
        'url': 'http://www.southpark.nl/full-episodes/s18e06-freemium-isnt-free',
        'info_dict': {
            'title': 'Freemium Isn\'t Free',
            'description': 'Stan is addicted to the new Terrance and Phillip mobile game.',
        },
        'playlist_mincount': 3,
    }]
    
    import optparse
import os
from os.path import dirname as dirn
import sys
    
        infile, outfile = args
    
    
parser = youtube_dl.parseOpts()[0]
build_completion(parser)

    
    from test.helper import try_rm
    
            try:
            self._db = shelve.open(cache_path)
        except shelve_open_error + (ImportError,):
            # Caused when switching between Python versions
            warn('Removing possibly out-dated cache')
            os.remove(cache_path)
            self._db = shelve.open(cache_path)
    
    from thefuck.utils import replace_command
from thefuck.specific.archlinux import get_pkgfile, archlinux_env
    
            command = command.split(' ')[0]
    
        @pytest.fixture(autouse=True)
    def Popen(self, mocker):
        mock = mocker.patch('thefuck.shells.bash.Popen')
        return mock
    
        def test_app_alias(self, shell):
        assert 'fuck () {' in shell.app_alias('fuck')
        assert 'FUCK () {' in shell.app_alias('FUCK')
        assert 'thefuck' in shell.app_alias('fuck')
        assert 'PYTHONIOENCODING' in shell.app_alias('fuck')
    }
    }
    
        def and_(self, *commands):
        return u' && '.join(commands)
    
        @memoize
    def get_aliases(self):
        raw_aliases = os.environ.get('TF_SHELL_ALIASES', '').split('\n')
        return dict(self._parse_alias(alias)
                    for alias in raw_aliases if alias and '=' in alias)
    
        def test_repr(self):
        self.assertEqual('PollError(exhausted=%s, updated={sentinel.AR: '
                         'sentinel.AR2})' % repr(set()), repr(self.invalid))
    
        Handles decoding/encoding between RFC3339 strings and aware (not
    naive) `datetime.datetime` objects
    (e.g. ``datetime.datetime.now(pytz.utc)``).
    
        @staticmethod
    def _true_mock():
        return True
    
    
setup(
    name='certbot',
    version=version,
    description='ACME client',
    long_description=readme,
    url='https://github.com/letsencrypt/letsencrypt',
    author='Certbot Project',
    author_email='client-dev@letsencrypt.org',
    license='Apache License 2.0',
    python_requires='>=2.7, !=3.0.*, !=3.1.*, !=3.2.*, !=3.3.*',
    classifiers=[
        'Development Status :: 5 - Production/Stable',
        'Environment :: Console',
        'Environment :: Console :: Curses',
        'Intended Audience :: System Administrators',
        'License :: OSI Approved :: Apache Software License',
        'Operating System :: POSIX :: Linux',
        'Programming Language :: Python',
        'Programming Language :: Python :: 2',
        'Programming Language :: Python :: 2.7',
        'Programming Language :: Python :: 3',
        'Programming Language :: Python :: 3.4',
        'Programming Language :: Python :: 3.5',
        'Programming Language :: Python :: 3.6',
        'Programming Language :: Python :: 3.7',
        'Topic :: Internet :: WWW/HTTP',
        'Topic :: Security',
        'Topic :: System :: Installation/Setup',
        'Topic :: System :: Networking',
        'Topic :: System :: Systems Administration',
        'Topic :: Utilities',
    ],
    
    
@zope.interface.implementer(interfaces.IAuthenticator)
@zope.interface.provider(interfaces.IPluginFactory)
class Authenticator(dns_common.DNSAuthenticator):
    '''DNS Authenticator for Google Cloud DNS
    
            print('Two or more elements')
        data = [5, 1, 7, 2, 6, -3, 5, 7, -1]
        assert_equal(insertion_sort.sort(data), sorted(data))
    
    
class TestSetOfStacks(object):
    
    		print('Success: test_max_min_nodes')
    
        def __len__(self):
        return len(self.array)
    
            self.known_peers[sender['peer_id']]['sites_changed'] = params['sites_changed']
        self.known_peers[sender['peer_id']]['updated'] = time.time()
        self.known_peers[sender['peer_id']]['found'] = time.time()
    
            # Response to messages with different peer id
        sender_info = copy.copy(announcer.sender_info)
        sender_info['peer_id'] += '-'
        addr, res = announcer.handleMessage(('0.0.0.0', 123), {'cmd': 'discoverRequest', 'sender': sender_info, 'params': {}})
        assert res['params']['sites_changed'] > 0
    
        def benchmarkPeerMemory(self, site, file_server):
        # Init source server
        site.connection_server = file_server
        file_server.sites[site.address] = site
    
        def getCollectors(self):
        collectors = {}
        import main
        file_server = main.file_server
        sites = file_server.sites
        if not sites:
            return collectors
        content_db = list(sites.values())[0].content_manager.contents.db
    
        def getSiteId(self, address):
        if address not in self.sites:
            self.execute('INSERT INTO site ?', {'address': address})
            self.sites[address] = self.cur.cursor.lastrowid
    
        def load(self):
        # Rename previously used mutes.json -> filters.json
        if os.path.isfile('%s/mutes.json' % config.data_dir):
            self.log.info('Renaming mutes.json to filters.json...')
            os.rename('%s/mutes.json' % config.data_dir, self.file_path)
        if os.path.isfile(self.file_path):
            try:
                return json.load(open(self.file_path))
            except Exception as err:
                self.log.error('Error loading filters.json: %s' % err)
                return None
        else:
            return None
    
    
def toOpensslPublickey(publickey):
    publickey_bin = btctools.encode_pubkey(publickey, 'bin')
    publickey_bin = publickey_bin[1:]
    publickey_openssl = b'\x02\xca\x00 ' + publickey_bin[:32] + b'\x00 ' + publickey_bin[32:]
    return publickey_openssl

    
        # add the text classifier to the pipeline if it doesn't exist
    # nlp.create_pipe works for built-ins that are registered with spaCy
    if 'textcat' not in nlp.pipe_names:
        textcat = nlp.create_pipe(
            'textcat',
            config={
                'exclusive_classes': True,
                'architecture': 'simple_cnn',
            }
        )
        nlp.add_pipe(textcat, last=True)
    # otherwise, get it, so we can add labels to it
    else:
        textcat = nlp.get_pipe('textcat')
    
        if model_links or model_pkgs:
        header = ('TYPE', 'NAME', 'MODEL', 'VERSION', '')
        rows = []
        for name, data in model_pkgs.items():
            rows.append(get_model_row(current_compat, name, data, msg))
        for name, data in model_links.items():
            rows.append(get_model_row(current_compat, name, data, msg, 'link'))
        msg.table(rows, header=header)
    else:
        msg.text('No models found in your current environment.', exits=0)
    if update_models:
        msg.divider('Install updates')
        msg.text('Use the following commands to update the model packages:')
        cmd = 'python -m spacy download {}'
        print('\n'.join([cmd.format(pkg) for pkg in update_models]) + '\n')
    if na_models:
        msg.text(
            'The following models are not available for spaCy '
            'v{}: {}'.format(about.__version__, ', '.join(na_models))
        )
    if incompat_links:
        msg.text(
            'You may also want to overwrite the incompatible links using the '
            '`python -m spacy link` command with `--force`, or remove them '
            'from the data directory. '
            'Data path: {path}'.format(path=path2str(get_data_path()))
        )
    if incompat_models or incompat_links:
        sys.exit(1)
    
    
def process(base, filename, db):
    root, ext = os.path.splitext(filename)
    if ext in ['.pyx', '.cpp']:
        if hash_changed(base, filename, db) or not os.path.isfile(
            os.path.join(base, root + '.cpp')
        ):
            preserve_cwd(base, process_pyx, root + '.pyx', root + '.cpp')
            hash_add(base, root + '.cpp', db)
            hash_add(base, root + '.pyx', db)
    
        else:
        norm_weights_b = layers.Lambda(normalizer(2))(att_weights)
        beta = layers.dot([norm_weights_b, b], axes=1)
        comp1 = layers.concatenate([a, beta])
        v1 = layers.TimeDistributed(G)(comp1)
        v1_sum = layers.Lambda(sum_word)(v1)
        concat = v1_sum
    
    
def read_gold_data(nlp, gold_loc):
    docs = []
    golds = []
    for json_obj in srsly.read_jsonl(gold_loc):
        doc = nlp.make_doc(json_obj['text'])
        ents = [(ent['start'], ent['end'], ent['label']) for ent in json_obj['spans']]
        gold = GoldParse(doc, entities=ents)
        docs.append(doc)
        golds.append(gold)
    return list(zip(docs, golds))