
def hex_str(int_list):
    return codecs.encode(intlist_to_bytes(int_list), 'hex')
    
    import json
import sys
import hashlib
import os.path
    
    print('Enter the PKCS1 private key, followed by a blank line:')
privkey = b''
while True:
    try:
        line = input()
    except EOFError:
        break
    if line == '':
        break
    privkey += line.encode('ascii') + b'\n'
privkey = rsa.PrivateKey.load_pkcs1(privkey)
    
    versions_info = json.load(open('update/versions.json'))
versions = list(versions_info['versions'].keys())
versions.sort()
    
    
if __name__ == '__main__':
    main()

    
    import io
import optparse
    
    
def main():
    parser = optparse.OptionParser(usage='%prog OUTFILE.md')
    options, args = parser.parse_args()
    if len(args) != 1:
        parser.error('Expected an output filename')
    
    
total_bytes = 0
    
    
parser = youtube_dl.parseOpts()[0]
build_completion(parser)

    
        def test_vimeo_matching(self):
        self.assertMatch('https://vimeo.com/channels/tributes', ['vimeo:channel'])
        self.assertMatch('https://vimeo.com/channels/31259', ['vimeo:channel'])
        self.assertMatch('https://vimeo.com/channels/31259/53576664', ['vimeo'])
        self.assertMatch('https://vimeo.com/user7108434', ['vimeo:user'])
        self.assertMatch('https://vimeo.com/user7108434/videos', ['vimeo:user'])
        self.assertMatch('https://vimeo.com/user21297594/review/75524534/3c257a1b5d', ['vimeo:review'])
    
    # Allow direct execution
import os
import sys
import unittest
sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
    
    
def test_on_first_run_from_current_shell(usage_tracker_io, shell_pid,
                                         shell, logs):
    shell.get_history.return_value = ['fuck']
    shell_pid.return_value = 12
    main()
    _assert_tracker_updated(usage_tracker_io, 12)
    logs.how_to_configure_alias.assert_called_once()
    
    
init_bashrc = u'''echo '
export SHELL=/bin/bash
export PS1='$ '
echo > $HISTFILE
eval $(thefuck --alias {})
echo 'instant mode ready: $THEFUCK_INSTANT_MODE'
' > ~/.bashrc'''
    
    
python_3 = ('thefuck/python3-zsh',
            u'''FROM python:3
                RUN apt-get update
                RUN apt-get install -yy zsh''',
            u'sh')
    
    
@pytest.mark.parametrize('command, packages', [
    (Command('vim', 'vim: command not found'),
     [('vim', 'main'), ('vim-tiny', 'main')]),
    (Command('sudo vim', 'vim: command not found'),
     [('vim', 'main'), ('vim-tiny', 'main')]),
    (Command('vim', 'The program 'vim' is currently not installed. You can install it by typing: sudo apt install vim'),
     [('vim', 'main'), ('vim-tiny', 'main')])])
def test_match(mocker, command, packages):
    mocker.patch('thefuck.rules.apt_get.which', return_value=None)
    mocker.patch('thefuck.rules.apt_get._get_packages',
                 create=True, return_value=packages)
    
    
@pytest.mark.parametrize('script, output', [
    ('vim', invalid_operation('vim')),
    ('apt-get', '')])
def test_not_match(script, output):
    assert not match(Command(script, output))
    
    match_output = '''
Hit:1 http://us.archive.ubuntu.com/ubuntu zesty InRelease
Hit:2 http://us.archive.ubuntu.com/ubuntu zesty-updates InRelease
Get:3 http://us.archive.ubuntu.com/ubuntu zesty-backports InRelease [89.2 kB]
Hit:4 http://security.ubuntu.com/ubuntu zesty-security InRelease
Hit:5 http://ppa.launchpad.net/ubuntu-mozilla-daily/ppa/ubuntu zesty InRelease
Hit:6 https://download.docker.com/linux/ubuntu zesty InRelease
Hit:7 https://cli-assets.heroku.com/branches/stable/apt ./ InRelease
Fetched 89.2 kB in 0s (122 kB/s)
Reading package lists... Done
Building dependency tree
Reading state information... Done
8 packages can be upgraded. Run 'apt list --upgradable' to see them.
'''
    
    
@pytest.fixture
def brew_no_available_formula():
    return '''Error: No available formula for elsticsearch '''
    
        outputs1 = Lambda(lambda x: utils.preprocess_input(x, 'channels_last'),
                      output_shape=x.shape)(inputs)
    model1 = Model(inputs, outputs1)
    out1 = model1.predict(x[np.newaxis])[0]
    x2 = np.transpose(x, (2, 0, 1))
    inputs2 = Input(shape=x2.shape)
    outputs2 = Lambda(lambda x: utils.preprocess_input(x, 'channels_first'),
                      output_shape=x2.shape)(inputs2)
    model2 = Model(inputs2, outputs2)
    out2 = model2.predict(x2[np.newaxis])[0]
    assert_allclose(out1, out2.transpose(1, 2, 0))
    
        # Returns
        A binary matrix representation of the input. The classes axis
        is placed last.
    
            # Instantiate the base model (or 'template' model).
        # We recommend doing this with under a CPU device scope,
        # so that the model's weights are hosted on CPU memory.
        # Otherwise they may end up hosted on a GPU, which would
        # complicate weight sharing.
        with tf.device('/cpu:0'):
            model = Xception(weights=None,
                             input_shape=(height, width, 3),
                             classes=num_classes)
    
    
