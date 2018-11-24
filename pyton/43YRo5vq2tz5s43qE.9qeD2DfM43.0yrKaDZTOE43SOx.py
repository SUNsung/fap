
class RemoveDuplicateUrls(MRJob):
    
        def __init__(self, person_ids, lookup):
        self.lookup = lookup
        self.person_ids = person_ids
        self.visited_ids = set()
    
        def get(self, key):
        hash_index = self._hash_function(key)
        for item in self.table[hash_index]:
            if item.key == key:
                return item.value
        raise KeyError('Key not found')
    
    (c) 2016, Aaron Christianson
http://github.com/ninjaaron/fast-entry_points
'''
from setuptools.command import easy_install
import re
TEMPLATE = '''\
# -*- coding: utf-8 -*-
# EASY-INSTALL-ENTRY-SCRIPT: '{3}','{4}','{5}'
__requires__ = '{3}'
import re
import sys
    
        proc.sendline(u'ehco test')
    
    
@pytest.mark.functional
def test_with_confirmation(proc, TIMEOUT):
    with_confirmation(proc, TIMEOUT)
    
    
init_zshrc = u'''echo '
export SHELL=/usr/bin/zsh
export HISTFILE=~/.zsh_history
echo > $HISTFILE
export SAVEHIST=100
export HISTSIZE=100
eval $(thefuck --alias {})
setopt INC_APPEND_HISTORY
echo 'instant mode ready: $THEFUCK_INSTANT_MODE'
' > ~/.zshrc'''
    
    match_output = '''
Listing... Done
heroku/stable 6.15.2-1 amd64 [upgradable from: 6.14.43-1]
resolvconf/zesty-updates,zesty-updates 1.79ubuntu4.1 all [upgradable from: 1.79ubuntu4]
squashfs-tools/zesty-updates 1:4.3-3ubuntu2.17.04.1 amd64 [upgradable from: 1:4.3-3ubuntu2]
unattended-upgrades/zesty-updates,zesty-updates 0.93.1ubuntu2.4 all [upgradable from: 0.93.1ubuntu2.3]
'''
    
    You can download from:
  https://osxfuse.github.io/
