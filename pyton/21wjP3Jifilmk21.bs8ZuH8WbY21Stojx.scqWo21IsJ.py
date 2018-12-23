
        
          @property
  def output_size(self):
    return self._num_units
    
    
def all_plot(d, full_name='', exclude='', nspaces=0):
  '''Recursively plot all the LFADS model parameters in the nested
  dictionary.'''
  for k, v in d.iteritems():
    this_name = full_name+'/'+k
    if isinstance(v, dict):
      all_plot(v, full_name=this_name, exclude=exclude, nspaces=nspaces+4)
    else:
      if exclude == '' or exclude not in this_name:
        _plot_item(v, name=k, full_name=full_name+'/'+k, nspaces=nspaces+4)
    
    flags = tf.app.flags
flags.DEFINE_string('save_dir', '/tmp/' + DATA_DIR + '/',
                    'Directory for saving data.')
flags.DEFINE_string('datafile_name', 'thits_data',
                    'Name of data file for input case.')
flags.DEFINE_string('noise_type', 'poisson', 'Noise type for data.')
flags.DEFINE_integer('synth_data_seed', 5, 'Random seed for RNN generation.')
flags.DEFINE_float('T', 1.0, 'Time in seconds to generate.')
flags.DEFINE_integer('C', 100, 'Number of conditions')
flags.DEFINE_integer('N', 50, 'Number of units for the RNN')
flags.DEFINE_integer('S', 50, 'Number of sampled units from RNN')
flags.DEFINE_integer('npcs', 10, 'Number of PCS for multi-session case.')
flags.DEFINE_float('train_percentage', 4.0/5.0,
                   'Percentage of train vs validation trials')
flags.DEFINE_integer('nreplications', 40,
                     'Number of noise replications of the same underlying rates.')
flags.DEFINE_float('g', 1.5, 'Complexity of dynamics')
flags.DEFINE_float('x0_std', 1.0,
                   'Volume from which to pull initial conditions (affects diversity of dynamics.')
flags.DEFINE_float('tau', 0.025, 'Time constant of RNN')
flags.DEFINE_float('dt', 0.010, 'Time bin')
flags.DEFINE_float('input_magnitude', 20.0,
                   'For the input case, what is the value of the input?')
flags.DEFINE_float('max_firing_rate', 30.0, 'Map 1.0 of RNN to a spikes per second')
FLAGS = flags.FLAGS
    
        for i in range(batch_size):
      cur_pos = 0
    
    
def imdb_iterator(raw_data, batch_size, num_steps, epoch_size_override=None):
  '''Iterate on the raw IMDB data.
    
    from __future__ import absolute_import
from __future__ import division
from __future__ import print_function
    
    
def retrieve_init_savers(hparams):
  '''Retrieve a dictionary of all the initial savers for the models.
    
    
def find_all_ngrams(dataset, n):
  '''Generate a list of all ngrams.'''
  return zip(*[dataset[i:] for i in xrange(n)])
    
        :param str u_string: unicode string to check. Must be unicode
        and not Python 2 `str`.
    :rtype: bool
    '''
    assert isinstance(u_string, str)
    try:
        u_string.encode('ascii')
        return True
    except UnicodeEncodeError:
        return False

    
        @pytest.mark.parametrize(
        'other, result', (
            ({'AccePT': 'application/json'}, True),
            ({}, False),
            (None, False)
        )
    )
    def test_instance_equality(self, other, result):
        assert (self.case_insensitive_dict == other) is result
    
                if self.wait_to_close_event:
                self.wait_to_close_event.wait(self.WAIT_EVENT_TIMEOUT)
        finally:
            self.ready_event.set() # just in case of exception
            self._close_server_sock_ignore_errors()
            self.stop_event.set()
    
        def request_url(self, request, proxies):
        '''Obtain the url to use when making the final request.
    
    CONTENT_TYPE_FORM_URLENCODED = 'application/x-www-form-urlencoded'
CONTENT_TYPE_MULTI_PART = 'multipart/form-data'
    
        def list_domains(self):
        '''Utility method to list all the domains in the jar.'''
        domains = []
        for cookie in iter(self):
            if cookie.domain not in domains:
                domains.append(cookie.domain)
        return domains
    
            # Verify the client didn't respond to second challenge.
        request_content = consume_socket_content(sock, timeout=0.5)
        assert request_content == b''
    
            def handler(sock):
            text = sock.recv(1000)
            assert text == question
            sock.sendall(answer)
    
    
