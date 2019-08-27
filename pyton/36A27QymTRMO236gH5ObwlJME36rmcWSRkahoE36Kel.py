
        
        from .compat import is_py2, builtin_str, str
    
    import urllib3
import chardet
import warnings
from .exceptions import RequestsDependencyWarning
    
        def finalize_options(self):
        TestCommand.finalize_options(self)
        self.test_args = []
        self.test_suite = True
    
            if not client.is_authenticated:
            self.module.fail_json(msg='Heroku authentication failure, please check your API Key')
    
        @staticmethod
    def _get_aa_policy_id_of_server(clc, module, alias, server_id):
        '''
        retrieves the anti affinity policy id of the server based on the CLC server id
        :param clc: the clc-sdk instance to use
        :param module: the AnsibleModule object
        :param alias: the CLC account alias
        :param server_id: the CLC server id
        :return: aa_policy_id: The anti affinity policy id
        '''
        aa_policy_id = None
        try:
            result = clc.v2.API.Call(
                method='GET', url='servers/%s/%s/antiAffinityPolicy' %
                (alias, server_id))
            aa_policy_id = result.get('id')
        except APIFailedResponse as ex:
            if ex.response_status_code != 404:
                module.fail_json(msg='Unable to fetch anti affinity policy for server '{0}'. {1}'.format(
                    server_id, str(ex.response_text)))
        return aa_policy_id
    
    
@api_wrapper
def update_pool(module, system, pool):
    '''Update Pool'''
    changed = False
    
    EXAMPLES = '''
# Add a user to a password file and ensure permissions are set
- htpasswd:
    path: /etc/nginx/passwdfile
    name: janedoe
    password: '9s36?;fyNp'
    owner: root
    group: www-data
    mode: 0640
    
    EXAMPLES = '''
# Create an issue in the my hosted Taiga environment and attach an error log
- taiga_issue:
    taiga_host: https://mytaigahost.example.com
    project: myproject
    subject: An error has been found
    issue_type: Bug
    priority: High
    status: New
    severity: Important
    description: An error has been found. Please check the attached error log for details.
    attachment: /path/to/error.log
    attachment_description: Error log file
    tags:
      - Error
      - Needs manual check
    state: present
    
        def add(self):
        ''' If self.dn does not exist, returns a callable that will add it. '''
        def _add():
            self.connection.add_s(self.dn, modlist)
    
    
if __name__ == '__main__':
    main()

    
                # try to get existing record
            record_exists = False
            for r in all_records:
                if r == record:
                    record_exists = True
                    record = r
    
        # create a client object
    client = MatrixClient(module.params['hs_url'])
    if module.params['token'] is not None:
        client.api.token = module.params['token']
    else:
        client.login(module.params['user_id'], module.params['password'], sync=False)
    
    RETURN = '''
powerstate:
    description: The current power state of the machine.
    returned: success
    type: str
    sample: on
'''
    
    '''
Benchmark for SGD regression
    
        # the training data folder must be passed as first argument
    movie_reviews_data_folder = sys.argv[1]
    dataset = load_files(movie_reviews_data_folder, shuffle=False)
    print('n_samples: %d' % len(dataset.data))
    
    # To apply a classifier on this data, we need to flatten the image, to
# turn the data in a (samples, feature) matrix:
n_samples = len(digits.images)
data = digits.images.reshape((n_samples, -1))
    
    plt.subplot(3, 4, 10)
plt.imshow(np.reshape(agglo.labels_, images[0].shape),
           interpolation='nearest', cmap=plt.cm.nipy_spectral)
plt.xticks(())
plt.yticks(())
plt.title('Labels')
plt.show()

    
    # equal bins face
regular_values = np.linspace(0, 256, n_clusters + 1)
regular_labels = np.searchsorted(regular_values, face) - 1
regular_values = .5 * (regular_values[1:] + regular_values[:-1])  # mean
regular_face = np.choose(regular_labels.ravel(), regular_values, mode='clip')
regular_face.shape = face.shape
plt.figure(3, figsize=(3, 2.2))
plt.imshow(regular_face, cmap=plt.cm.gray, vmin=vmin, vmax=vmax)
    
    The second plot demonstrate one single run of the ``MiniBatchKMeans``
estimator using a ``init='random'`` and ``n_init=1``. This run leads to
a bad convergence (local optimum) with estimated centers stuck
between ground truth clusters.
    
    import numpy as np
import matplotlib.pyplot as plt
    
        def report_out_of_quota(self, appid):
        self.logger.warn('report_out_of_quota:%s', appid)
        with self.lock:
            if appid not in self.out_of_quota_appids:
                self.out_of_quota_appids.append(appid)
            try:
                self.working_appid_list.remove(appid)
            except:
                pass
    
    
    
                    if c >= self.min[s] and c <= self.max[s]:
                    # move to next state
                    snext = self.transition[s][c-self.min[s]]
                    #print 'in range, next state = %d' % snext
                    
                    if snext < 0:
                        #print 'not a normal transition'
                        # was in range but not a normal transition
                        # must check EOT, which is like the else clause.
                        # eot[s]>=0 indicates that an EOT edge goes to another
                        # state.
                        if self.eot[s] >= 0: # EOT Transition to accept state?
                            #print 'EOT trans to accept state %d' % self.eot[s]
                            
                            s = self.eot[s]
                            input.consume()
                            # TODO: I had this as return accept[eot[s]]
                            # which assumed here that the EOT edge always
                            # went to an accept...faster to do this, but
                            # what about predicated edges coming from EOT
                            # target?
                            continue
    
            self.markDepth = marker-1
    
        print('`{}` was processed'.format(data))
    
        def test_object(queue):
        pool = ObjectPool(queue, True)
        print('Inside func: {}'.format(pool.item))
    
    
class Delegator(object):
    '''
    >>> delegator = Delegator(Delegate())
    >>> delegator.p1
    123
    >>> delegator.p2
    Traceback (most recent call last):
    ...
    AttributeError: 'Delegate' object has no attribute 'p2'
    >>> delegator.do_something('nothing')
    'Doing nothing'
    >>> delegator.do_anything()
    Traceback (most recent call last):
    ...
    AttributeError: 'Delegate' object has no attribute 'do_anything'
    '''
    
    '''
*What is this pattern about?
The composite pattern describes a group of objects that is treated the
same way as a single instance of the same type of object. The intent of
a composite is to 'compose' objects into tree structures to represent
part-whole hierarchies. Implementing the composite pattern lets clients
treat individual objects and compositions uniformly.
    
    *Where is the pattern used practically?
This pattern can be seen in the Python standard library when we use
the isdir function. Although a user simply uses this function to know
whether a path refers to a directory, the system makes a few
operations and calls other modules (e.g., os.stat) to give the result.