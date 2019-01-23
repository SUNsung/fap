
        
            def __init__(self, results):
        self.results = results
        self.next = next
    
    
class User(object):
    
        def steps(self):
        '''Run the map and reduce steps.'''
        return [
            self.mr(mapper=self.mapper,
                    reducer=self.reducer)
        ]
    
    
class QueryApi(object):
    
    
class HTTPBasicAuth(requests.auth.HTTPBasicAuth):
    
    
ENTRY_POINT_NAMES = [
    'httpie.plugins.auth.v1',
    'httpie.plugins.formatter.v1',
    'httpie.plugins.converter.v1',
    'httpie.plugins.transport.v1',
]
    
    
@pytest.mark.parametrize('argument_name', ['--auth-type', '-A'])
def test_digest_auth(httpbin_both, argument_name):
    r = http(argument_name + '=digest', '--auth=user:password',
             'GET', httpbin_both.url + '/digest-auth/auth/user/password')
    assert HTTP_OK in r
    assert r.json == {'authenticated': True, 'user': 'user'}
    
            def get_auth(self, username=None, password=None):
            assert self.raw_auth is None
            assert username is None
            assert password is None
            return basic_auth()
    
            Tests on MNIST show that Antirectifier allows to train networks
        with twice less parameters yet with comparable
        classification accuracy as an equivalent ReLU-based network.
    '''
    
        model = create_multi_input_model_from(dummy_model, dummy_model)
    model.compile(loss='categorical_crossentropy', optimizer='sgd')
    assert len(model.losses) == 6
    
        # Example
    
        To save the multi-gpu model, use `.save(fname)` or `.save_weights(fname)`
    with the template model (the argument you passed to `multi_gpu_model`),
    rather than the model returned by `multi_gpu_model`.
    '''
    if K.backend() != 'tensorflow':
        raise ValueError('`multi_gpu_model` is only available '
                         'with the TensorFlow backend.')
    
        print('Pickled records:')
    pprint.pprint(memos)
    
    # Create the base text message.
msg = EmailMessage()
msg['Subject'] = 'Ayons asperges pour le déjeuner'
msg['From'] = Address('Pepé Le Pew', 'pepe', 'example.com')
msg['To'] = (Address('Penelope Pussycat', 'penelope', 'example.com'),
             Address('Fabrette Pussycat', 'fabrette', 'example.com'))
msg.set_content('''\
Salut!
    
    # In a real program you'd get the filename from the arguments.
with open('outgoing.msg', 'rb') as fp:
    msg = BytesParser(policy=policy.default).parse(fp)
    
        counter = 1
    for part in msg.walk():
        # multipart/* are just containers
        if part.get_content_maintype() == 'multipart':
            continue
        # Applications should really sanitize the given filename so that an
        # email message can't be used to overwrite important files
        filename = part.get_filename()
        if not filename:
            ext = mimetypes.guess_extension(part.get_content_type())
            if not ext:
                # Use a generic bag-of-bits extension
                ext = '.bin'
            filename = 'part-%03d%s' % (counter, ext)
        counter += 1
        with open(os.path.join(args.directory, filename), 'wb') as fp:
            fp.write(part.get_payload(decode=True))
    
    cur.execute('insert into test(p) values (?)', (p,))
cur.execute('select p from test')
print('with declared types:', cur.fetchone()[0])
cur.close()
con.close()
    
        # macOS will crash due to a bug in libdispatch if you don't use 'forkserver'
    context = multiprocessing
    if 'forkserver' in multiprocessing.get_all_start_methods():
        context = multiprocessing.get_context('forkserver')
    
            # If you had more than 2 faces, you could make this logic a lot prettier
        # but I kept it simple for the demo
        name = None
        if match[0]:
            name = 'Lin-Manuel Miranda'
        elif match[1]:
            name = 'Alex Lacamoire'
    
    # Initialize some variables
face_locations = []
face_encodings = []
    
        # 讲识别结果以json键值对的数据结构输出
    result = {
        'face_found_in_image': face_found,
        'is_picture_of_obama': is_obama
    }
    return jsonify(result)
    
        return result