Error: An unsatisfied requirement failed this build.'''
    
        region, ec2_url, aws_connect_kwargs = get_aws_connection_info(module, boto3=True)
    client = boto3_conn(module, conn_type='client', resource='waf', region=region, endpoint=ec2_url, **aws_connect_kwargs)
    
    
def remove_rules_from_web_acl(client, module, web_acl_id):
    acl = get_web_acl(client, module, web_acl_id)
    deletions = [format_for_update(rule, 'DELETE') for rule in acl['Rules']]
    try:
        params = {'WebACLId': acl['WebACLId'], 'DefaultAction': acl['DefaultAction'], 'Updates': deletions}
        run_func_with_change_token_backoff(client, module, params, client.update_web_acl)
    except (botocore.exceptions.ClientError, botocore.exceptions.BotoCoreError) as e:
        module.fail_json_aws(e, msg='Could not remove rule')
    
        def validate_distribution_id(self, distribution_id, alias):
        try:
            if distribution_id is None and alias is None:
                self.module.fail_json(msg='distribution_id or alias must be specified')
            if distribution_id is None:
                distribution_id = self.__cloudfront_facts_mgr.get_distribution_id_from_domain_name(alias)
            return distribution_id
        except (ClientError, BotoCoreError) as e:
            self.module.fail_json_aws(e, msg='Error validating parameters.')
    
        def disable(self):
        '''Disables the rule in AWS'''
        try:
            response = self.client.disable_rule(Name=self.name)
        except (botocore.exceptions.BotoCoreError, botocore.exceptions.ClientError) as e:
            self.module.fail_json_aws(e, msg='Could not disable rule %s' % self.name)
        self.changed = True
        return response
    
        pretty_results = camel_dict_to_snake_dict(results)
    module.exit_json(**pretty_results)
    
        try:
        if sort and sort_start and sort_end:
            snaked_launch_configs = snaked_launch_configs[int(sort_start):int(sort_end)]
        elif sort and sort_start:
            snaked_launch_configs = snaked_launch_configs[int(sort_start):]
        elif sort and sort_end:
            snaked_launch_configs = snaked_launch_configs[:int(sort_end)]
    except TypeError:
        module.fail_json(msg='Please supply numeric values for sort_start and/or sort_end')
    
    
def update_vpc_tags(connection, module, vpc_id, tags, name):
    if tags is None:
        tags = dict()
    
        def describe_services(self, cluster, services):
        fn_args = dict()
        if cluster and cluster is not None:
            fn_args['cluster'] = cluster
        fn_args['services'] = services
        try:
            response = self.describe_services_with_backoff(**fn_args)
        except (botocore.exceptions.ClientError, botocore.exceptions.BotoCoreError) as e:
            self.module.fail_json_aws(e, msg='Couldn't describe ECS services')
        running_services = [self.extract_service_from(service) for service in response.get('services', [])]
        services_not_running = response.get('failures', [])
        return running_services, services_not_running
    
        try:
        region, ec2_url, aws_connect_kwargs = get_aws_connection_info(module, boto3=True)
        iam = boto3_conn(module, conn_type='client', resource='iam', region=region, endpoint=ec2_url, **aws_connect_kwargs)
    except botocore.exceptions.ClientError as e:
        module.fail_json(msg='Boto3 Client Error - ' + str(e.msg))
    
        try:
        resource = redshift.describe_clusters(identifier)['DescribeClustersResponse']['DescribeClustersResult']['Clusters'][0]
    except boto.exception.JSONResponseError as e:
        module.fail_json(msg=str(e))
    
        timings = []
    for exponent in range(args.log_min_problem_size,
                          args.log_max_problem_size):
        n = 10 ** exponent
        Y = DATASET_GENERATORS[args.dataset](n)
        time_per_iteration = \
            [bench_isotonic_regression(Y) for i in range(args.iterations)]
        timing = (n, np.mean(time_per_iteration))
        timings.append(timing)
    
    FORMATS = {
    'sequences': lambda y: [list(np.flatnonzero(s)) for s in y],
    'dense': lambda y: y,
    'csr': lambda y: sp.csr_matrix(y),
    'csc': lambda y: sp.csc_matrix(y),
}
    
                N_results_build[algorithm][i] = (t1 - t0)
            N_results_query[algorithm][i] = (t2 - t1)
    
        max_it = len(samples_range) * len(features_range)
    for n_samples in samples_range:
        for n_features in features_range:
            it += 1
            print('====================')
            print('Iteration %03d of %03d' % (it, max_it))
            print('====================')
            X = make_low_rank_matrix(n_samples, n_features,
                                  effective_rank=rank,
                                  tail_strength=0.2)
    
        ###########################################################################
    # Set SparseRandomProjection input
    sparse_matrix_params = {
        'n_components': opts.n_components,
        'random_state': opts.random_seed,
        'density': opts.density,
        'eps': opts.eps,
    }
    
    res = []
    
    
def get_pdf_size(version):
    api_url = ROOT_URL + '%s/_downloads' % version
    for path_details in json_urlread(api_url):
        if path_details['name'] == 'scikit-learn-docs.pdf':
            return human_readable_data_quantity(path_details['size'], 1000)
    
        revision is a git commit reference (hash or name)
    
    
def _make_issue_node(issue_no, config, options=None):
    options = options or {}
    if issue_no not in ('-', '0'):
        if config.issues_uri:
            ref = config.issues_uri.format(issue=issue_no)
        elif config.issues_github_path:
            ref = 'https://github.com/{0}/issues/{1}'.format(
                config.issues_github_path, issue_no
            )
        issue_text = '#{0}'.format(issue_no)
        link = nodes.reference(text=issue_text, refuri=ref, **options)
    else:
        link = None
    return link
    
        if not os.path.exists(ARCHIVE_NAME):
        print('Downloading dataset from %s (14 MB)' % URL)
        opener = urlopen(URL)
        with open(ARCHIVE_NAME, 'wb') as archive:
            archive.write(opener.read())
    
        def __enter__(self):
        from scrapy.utils.test import get_testenv
        pargs = [sys.executable, '-u', '-m', 'scrapy.utils.benchserver']
        self.proc = subprocess.Popen(pargs, stdout=subprocess.PIPE,
                                     env=get_testenv())
        self.proc.stdout.readline()
    
    
class Command(ScrapyCommand):
    
        default_settings = {'LOG_ENABLED': False,
                        'SPIDER_LOADER_WARN_ONLY': True}
    
    current_path = os.path.dirname(os.path.abspath(__file__))
root_path = os.path.abspath( os.path.join(current_path, os.pardir, os.pardir))
data_path = os.path.abspath(os.path.join(root_path, os.pardir, os.pardir, 'data'))
module_data_path = os.path.join(data_path, 'gae_proxy')
python_path = os.path.abspath( os.path.join(root_path, 'python27', '1.0'))
    
        netloc = urlparse.urlparse(url).netloc
    
    
    def toString(self, *args):
        if len(args) == 0:
            programName = self.DEFAULT_PROGRAM_NAME
            start = self.MIN_TOKEN_INDEX
            end = self.size() - 1
            
        elif len(args) == 1:
            programName = args[0]
            start = self.MIN_TOKEN_INDEX
            end = self.size() - 1
    
            Lines are numbered 1..n
        
        Using setter/getter methods is deprecated. Use o.line instead.'''
    
    
