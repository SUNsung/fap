    def __init__(self, employee_id, name):
        super(Operator, self).__init__(employee_id, name, Rank.OPERATOR)
    
        def score(self):
        min_over = sys.MAXSIZE
        max_under = -sys.MAXSIZE
        for score in self.possible_scores():
            if self.BLACKJACK < score < min_over:
                min_over = score
            elif max_under < score <= self.BLACKJACK:
                max_under = score
        return max_under if max_under != -sys.MAXSIZE else min_over
    
            (foo, p1), 2
        (bar, p1), 3
        (foo, p2), 3
        (bar, p3), 10
        (foo, p4), 1
        '''
        yield key, sum(values)
    
        def __init__(self):
        self.lookup = {}  # key: person_id, value: person_server
    
    
def check_entry(line_num, segments):
    # START Title
    raw_title = segments[index_title]
    title_re_match = link_re.match(raw_title)
    # url should be wrapped in '[TITLE](LINK)' Markdown syntax
    if not title_re_match:
        add_error(line_num, 'Title syntax should be '[TITLE](LINK)'')
    else:
        # do not allow '... API' in the entry title
        title = title_re_match.group(1)
        if title.upper().endswith(' API'):
            add_error(line_num, 'Title should not end with '... API'. Every entry is an API here!')
        # do not allow duplicate links
        link = title_re_match.group(2)
        if link in previous_links:
            add_error(line_num, 'Duplicate link - entries should only be included in one section')
        else:
            previous_links.append(link)
    # END Title
    # START Description
    # first character should be capitalized
    char = segments[index_desc][0]
    if char.upper() != char:
        add_error(line_num, 'first character of description is not capitalized')
    # last character should not punctuation
    char = segments[index_desc][-1]
    if char in punctuation:
        add_error(line_num, 'description should not end with {}'.format(char))
    desc_length = len(segments[index_desc])
    if desc_length > 100:
        add_error(line_num, 'description should not exceed 100 characters (currently {})'.format(desc_length))
    # END Description
    # START Auth
    # values should conform to valid options only
    auth = segments[index_auth]
    if auth != 'No' and (not auth.startswith('`') or not auth.endswith('`')):
        add_error(line_num, 'auth value is not enclosed with `backticks`')
    if auth.replace('`', '') not in auth_keys:
        add_error(line_num, '{} is not a valid Auth option'.format(auth))
    # END Auth
    # START HTTPS
    # values should conform to valid options only
    https = segments[index_https]
    if https not in https_keys:
        add_error(line_num, '{} is not a valid HTTPS option'.format(https))
    # END HTTPS
    # START CORS
    # values should conform to valid options only
    cors = segments[index_cors]
    if cors not in cors_keys:
        add_error(line_num, '{} is not a valid CORS option'.format(cors))
    # END CORS
    
        if test_config is None:
        # load the instance config, if it exists, when not testing
        app.config.from_pyfile('config.py', silent=True)
    else:
        # load the test config if passed in
        app.config.update(test_config)
    
        Checks that the id exists and optionally that the current user is
    the author.
    
    import pytest
from flaskr.db import get_db
    
            if (
            not kwargs and len(args) == 1
            and isinstance(args[0], (EnvironBuilder, dict))
        ):
            environ = self.environ_base.copy()
    
    
def bump_version(version):
    try:
        parts = [int(i) for i in version.split('.')]
    except ValueError:
        fail('Current version is not numeric')
    
        def describe(self):
        '''Returns the existing details of the rule in AWS'''
        try:
            rule_info = self.client.describe_rule(Name=self.name)
        except botocore.exceptions.ClientError as e:
            error_code = e.response.get('Error', {}).get('Code')
            if error_code == 'ResourceNotFoundException':
                return {}
            self.module.fail_json_aws(e, msg='Could not describe rule %s' % self.name)
        except botocore.exceptions.BotoCoreError as e:
            self.module.fail_json_aws(e, msg='Could not describe rule %s' % self.name)
        return self._snakify(rule_info)
    
    # Remove a subnet group
- elasticache_subnet_group:
    state: absent
    name: norwegian-blue
'''
    
    
def main():
    argument_spec = HerokuHelper.heroku_argument_spec()
    argument_spec.update(
        user=dict(required=True, type='str'),
        apps=dict(required=True, type='list'),
        suppress_invitation=dict(default=False, type='bool'),
        state=dict(default='present', type='str', choices=['present', 'absent']),
    )
    module = AnsibleModule(
        argument_spec=argument_spec,
        supports_check_mode=True
    )
    
            for _server_id in servers:
            server_id = get_server(oneandone_conn, _server_id)
            attach_server = oneandone.client.AttachServer(
                server_id=server_id
            )
            attach_servers.append(attach_server)
    
        try:
        dsn = (
            'Driver=Vertica;'
            'Server=%s;'
            'Port=%s;'
            'Database=%s;'
            'User=%s;'
            'Password=%s;'
            'ConnectionLoadBalance=%s'
        ) % (module.params['cluster'], module.params['port'], db,
             module.params['login_user'], module.params['login_password'], 'true')
        db_conn = pyodbc.connect(dsn, autocommit=True)
        cursor = db_conn.cursor()
    except Exception as e:
        module.fail_json(msg='Unable to connect to database: %s.' % to_native(e), exception=traceback.format_exc())
    
        return changed, client.dnszone_find(zone_name)
    
    
