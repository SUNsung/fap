
        
        # Allow direct execution
import os
import sys
sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
    
        with open(FISH_COMPLETION_TEMPLATE) as f:
        template = f.read()
    filled_template = template.replace('{{commands}}', '\n'.join(commands))
    with open(FISH_COMPLETION_FILE, 'w') as f:
        f.write(filled_template)
    
    
def get_base_name(base):
    if base is InfoExtractor:
        return 'LazyLoadExtractor'
    elif base is SearchInfoExtractor:
        return 'LazyLoadSearchExtractor'
    else:
        return base.__name__
    
        if not releases:
        break
    
        def test_youtube_extract(self):
        assertExtractId = lambda url, id: self.assertEqual(YoutubeIE.extract_id(url), id)
        assertExtractId('http://www.youtube.com/watch?&v=BaW_jenozKc', 'BaW_jenozKc')
        assertExtractId('https://www.youtube.com/watch?&v=BaW_jenozKc', 'BaW_jenozKc')
        assertExtractId('https://www.youtube.com/watch?feature=player_embedded&v=BaW_jenozKc', 'BaW_jenozKc')
        assertExtractId('https://www.youtube.com/watch_popup?v=BaW_jenozKc', 'BaW_jenozKc')
        assertExtractId('http://www.youtube.com/watch?v=BaW_jenozKcsharePLED17F32AD9753930', 'BaW_jenozKc')
        assertExtractId('BaW_jenozKc', 'BaW_jenozKc')
    
        if state == 'present':
        cwe_rule_manager.ensure_present()
    elif state == 'disabled':
        cwe_rule_manager.ensure_disabled()
    elif state == 'absent':
        cwe_rule_manager.ensure_absent()
    else:
        module.fail_json(msg='Invalid state '{0}' provided'.format(state))
    
    EXAMPLES = '''
# Simple snapshot of volume using volume_id
- ec2_snapshot:
    volume_id: vol-abcdef12
    description: snapshot of /data from DB123 taken 2013/11/28 12:18:32
    
    
def delete_eigw(module, conn, eigw_id):
    '''
    Delete EIGW.
    
        argument_spec = ec2_argument_spec()
    argument_spec.update(dict(
        details=dict(type='bool', default=False),
        events=dict(type='bool', default=True),
        cluster=dict(),
        service=dict(type='list')
    ))
    
    from ansible.module_utils.aws.core import AnsibleAWSModule
from ansible.module_utils.ec2 import boto3_conn, ec2_argument_spec, get_aws_connection_info
from ansible.module_utils.ec2 import camel_dict_to_snake_dict, AWSRetry
from ansible.module_utils.ec2 import boto3_tag_list_to_ansible_dict
    
        :param key:
    :return:
    '''
    
    DOCUMENTATION = '''
---
module: rds_snapshot_facts
version_added: '2.6'
short_description: obtain facts about one or more RDS snapshots
description:
  - obtain facts about one or more RDS snapshots. These can be for unclustered snapshots or snapshots of clustered DBs (Aurora)
  - Aurora snapshot facts may be obtained if no identifier parameters are passed or if one of the cluster parameters are passed.
options:
  db_snapshot_identifier:
    description:
      - Name of an RDS (unclustered) snapshot. Mutually exclusive with I(db_instance_identifier), I(db_cluster_identifier), I(db_cluster_snapshot_identifier)
    required: false
    aliases:
      - snapshot_name
  db_instance_identifier:
    description:
      - RDS instance name for which to find snapshots. Mutually exclusive with I(db_snapshot_identifier), I(db_cluster_identifier),
        I(db_cluster_snapshot_identifier)
    required: false
  db_cluster_identifier:
    description:
      - RDS cluster name for which to find snapshots. Mutually exclusive with I(db_snapshot_identifier), I(db_instance_identifier),
        I(db_cluster_snapshot_identifier)
    required: false
  db_cluster_snapshot_identifier:
    description:
      - Name of an RDS cluster snapshot. Mutually exclusive with I(db_instance_identifier), I(db_snapshot_identifier), I(db_cluster_identifier)
    required: false
  snapshot_type:
    description:
      - Type of snapshot to find. By default both automated and manual
        snapshots will be returned.
    required: false
    choices: ['automated', 'manual', 'shared', 'public']
requirements:
    - 'python >= 2.6'
    - 'boto3'
author:
    - 'Will Thames (@willthames)'
extends_documentation_fragment:
    - aws
    - ec2
'''
    
    # Copyright 2014 Jens Carl, Hothead Games Inc.
# GNU General Public License v3.0+ (see COPYING or https://www.gnu.org/licenses/gpl-3.0.txt)
    
            print('Training %s ... ' % name, end='')
        t0 = time()
        clf.fit(X_train, y_train)
        train_time[name] = time() - t0
        t0 = time()
        y_pred = clf.predict(X_test)
        test_time[name] = time() - t0
        accuracy[name] = accuracy_score(y_test, y_pred)
        print('done')
    
    
def generate_logistic_dataset(size):
    X = np.sort(np.random.normal(size=size))
    return np.random.random(size=size) < 1.0 / (1.0 + np.exp(-X))
    
            # dummy point plot to stick the legend to since surface plot do not
        # support legends (yet?)
        # ax.plot([1], [1], [1], color=c, label=label)
    
        for n_samples in sample_sizes:
        X = random_state.rand(n_samples, 300)
    
        res.append(bench)
    
        try:
        fn = inspect.getsourcefile(obj)
    except Exception:
        fn = None
    if not fn:
        try:
            fn = inspect.getsourcefile(sys.modules[obj.__module__])
        except Exception:
            fn = None
    if not fn:
        return
    
        print('Decompressing %s' % ARCHIVE_NAME)
    with closing(tarfile.open(ARCHIVE_NAME, 'r:gz')) as archive:
        archive.extractall(path='.')
    os.remove(ARCHIVE_NAME)

    
    ##
# imaginary tree navigation type; traverse 'get child' link
DOWN = 2
##
#imaginary tree navigation type; finish with a child list
UP = 3
    
            Terence implemented packed table initializers, because Java has a
        size restriction on .class files and the lookup tables can grow
        pretty large. The generated JavaLexer.java of the Java.g example
        would be about 15MB with uncompressed array initializers.
    
    
    def getSourceName(self):
        return self.name
    
        def get_names(self):
        '''Return a set of all names.'''
        all_names = set()  # type: Set[str]
        all_names.update(self.aliases)
        # Strip out any scheme:// and <port> field from servername
        if self.name is not None:
            all_names.add(VirtualHost.strip_name.findall(self.name)[0])
    
    class EntryPointTest(unittest.TestCase):
    '''Entrypoint tests'''