if __name__ == '__main__':
    # Create our localizers
    e, g = get_localizer(language='English'), get_localizer(language='Greek')
    # Localize some text
    for msgid in 'dog parrot cat bear'.split():
        print(e.get(msgid), g.get(msgid))
    
        def __init__(self, param):
        # simple test to validate param value
        if param in self._class_method_choices:
            self.param = param
        else:
            raise ValueError('Invalid Value for Param: {0}'.format(param))
    
        def amount(self, val):
        print(val, end=' ')
        return self
    
        def setTC(self, tc):
        self._tc = tc
    
        @property
    def data(self):
        return self._data
    
    
class User(object):
    def __init__(self, super_user=False):
        self.super_user = super_user
    
            if not meth:
            meth = self.generic_visit
        return meth(node, *args, **kwargs)
    
    *What does this example do?
This particular implementation abstracts the creation of a pet and
does so depending on the factory we chose (Dog or Cat, or random_animal)
This works because both Dog/Cat and random_animal respect a common
interface (callable for creation and .speak()).
Now my application can create pets abstractly and decide later,
based on my own criteria, dogs over cats.
    
        def register_object(self, name, obj):
        '''Register an object'''
        self._objects[name] = obj
    
        def now(self):
        current_time_is_always_midnight = '24:01'
        return current_time_is_always_midnight

    
    
class HierachicalStateMachine(object):
    def __init__(self):
        self._active_state = Active(self)  # Unit.Inservice.Active()
        self._standby_state = Standby(self)  # Unit.Inservice.Standby()
        self._suspect_state = Suspect(self)  # Unit.OutOfService.Suspect()
        self._failed_state = Failed(self)  # Unit.OutOfService.Failed()
        self._current_state = self._standby_state
        self.states = {
            'active': self._active_state,
            'standby': self._standby_state,
            'suspect': self._suspect_state,
            'failed': self._failed_state,
        }
        self.message_types = {
            'fault trigger': self._current_state.on_fault_trigger,
            'switchover': self._current_state.on_switchover,
            'diagnostics passed': self._current_state.on_diagnostics_passed,
            'diagnostics failed': self._current_state.on_diagnostics_failed,
            'operator inservice': self._current_state.on_operator_inservice,
        }