
        
            assert proc.expect([TIMEOUT, u'usage'])
    
    
@pytest.mark.parametrize('script, output', [
    ('apt', invalid_operation('saerch')),
    ('apt-get', invalid_operation('isntall')),
    ('apt-cache', invalid_operation('rumove'))])
def test_match(script, output):
    assert match(Command(script, output))
    
            Did you mean `build`?
'''
    
    ANSIBLE_METADATA = {'metadata_version': '1.1',
                    'status': ['preview'],
                    'supported_by': 'community'}
    
    ANSIBLE_METADATA = {'metadata_version': '1.1',
                    'status': ['preview'],
                    'supported_by': 'community'}
    
    - heroku_collaborator:
    api_key: YOUR_API_KEY
    user: '{{ item.user }}'
    apps: '{{ item.apps | default(apps) }}'
    suppress_invitation: '{{ item.suppress_invitation | default(suppress_invitation) }}'
    state: '{{ item.state | default('present') }}'
  with_items:
    - { user: 'a.b@example.com' }
    - { state: 'absent', user: 'b.c@example.com', suppress_invitation: false }
    - { user: 'x.y@example.com', apps: ['heroku-example-app'] }
'''
    
            argument_spec = dict(
            name=dict(type='str', required=True),
            state=dict(choices=['present', 'absent', 'enabled', 'disabled', 'offline'], default='present'),
            im_mad_name=dict(type='str', default='kvm'),
            vmm_mad_name=dict(type='str', default='kvm'),
            cluster_id=dict(type='int', default=0),
            cluster_name=dict(type='str'),
            labels=dict(type='list'),
            template=dict(type='dict', aliases=['attributes']),
        )
    
        return module.exit_json(**result)
    
    from __future__ import absolute_import, division, print_function
__metaclass__ = type
    
    def main():
    
        def test_include_single_quotes(self):
        self.verify_fnmatch(''' + self.config_path + ''')
    
        for trials in range(5):
        a = random.randrange(2, num - 1)
        v = pow(a, s, num)
        if v != 1:
            i = 0
            while v != (num - 1):
                if i == t - 1:
                    return False
                else:
                    i = i + 1
                    v = (v ** 2) % num
    return True
    
        publicKey, privateKey = generateKey(keySize)
    print('\nWriting public key to file %s_pubkey.txt...' % name)
    with open('%s_pubkey.txt' % name, 'w') as fo:
        fo.write('%s,%s,%s' % (keySize, publicKey[0], publicKey[1]))
    
    
class DoubleHash(HashTable):
    '''
        Hash Table example with open addressing and Double Hash
    '''
    def __init__(self, *args, **kwargs):
        super().__init__(*args, **kwargs)
    
    try:
	xrange		#Python 2