for seq_index in range(100):
    # Take one sequence (part of the training set)
    # for trying out decoding.
    input_seq = encoder_input_data[seq_index: seq_index + 1]
    decoded_sentence = decode_sequence(input_seq)
    print('-')
    print('Input sentence:', input_texts[seq_index])
    print('Decoded sentence:', decoded_sentence)

    
        module.exit_json(**facts_result)
    
    
def main():
    module = AnsibleModule(argument_spec=dict(
        view=dict(choices=['topics', 'subscriptions'], default='topics'),
        topic=dict(required=False),
        state=dict(choices=['list'], default='list'),
        service_account_email=dict(),
        credentials_file=dict(),
        project_id=dict(), ),)
    
    try:
    import oneandone.client
except ImportError:
    HAS_ONEANDONE_SDK = False
    
            '''
        return self.wait_for_state('host',
                                   lambda: self.one.host.info(host.ID).STATE,
                                   lambda s: HOST_STATES(s).name, target_states,
                                   invalid_states=[HOST_STATES.ERROR, HOST_STATES.MONITORING_ERROR])
    
    
VALID_PROTO = ['Tcp', 'Udp', 'Icmp', 'Other', 'Any']
VALID_RULE_KEYS = ['policy', 'is_enable', 'enable_logging', 'description',
                   'dest_ip', 'dest_port', 'source_ip', 'source_port',
                   'protocol']
    
        module = AnsibleModule(
        argument_spec=dict(
            schema=dict(required=True, aliases=['name']),
            usage_roles=dict(default=None, aliases=['usage_role']),
            create_roles=dict(default=None, aliases=['create_role']),
            owner=dict(default=None),
            state=dict(default='present', choices=['absent', 'present']),
            db=dict(default=None),
            cluster=dict(default='localhost'),
            port=dict(default='5433'),
            login_user=dict(default='dbadmin'),
            login_password=dict(default=None, no_log=True),
        ), supports_check_mode=True)
    
    # Create groups like 'virt_kvm_host'
- group_by:
    key: virt_{{ ansible_virtualization_type }}_{{ ansible_virtualization_role }}
    
        Returns
    -------
    array of floats shaped like (metrics, formats, samples, classes, density)
        Time in seconds.
    '''
    metrics = np.atleast_1d(metrics)
    samples = np.atleast_1d(samples)
    classes = np.atleast_1d(classes)
    density = np.atleast_1d(density)
    formats = np.atleast_1d(formats)
    out = np.zeros((len(metrics), len(formats), len(samples), len(classes),
                    len(density)), dtype=float)
    it = itertools.product(samples, classes, density)
    for i, (s, c, d) in enumerate(it):
        _, y_true = make_multilabel_classification(n_samples=s, n_features=1,
                                                   n_classes=c, n_labels=d * c,
                                                   random_state=42)
        _, y_pred = make_multilabel_classification(n_samples=s, n_features=1,
                                                   n_classes=c, n_labels=d * c,
                                                   random_state=84)
        for j, f in enumerate(formats):
            f_true = f(y_true)
            f_pred = f(y_pred)
            for k, metric in enumerate(metrics):
                t = timeit(partial(metric, f_true, f_pred), number=n_times)
    
    Line #      Hits         Time  Per Hit   % Time  Line Contents
==============================================================
    51                                           @profile
    52                                           def benchmark_dense_predict():
    53       301          640      2.1      0.1      for _ in range(300):
    54       300       532339   1774.5     99.9          clf.predict(X_test)
    
    for s, p in zip(sentences, predicted):
    print(u'The language of '%s' is '%s'' % (s, dataset.target_names[p]))

    
    import time
import numpy as np
import matplotlib.pyplot as plt
from mpl_toolkits.axes_grid1.parasite_axes import host_subplot
from mpl_toolkits.axisartist.axislines import Axes
from scipy.sparse.csr import csr_matrix
    
    legend1_values_list = list(legend1.values())
