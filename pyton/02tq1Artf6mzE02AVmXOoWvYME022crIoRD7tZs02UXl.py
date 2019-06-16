
        
            # Cumulative Discounted Returns.  The true value function V*(s).
    cumulative_rewards = []
    for t in xrange(FLAGS.sequence_length):
      cum_value = tf.zeros(shape=[FLAGS.batch_size / 2])
      for s in xrange(t, FLAGS.sequence_length):
        cum_value += reward_missing_list[s] * np.power(gamma, (
            s - t)) * rewards_list[s]
      cumulative_rewards.append(cum_value)
    cumulative_rewards = tf.stack(cumulative_rewards, axis=1)
    
      return init_savers
    
    
def dis_bwd_bidirectional(hparams):
  '''Returns the *backward* PTB Variable name to MaskGAN Variable dictionary
  mapping.  This is a highly restrictive function just for testing. This is for
  the bidirectional_zaremba discriminator.
    
    
@functools.lru_cache()
def get_hstore_oids(connection_alias):
    '''Return hstore and hstore array OIDs.'''
    with connections[connection_alias].cursor() as cursor:
        cursor.execute(
            'SELECT t.oid, typarray '
            'FROM pg_type t '
            'JOIN pg_namespace ns ON typnamespace = ns.oid '
            'WHERE typname = 'hstore''
        )
        oids = []
        array_oids = []
        for row in cursor:
            oids.append(row[0])
            array_oids.append(row[1])
        return tuple(oids), tuple(array_oids)
    
    
class RangeMaxValueValidator(MaxValueValidator):
    def compare(self, a, b):
        return a.upper is None or a.upper > b
    message = _('Ensure that this range is completely less than or equal to %(limit_value)s.')
    
    
@x_robots_tag
def index(request, sitemaps,
          template_name='sitemap_index.xml', content_type='application/xml',
          sitemap_url_name='django.contrib.sitemaps.views.sitemap'):
    
    
class TemplatesSetting(BaseRenderer):
    '''
    Load templates using template.loader.get_template() which is configured
    based on settings.TEMPLATES.
    '''
    def get_template(self, template_name):
        return get_template(template_name)

    
    from os import makedirs
from os.path import exists, join
    
        with gzip.open(paths[2], 'rb') as lbpath:
        y_test = np.frombuffer(lbpath.read(), np.uint8, offset=8)
    
        def __call__(self, x):
        regularization = 0.
        if self.l1:
            regularization += K.sum(self.l1 * K.abs(x))
        if self.l2:
            regularization += K.sum(self.l2 * K.square(x))
        return regularization
    
    
def test_cce_one_hot():
    y_a = K.variable(np.random.randint(0, 7, (5, 6)))
    y_b = K.variable(np.random.random((5, 6, 7)))
    objective_output = losses.sparse_categorical_crossentropy(y_a, y_b)
    assert K.eval(objective_output).shape == (5, 6)
    
    # Display the 1st 8 corrupted and denoised images
rows, cols = 10, 30
num = rows * cols
imgs = np.concatenate([x_test[:num], x_test_noisy[:num], x_decoded[:num]])
imgs = imgs.reshape((rows * 3, cols, image_size, image_size))
imgs = np.vstack(np.split(imgs, rows, axis=1))
imgs = imgs.reshape((rows * 3, -1, image_size, image_size))
imgs = np.vstack([np.hstack(i) for i in imgs])
imgs = (imgs * 255).astype(np.uint8)
plt.figure()
plt.axis('off')
plt.title('Original images: top rows, '
          'Corrupted Input: middle rows, '
          'Denoised Input:  third rows')
plt.imshow(imgs, interpolation='none', cmap='gray')
Image.fromarray(imgs).save('corrupted_and_denoised.png')
plt.show()

    
        def format_body(self, content, mime):
        if is_valid_mime(mime):
            for p in self.enabled_plugins:
                content = p.format_body(content, mime)
        return content

    
        def test_print_only_body_when_stdout_redirected_by_default(self, httpbin):
        env = MockEnvironment(stdin_isatty=True, stdout_isatty=False)
        r = http('GET', httpbin.url + '/get', env=env)
        assert 'HTTP/' not in r
    
    
def test_follow_all_redirects_shown(httpbin):
    r = http('--follow', '--all', httpbin.url + '/redirect/2')
    assert r.count('HTTP/1.1') == 3
    assert r.count('HTTP/1.1 302 FOUND', 2)
    assert HTTP_OK in r
    
    
def get_filename_max_length(directory):
    max_len = 255
    try:
        pathconf = os.pathconf
    except AttributeError:
        pass  # non-posix
    else:
        try:
            max_len = pathconf(directory, 'PC_NAME_MAX')
        except OSError as e:
            if e.errno != errno.EINVAL:
                raise
    return max_len
    
    
if __name__ == '__main__':
    unittest.main()  # pragma: no cover

    
    import mock
    
    The path to this file can be provided interactively or using the
``--dns-cloudflare-credentials`` command-line argument. Certbot records the path
to this file for use during renewal, but does not store the file's contents.
    
       certbot certonly \\
     --dns-digitalocean \\
     --dns-digitalocean-credentials ~/.secrets/certbot/digitalocean.ini \\
     --dns-digitalocean-propagation-seconds 60 \\
     -d example.com
    
            loader = unittest.TestLoader()
        try:
            loader.loadTestsFromName('testcase_1', m)
        except TypeError:
            pass
        else:
            self.fail('Should have raised TypeError')
    
    About = help_about.AboutDialog
    
        def persistent_id(self, obj):
        # Instead of pickling MemoRecord as a regular class instance, we emit a
        # persistent ID.
        if isinstance(obj, MemoRecord):
            # Here, our persistent ID is simply a tuple, containing a tag and a
            # key, which refers to a specific record in the database.
            return ('MemoRecord', obj.key)
        else:
            # If obj does not have a persistent ID, return None. This means obj
            # needs to be pickled as usual.
            return None
    
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
    
    # If we want to print a preview of the message content, we can extract whatever
# the least formatted payload is and print the first three lines.  Of course,
# if the message has no plain text part printing the first three lines of html
# is probably useless, but this is just a conceptual example.
simplest = msg.get_body(preferencelist=('plain', 'html'))
print()
print(''.join(simplest.get_content().splitlines(keepends=True)[:3]))
    
    def plus(a, b):
    time.sleep(0.5 * random.random())
    return a + b
    
    
class TestData(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.dec_obs = DecimalViewer()
        cls.hex_obs = HexViewer()
        cls.sub = Data('Data')
        # inherited behavior already tested with TestSubject
        cls.sub.attach(cls.dec_obs)
        cls.sub.attach(cls.hex_obs)
    
        def test_subscriber_shall_be_detachable_from_subscriptions(cls):
        subscription = 'sub msg'
        pro = Provider()
        sub = Subscriber('sub name', pro)
        sub.subscribe(subscription)
        cls.assertEqual(len(pro.subscribers[subscription]), 1)
        sub.unsubscribe(subscription)
        cls.assertEqual(len(pro.subscribers[subscription]), 0)
    
        def test_innate_properties(self):
        self.assertDictEqual({'name': 'John', 'occupation': 'Coder', 'call_count2': 0}, self.John.__dict__)
    
    
def midnight_time_provider():
    '''Hard-coded stub'''
    return '24:01'
    
    
class Blackboard(object):
    def __init__(self):
        self.experts = []
        self.common_state = {
            'problems': 0,
            'suggestions': 0,
            'contributions': [],
            'progress': 0,  # percentage, if 100 -> task is finished
        }