RETURN = '''
addresses:
  description: Properties of all Elastic IP addresses matching the provided filters. Each element is a dict with all the information related to an EIP.
  returned: on success
  type: list
  sample: [{
        'allocation_id': 'eipalloc-64de1b01',
        'association_id': 'eipassoc-0fe9ce90d6e983e97',
        'domain': 'vpc',
        'instance_id': 'i-01020cfeb25b0c84f',
        'network_interface_id': 'eni-02fdeadfd4beef9323b',
        'network_interface_owner_id': '0123456789',
        'private_ip_address': '10.0.0.1',
        'public_ip': '54.81.104.1',
        'tags': {
            'Name': 'test-vm-54.81.104.1'
        }
    }]
    
    EXAMPLES = '''
---
# Simple example of listing all info for a function
- name: List all for a specific function
  lambda_facts:
    query: all
    function_name: myFunction
  register: my_function_details
# List all versions of a function
- name: List function versions
  lambda_facts:
    query: versions
    function_name: myFunction
  register: my_function_versions
# List all lambda function versions
- name: List all function
  lambda_facts:
    query: all
    max_items: 20
- name: show Lambda facts
  debug:
    var: lambda_facts
'''
    
    
if __name__ == '__main__':
    main()

    
                # the cluster
            if host.CLUSTER_ID != self.get_parameter('cluster_id'):
                if one.cluster.addhost(self.get_parameter('cluster_id'), host.ID):
                    result['changed'] = True
                else:
                    self.fail(msg='failed to update the host cluster')
    
    from ansible.module_utils.basic import AnsibleModule
from ansible.module_utils.vca import VcaError, vca_argument_spec, vca_login
    
        def dnszone_find(self, zone_name):
        return self._post_json(
            method='dnszone_find',
            name=zone_name,
            item={'idnsname': zone_name}
        )
    
        if module.params['environment']:
        params['deploy[environment]'] = module.params['environment']
    
    from __future__ import absolute_import, division, print_function
__metaclass__ = type
    
    
DOCUMENTATION = '''
---
module: monit
short_description: Manage the state of a program monitored via Monit
description:
     - Manage the state of a program monitored via I(Monit)
version_added: '1.2'
options:
  name:
    description:
      - The name of the I(monit) program/process to manage
    required: true
  state:
    description:
      - The state of service
    required: true
    choices: [ 'present', 'started', 'stopped', 'restarted', 'monitored', 'unmonitored', 'reloaded' ]
  timeout:
    description:
      - If there are pending actions for the service monitored by monit, then Ansible will check
        for up to this many seconds to verify the requested action has been performed.
        Ansible will sleep for five seconds between each check.
    default: 300
    version_added: '2.1'
author: 'Darryl Stoflet (@dstoflet)'
'''
    
        def process_appid_not_exist(self, appid, ip):
        ret = self.check_api(ip, 'xxnet-1')
        if ret and ret.ok:
            self.set_appid_not_exist(appid)
        else:
            self.logger.warn('process_appid_not_exist, remove ip:%s', ip)
    
    EOF = -1
    
            raise NotImplementedError
    
    def setCharPositionInLine(self, pos):
        '''@brief Set the column of the tokens first character,
    
        def test_shall_toggle_from_fm_to_am(self):
        self.radio.toggle_amfm()
        state = self.radio.state.name
        expected_state_name = 'AM'
        self.assertEqual(state, expected_state_name)

    
    
if __name__ == '__main__':
    client1 = Client()
    client2 = ClientCoroutine()
    requests = [2, 5, 14, 22, 18, 3, 35, 27, 20]
    
    
class Action(object):
    def __init__(self, name):
        self.name = name
    
    '''
http://ginstrom.com/scribbles/2007/10/08/design-patterns-python-style/
Implementation of the iterator pattern with a generator
    
    ### OUTPUT ###
# Name: Jhon    Occupation: Coder
# Before we access `relatives`:
# {'call_count2': 0, 'name': 'Jhon', 'occupation': 'Coder'}
# Jhon's relatives: Many relatives.
# After we've accessed `relatives`:
# {'relatives': 'Many relatives.', 'call_count2': 0, 'name': 'Jhon', 'occupation': 'Coder'}
# Father and mother
# {'_lazy__parents': 'Father and mother', 'relatives': 'Many relatives.', 'call_count2': 1, 'name': 'Jhon', 'occupation': 'Coder'}  # noqa flake8
# Father and mother
# 1

    
        def __init__(self):
        self.time_provider = datetime.datetime
    
        def find_all_path(self, start, end, path=None):
        path = path or []
        path.append(start)
        if start == end:
            return [path]
        paths = []
        for node in self.graph.get(start, []):
            if node not in path:
                newpaths = self.find_all_path(node, end, path[:])
                paths.extend(newpaths)
        return paths
    
        def _send_diagnostics_request(self):
        return 'send diagnostic request'