except NameError:
	xrange = range	#Python 3
    
    	Arguments:
		i {[int]} -- [integer]
	'''
    
    # Mock test below
if False: # change to true to run this test case.
    import sklearn.datasets as ds
    dataset = ds.load_iris()
    k = 3
    heterogeneity = []
    initial_centroids = get_initial_centroids(dataset['data'], k, seed=0)
    centroids, cluster_assignment = kmeans(dataset['data'], k, initial_centroids, maxiter=400,
                                        record_heterogeneity=heterogeneity, verbose=True)
    plot_heterogeneity(heterogeneity, k)

    
    # frequency taken from http://en.wikipedia.org/wiki/Letter_frequency
englishLetterFreq = {'E': 12.70, 'T': 9.06, 'A': 8.17, 'O': 7.51, 'I': 6.97,
                     'N': 6.75, 'S': 6.33, 'H': 6.09, 'R': 5.99, 'D': 4.25,
                     'L': 4.03, 'C': 2.78, 'U': 2.76, 'M': 2.41, 'W': 2.36,
                     'F': 2.23, 'G': 2.02, 'Y': 1.97, 'P': 1.93, 'B': 1.29,
                     'V': 0.98, 'K': 0.77, 'J': 0.15, 'X': 0.15, 'Q': 0.10,
                     'Z': 0.07}
ETAOIN = 'ETAOINSHRDLCUMWFGYPBVKJXQZ'
LETTERS = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'
    
        if not app.config.edit_on_github_project:
        warnings.warn('edit_on_github_project not specified')
        return
    if not doctree:
        warnings.warn('doctree is None')
        return
    path = os.path.relpath(doctree.get('source'), app.builder.srcdir)
    show_url = get_github_url(app, 'blob', path)
    edit_url = get_github_url(app, 'edit', path)
    
    # The name of an image file (relative to this directory) to use as a favicon of
# the docs.
# This file should be a Windows icon file (.ico) being 16x16 or 32x32
# pixels large.
#
html_favicon = '_static/favicon.ico'
    
        def _queued_event_check(self, click_type, time_diff):
        '''Generate a log message and returns true if timeout exceeded.'''
        time_string = '{:d} {}'.format(
            time_diff, 'second' if time_diff == 1 else 'seconds')
    
    CONFIG_SCHEMA = vol.Schema({
    DOMAIN: vol.Schema({
        vol.Required(CONF_HOST, default=DEFAULT_HOST): cv.string,
        vol.Optional(CONF_PORT, default=DEFAULT_PORT): cv.port,
        vol.Optional(CONF_PREFIX, default=DEFAULT_PREFIX): cv.string,
        vol.Optional(CONF_RATE, default=DEFAULT_RATE):
            vol.All(vol.Coerce(int), vol.Range(min=1)),
    }),
}, extra=vol.ALLOW_EXTRA)
    
    PLATFORM_SCHEMA = PLATFORM_SCHEMA.extend({
    vol.Required(CONF_HOST): cv.string,
    vol.Required(CONF_USERNAME): cv.string,
    vol.Required(CONF_PASSWORD): cv.string,
    vol.Optional(CONF_TYPE, default=DEFAULT_TYPE): cv.string,
})
    
    DEFAULT_IP = '192.168.1.1'
    
        def send_url_service(service):
        '''Service to open url on devices.'''
        send_url(api_key=api_key, device_id=device_id,
                 device_ids=device_ids, device_names=device_names,
                 url=service.data.get('url'))
    
    REQUIREMENTS = ['pykira==0.1.1']
    
        def run(self):
        '''Run the loop of the LIRC interface thread.'''
        import lirc
        _LOGGER.debug('LIRC interface thread started')
        while not self.stopped.isSet():
            try:
                code = lirc.nextcode()  # list; empty if no buttons pressed
            except lirc.NextCodeError:
                _LOGGER.warning('Error reading next code from LIRC')
                code = None
            # interpret result from python-lirc
            if code:
                code = code[0]
                _LOGGER.info('Got new LIRC code %s', code)
                self.hass.bus.fire(
                    EVENT_IR_COMMAND_RECEIVED, {BUTTON_NAME: code})
            else:
                time.sleep(0.2)
        lirc.deinit()
        _LOGGER.debug('LIRC interface thread stopped')

    
    
def datasets():
    '''Retrieve the list of available dataset names.'''
    return _DATASETS.keys()
    
        # Histogram of ground-truth objects
    gt_hist = np.zeros((len(classes)), dtype=np.int)
    for entry in roidb:
        gt_inds = np.where(
            (entry['gt_classes'] > 0) & (entry['is_crowd'] == 0))[0]
        gt_classes = entry['gt_classes'][gt_inds]
        gt_hist += np.histogram(gt_classes, bins=hist_bins)[0]
    logger.debug('Ground-truth class histogram:')
    for i, v in enumerate(gt_hist):
        logger.debug(
            '{:d}{:s}: {:d}'.format(
                i, classes[i].rjust(char_len), v))
    logger.debug('-' * char_len)
    logger.debug(
        '{:s}: {:d}'.format(
            'total'.rjust(char_len), np.sum(gt_hist)))

    
    
def _do_matlab_eval(json_dataset, salt, output_dir='output'):
    import subprocess
    logger.info('-----------------------------------------------------')
    logger.info('Computing results with the official MATLAB eval code.')
    logger.info('-----------------------------------------------------')
    info = voc_info(json_dataset)
    path = os.path.join(
        cfg.ROOT_DIR, 'detectron', 'datasets', 'VOCdevkit-matlab-wrapper')
    cmd = 'cd {} && '.format(path)
    cmd += '{:s} -nodisplay -nodesktop '.format(cfg.MATLAB)
    cmd += '-r 'dbstop if error; '
    cmd += 'voc_eval(\'{:s}\',\'{:s}\',\'{:s}\',\'{:s}\'); quit;'' \
       .format(info['devkit_path'], 'comp4' + salt, info['image_set'],
               output_dir)
    logger.info('Running:\n{}'.format(cmd))
    subprocess.call(cmd, shell=True)
    
            If used during training, then the output blobs will also include:
          [labels, bbox_targets, bbox_inside_weights, bbox_outside_weights].
        '''
        k_max = cfg.FPN.RPN_MAX_LEVEL
        k_min = cfg.FPN.RPN_MIN_LEVEL