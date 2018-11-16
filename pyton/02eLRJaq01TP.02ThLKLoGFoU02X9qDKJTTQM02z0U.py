
        
                if not username:
            error = 'Username is required.'
        elif not password:
            error = 'Password is required.'
        elif db.execute(
            'SELECT id FROM user WHERE username = ?', (username,)
        ).fetchone() is not None:
            error = 'User {0} is already registered.'.format(username)
    
        assert 'closed' in str(e)
    
        iterkeys = lambda d: d.iterkeys()
    itervalues = lambda d: d.itervalues()
    iteritems = lambda d: d.iteritems()
    
        .. versionchanged:: 0.9
        `category_filter` parameter added.
    
    # You can now launch tensorboard with `tensorboard --logdir=./logs` on your
# command line and then go to http://localhost:6006/#projector to view the
# embeddings

    
        x_train = np.empty((num_train_samples, 3, 32, 32), dtype='uint8')
    y_train = np.empty((num_train_samples,), dtype='uint8')
    
    
def deserialize(config, custom_objects=None):
    return deserialize_keras_object(config,
                                    module_objects=globals(),
                                    custom_objects=custom_objects,
                                    printable_module_name='regularizer')
    
        model = create_multi_input_model_from(*models)
    model.compile(loss='categorical_crossentropy', optimizer='sgd')
    assert len(model.losses) == 8
    
        E.g. if your `batch_size` is 64 and you use `gpus=2`,
    then we will divide the input into 2 sub-batches of 32 samples,
    process each sub-batch on one GPU, then return the full
    batch of 64 processed samples.
    
        # And to the following:
    model = Sequential()
    model.add(Dense(32, batch_input_shape=(None, 500)))
    
        plt.imshow(toplot)
    ax = fig.add_subplot(122)
    plt.text(1, 3, 'Ground truth', fontsize=20)
    
    print('Loading data...')
(x_train, y_train), (x_test, y_test) = imdb.load_data(num_words=max_features)
print(len(x_train), 'train sequences')
print(len(x_test), 'test sequences')
    
    _help = '''Usage: {} [OPTION]... [URL]...
TODO
'''.format(script_name)
    
    def youku_acfun_proxy(vid, sign, ref):
    endpoint = 'http://player.acfun.cn/flash_data?vid={}&ct=85&ev=3&sign={}&time={}'
    url = endpoint.format(vid, sign, str(int(time.time() * 1000)))
    json_data = json.loads(get_content(url, headers=dict(referer=ref)))['data']
    enc_text = base64.b64decode(json_data)
    dec_text = rc4(b'8bdc7e1a', enc_text).decode('utf8')
    youku_json = json.loads(dec_text)
    
            for i in html_json['sources']:
            if 'src' in i:  #to avoid KeyError
                if i['src'].startswith('https'):
                    link_list.append((str(i['height']), i['src']))
    
            if self.tree.find('result').text != '1':
            log.wtf('API result says failed!')
            raise 
    
    
def makeKeyFiles(name, keySize):
    if os.path.exists('%s_pubkey.txt' % name) or os.path.exists('%s_privkey.txt' % name):
        print('\nWARNING:')
        print(''%s_pubkey.txt' or '%s_privkey.txt' already exists. \n'
              'Use a different name or delete these files and re-run this program.' %
              (name, name))
        sys.exit()
    
        def hash_function(self, key):
        return key % self.size_table
    
    The problem is  :
Given an ARRAY, to find the longest and increasing sub ARRAY in that given ARRAY and return it.
Example: [10, 22, 9, 33, 21, 50, 41, 60, 80] as input will return [10, 22, 33, 41, 60, 80] as output
'''
from __future__ import print_function
    
    Usage:
  1. define 'k' value, 'X' features array and 'hetrogeneity' empty list
  
  2. create initial_centroids,
        initial_centroids = get_initial_centroids(
            X, 
            k, 
            seed=0 # seed value for initial centroid generation, None for randomness(default=None)
            )
    
    
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