legend1_keys_list = list(legend1.keys())
    
    
def get_github_url(app, view, path):
    github_fmt = 'https://github.com/{}/{}/{}/{}{}'
    return (
        github_fmt.format(app.config.edit_on_github_project, view,
                          app.config.edit_on_github_branch,
                          app.config.edit_on_github_src_path, path))
    
        def __init__(self, hass, flash_briefings):
        '''Initialize Alexa view.'''
        super().__init__()
        self.flash_briefings = copy.deepcopy(flash_briefings)
        template.attach(hass, self.flash_briefings)
    
        def get_actiontec_data(self):
        '''Retrieve data from Actiontec MI424WR and return parsed result.'''
        try:
            telnet = telnetlib.Telnet(self.host)
            telnet.read_until(b'Username: ')
            telnet.write((self.username + '\n').encode('ascii'))
            telnet.read_until(b'Password: ')
            telnet.write((self.password + '\n').encode('ascii'))
            prompt = telnet.read_until(
                b'Wireless Broadband Router> ').split(b'\n')[-1]
            telnet.write('firewall mac_cache_dump\n'.encode('ascii'))
            telnet.write('\n'.encode('ascii'))
            telnet.read_until(prompt)
            leases_result = telnet.read_until(prompt).split(b'\n')[1:-1]
            telnet.write('exit\n'.encode('ascii'))
        except EOFError:
            _LOGGER.exception('Unexpected response from router')
            return
        except ConnectionRefusedError:
            _LOGGER.exception('Connection refused by router. Telnet enabled?')
            return None
    
        def observe(call=None):
        '''Observe three entities.'''
        random_see('demo_paulus', 'Paulus')
        random_see('demo_anne_therese', 'Anne Therese')
    
        def get_thomson_data(self):
        '''Retrieve data from THOMSON and return parsed result.'''
        try:
            telnet = telnetlib.Telnet(self.host)
            telnet.read_until(b'Username : ')
            telnet.write((self.username + '\r\n').encode('ascii'))
            telnet.read_until(b'Password : ')
            telnet.write((self.password + '\r\n').encode('ascii'))
            telnet.read_until(b'=>')
            telnet.write(('hostmgr list\r\n').encode('ascii'))
            devices_result = telnet.read_until(b'=>').split(b'\r\n')
            telnet.write('exit\r\n'.encode('ascii'))
        except EOFError:
            _LOGGER.exception('Unexpected response from router')
            return
        except ConnectionRefusedError:
            _LOGGER.exception(
                'Connection refused by router. Telnet enabled?')
            return
    
    ATTR_FILENAME = 'filename'
ATTR_SUBDIR = 'subdir'
ATTR_URL = 'url'
ATTR_OVERWRITE = 'overwrite'
    
                try:
                payload_dict[entity_id] = state_helper.state_as_number(state)
            except ValueError:
                continue
    
        return publicKey, privateKey
    
    def makeKeyFiles(name, keySize):
    if os.path.exists('%s_pubkey.txt' % (name)) or os.path.exists('%s_privkey.txt' % (name)):
        print('\nWARNING:')
        print(''%s_pubkey.txt' or '%s_privkey.txt' already exists. \nUse a different name or delete these files and re-run this program.' % (name, name))
        sys.exit()
    
                if new_key is None:
                break
    
    def kmeans(data, k, initial_centroids, maxiter=500, record_heterogeneity=None, verbose=False):
    '''This function runs k-means on given data and initial set of centroids.
       maxiter: maximum number of iterations to run.(default=500)
       record_heterogeneity: (optional) a list, to store the history of heterogeneity as function of iterations
                             if None, do not store the history.
       verbose: if True, print how many data points changed their cluster labels in each iteration'''
    centroids = initial_centroids[:]
    prev_cluster_assignment = None
    
    for itr in range(maxiter):        
        if verbose:
            print(itr, end='')
        
        # 1. Make cluster assignments using nearest centroids
        cluster_assignment = assign_clusters(data,centroids)
            
        # 2. Compute a new centroid for each of the k clusters, averaging all data points assigned to that cluster.
        centroids = revise_centroids(data,k, cluster_assignment)
            
        # Check for convergence: if none of the assignments changed, stop
        if prev_cluster_assignment is not None and \
          (prev_cluster_assignment==cluster_assignment).all():
            break
        
        # Print number of new assignments 
        if prev_cluster_assignment is not None:
            num_changed = np.sum(prev_cluster_assignment!=cluster_assignment)
            if verbose:
                print('    {0:5d} elements changed their cluster assignment.'.format(num_changed))   
        
        # Record heterogeneity convergence metric
        if record_heterogeneity is not None:
            # YOUR CODE HERE
            score = compute_heterogeneity(data,k,centroids,cluster_assignment)
            record_heterogeneity.append(score)
        
        prev_cluster_assignment = cluster_assignment[:]
        
    return centroids, cluster_assignment
    
    
if __name__ == '__main__':