DOCUMENTATION = '''
---
module: ipa_hbacrule
author: Thomas Krahn (@Nosmoht)
short_description: Manage FreeIPA HBAC rule
description:
- Add, modify or delete an IPA HBAC rule using IPA API.
options:
  cn:
    description:
    - Canonical name.
    - Can not be changed as it is the unique identifier.
    required: true
    aliases: ['name']
  description:
    description: Description
  host:
    description:
    - List of host names to assign.
    - If an empty list is passed all hosts will be removed from the rule.
    - If option is omitted hosts will not be checked or changed.
    required: false
  hostcategory:
    description: Host category
    choices: ['all']
  hostgroup:
    description:
    - List of hostgroup names to assign.
    - If an empty list is passed all hostgroups will be removed. from the rule
    - If option is omitted hostgroups will not be checked or changed.
  service:
    description:
    - List of service names to assign.
    - If an empty list is passed all services will be removed from the rule.
    - If option is omitted services will not be checked or changed.
  servicecategory:
    description: Service category
    choices: ['all']
  servicegroup:
    description:
    - List of service group names to assign.
    - If an empty list is passed all assigned service groups will be removed from the rule.
    - If option is omitted service groups will not be checked or changed.
  sourcehost:
    description:
    - List of source host names to assign.
    - If an empty list if passed all assigned source hosts will be removed from the rule.
    - If option is omitted source hosts will not be checked or changed.
  sourcehostcategory:
    description: Source host category
    choices: ['all']
  sourcehostgroup:
    description:
    - List of source host group names to assign.
    - If an empty list if passed all assigned source host groups will be removed from the rule.
    - If option is omitted source host groups will not be checked or changed.
  state:
    description: State to ensure
    default: 'present'
    choices: ['present', 'absent', 'enabled', 'disabled']
  user:
    description:
    - List of user names to assign.
    - If an empty list if passed all assigned users will be removed from the rule.
    - If option is omitted users will not be checked or changed.
  usercategory:
    description: User category
    choices: ['all']
  usergroup:
    description:
    - List of user group names to assign.
    - If an empty list if passed all assigned user groups will be removed from the rule.
    - If option is omitted user groups will not be checked or changed.
extends_documentation_fragment: ipa.documentation
version_added: '2.3'
'''
    
        module = AnsibleModule(
        argument_spec=dict(
            token=dict(required=True, no_log=True),
            environment=dict(required=True),
            user=dict(required=False),
            repo=dict(required=False),
            revision=dict(required=False),
            url=dict(required=False, default='https://api.airbrake.io/deploys.txt'),
            validate_certs=dict(default='yes', type='bool'),
        ),
        supports_check_mode=True
    )
    
    
if __name__ == '__main__':
    main()

    
        scikit_results = []
    glmnet_results = []
    n = 20
    step = 500
    n_features = 1000
    n_informative = n_features / 10
    n_test_samples = 1000
    for i in range(1, n + 1):
        print('==================')
        print('Iteration %s of %s' % (i, n))
        print('==================')
    
        #------------------------------------------------------------
    # varying D
    D_results_build = dict([(alg, np.zeros(len(Drange)))
                            for alg in algorithms])
    D_results_query = dict([(alg, np.zeros(len(Drange)))
                            for alg in algorithms])
    
    import os
import tarfile
from contextlib import closing
try:
    from urllib import urlopen
except ImportError:
    from urllib.request import urlopen
    
        if not os.path.exists(ARCHIVE_NAME):
        print('Downloading dataset from %s (14 MB)' % URL)
        opener = urlopen(URL)
        with open(ARCHIVE_NAME, 'wb') as archive:
            archive.write(opener.read())
    
    exercise_dir = os.path.dirname(__file__)
if exercise_dir == '':
    exercise_dir = '.'
    
    # #############################################################################
# Main code
regression_data = generate_data('regression')
classification_data = generate_data('classification', sparse=True)
configurations = [
    {'estimator': SGDClassifier,
     'tuned_params': {'penalty': 'elasticnet', 'alpha': 0.001, 'loss':
                      'modified_huber', 'fit_intercept': True, 'tol': 1e-3},
     'changing_param': 'l1_ratio',
     'changing_param_values': [0.25, 0.5, 0.75, 0.9],
     'complexity_label': 'non_zero coefficients',
     'complexity_computer': _count_nonzero_coefficients,
     'prediction_performance_computer': hamming_loss,
     'prediction_performance_label': 'Hamming Loss (Misclassification Ratio)',
     'postfit_hook': lambda x: x.sparsify(),
     'data': classification_data,
     'n_samples': 30},
    {'estimator': NuSVR,
     'tuned_params': {'C': 1e3, 'gamma': 2 ** -15},
     'changing_param': 'nu',
     'changing_param_values': [0.1, 0.25, 0.5, 0.75, 0.9],
     'complexity_label': 'n_support_vectors',
     'complexity_computer': lambda x: len(x.support_vectors_),
     'data': regression_data,
     'postfit_hook': lambda x: x,
     'prediction_performance_computer': mean_squared_error,
     'prediction_performance_label': 'MSE',
     'n_samples': 30},
    {'estimator': GradientBoostingRegressor,
     'tuned_params': {'loss': 'ls'},
     'changing_param': 'n_estimators',
     'changing_param_values': [10, 50, 100, 200, 500],
     'complexity_label': 'n_trees',
     'complexity_computer': lambda x: x.n_estimators,
     'data': regression_data,
     'postfit_hook': lambda x: x,
     'prediction_performance_computer': mean_squared_error,
     'prediction_performance_label': 'MSE',
     'n_samples': 30},
]
for conf in configurations:
    prediction_performances, prediction_times, complexities = \
        benchmark_influence(conf)
    plot_influence(conf, prediction_performances, prediction_times,
                   complexities)

    
    plt.figure(figsize=(8, 3.3))
plt.subplot(131)
plt.imshow(data, cmap=plt.cm.gray, interpolation='nearest')
plt.axis('off')
plt.title('original image')
plt.subplot(132)
plt.imshow(rec_l2, cmap=plt.cm.gray, interpolation='nearest')
plt.title('L2 penalization')
plt.axis('off')
plt.subplot(133)
plt.imshow(rec_l1, cmap=plt.cm.gray, interpolation='nearest')
plt.title('L1 penalization')
plt.axis('off')
    
        item = nodes.list_item()
    item += p
    return item
    
    __all__ = ['__version__', 'version_info', 'twisted_version',
           'Spider', 'Request', 'FormRequest', 'Selector', 'Item', 'Field']
    
    def _get_commands_dict(settings, inproject):
    cmds = _get_commands_from_module('scrapy.commands', inproject)
    cmds.update(_get_commands_from_entry_points(inproject))
    cmds_module = settings['COMMANDS_MODULE']
    if cmds_module:
        cmds.update(_get_commands_from_module(cmds_module, inproject))
    return cmds
    
        def syntax(self):
        '''
        Command syntax (preferably one-line). Do not include command name.
        '''
        return ''
    
        def long_desc(self):
        return ('Edit a spider using the editor defined in the EDITOR environment'
                ' variable or else the EDITOR setting')
    
    
class Command(ScrapyCommand):
    
        requires_project = False
    default_settings = {'SPIDER_LOADER_WARN_ONLY': True}
    
                # trustRoot set to platformTrust() will use the platform's root CAs.
            #
            # This means that a website like https://www.cacert.org will be rejected
            # by default, since CAcert.org CA certificate is seldom shipped.
            return optionsForClientTLS(hostname.decode('ascii'),
                                       trustRoot=platformTrust(),
                                       extraCertificateOptions={
                                            'method': self._ssl_method,
                                       })
    
        def _spider_idle(self, spider):
        '''Called when a spider gets idle. This function is called when there
        are no remaining pages to download or schedule. It can be called
        multiple times. If some extension raises a DontCloseSpider exception
        (in the spider_idle signal handler) the spider is not closed until the
        next loop and this function is guaranteed to be called (at least) once
        again for this spider.
        '''
        res = self.signals.send_catch_log(signal=signals.spider_idle, \
            spider=spider, dont_log=DontCloseSpider)
        if any(isinstance(x, Failure) and isinstance(x.value, DontCloseSpider) \
                for _, x in res):
            return
    
        iterkeys = lambda d: d.iterkeys()
    itervalues = lambda d: d.itervalues()
    iteritems = lambda d: d.iteritems()
    
    accepted_chars = re.compile(r'[\u4E00-\u9FD5]+')
    
        STOP_WORDS = set((
        'the', 'of', 'is', 'and', 'to', 'in', 'that', 'we', 'for', 'an', 'are',
        'by', 'be', 'as', 'on', 'with', 'can', 'if', 'from', 'which', 'you', 'it',
        'this', 'then', 'at', 'have', 'all', 'not', 'one', 'has', 'or', 'that'
    ))
    
        (prob, state) = max((V[len(obs) - 1][y], y) for y in 'ES')
    
        def __cut_internal(self, sentence, HMM=True):
        self.makesure_userdict_loaded()
        sentence = strdecode(sentence)
        blocks = re_han_internal.split(sentence)
        if HMM:
            cut_blk = self.__cut_DAG
        else:
            cut_blk = self.__cut_DAG_NO_HMM
    
    print('='*40)
print('6. Tokenize: 返回词语在原文的起止位置')
print('-'*40)
print(' 默认模式')
print('-'*40)
    
    print(','.join(tags))

    
    import jieba
import time
import glob
import sys
import os
import random
    
    tags = jieba.analyse.extract_tags(content,topK=topK)