
        
                Accessing a node updates its position to the front of the LRU list.
        '''
        node = self.lookup.get(query)
        if node is None:
            return None
        self.linked_list.move_to_front(node)
        return node.results
    
            (2016-01, shopping), 125
        (2016-01, gas), 50
        '''
        total = sum(values)
        self.handle_budget_notifications(key, total)
        yield key, sum(values)
    
        def reducer(self, key, values):
        total = sum(values)
        if total == 1:
            yield key, total
    
    EXAMPLES = '''
# Note: None of these examples set aws_access_key, aws_secret_key, or region.
# It is assumed that their matching environment variables are set.
---
- hosts: localhost
  connection: local
  tasks:
    - name: 'Create a snapshot'
      elasticache_snapshot:
        name: 'test-snapshot'
        state: 'present'
        cluster_id: '{{ cluster }}'
        replication_id: '{{ replication }}'
'''
    
    try:
    from google.cloud import pubsub
    HAS_GOOGLE_CLOUD_PUBSUB = True
except ImportError as e:
    HAS_GOOGLE_CLOUD_PUBSUB = False
    
            if state == 'absent' and user in heroku_collaborator_list:
            if not module.check_mode:
                heroku_app.remove_collaborator(user)
            affected_apps += [app]
            result_state = True
        elif state == 'present' and user not in heroku_collaborator_list:
            if not module.check_mode:
                heroku_app.add_collaborator(user_id_or_email=user, silent=module.params['suppress_invitation'])
            affected_apps += [app]
            result_state = True
    
            if module.check_mode:
            mp_id = get_monitoring_policy(oneandone_conn, monitoring_policy_id)
            if (monitoring_policy_processes and mp_id):
                return True
            return False
    
        try:
        client.login(
            username=module.params['ipa_user'],
            password=module.params['ipa_pass']
        )
        changed, zone = ensure(module, client)
        module.exit_json(changed=changed, zone=zone)
    except Exception as e:
        module.fail_json(msg=to_native(e))
    
    # (c) 2013, Ivan Vanderbyl <ivan@app.io>
# GNU General Public License v3.0+ (see COPYING or https://www.gnu.org/licenses/gpl-3.0.txt)
    
    
def do_send_request(module, url, params, key):
    data = json.dumps(params)
    headers = {
        'Content-Type': 'application/json',
        'x-stackdriver-apikey': key
    }
    response, info = fetch_url(module, url, headers=headers, data=data, method='POST')
    if info['status'] != 200:
        module.fail_json(msg='Unable to send msg: %s' % info['msg'])
    
    
def get_github_url(app, view, path):
    github_fmt = 'https://github.com/{}/{}/{}/{}{}'
    return (
        github_fmt.format(app.config.edit_on_github_project, view,
                          app.config.edit_on_github_branch,
                          app.config.edit_on_github_src_path, path))
    
        # If the temperature is not a number this can cause issues
    # with Polymer components, so bail early there.
    if not isinstance(temperature, Number):
        raise TypeError(
            'Temperature is not a number: {}'.format(temperature))
    
    VALID_UNITS = [
    LENGTH_KILOMETERS,
    LENGTH_MILES,
    LENGTH_FEET,
    LENGTH_METERS,
]
    
            self.tokenizer.calc(sentence, DAG, route)
    
        last = [(V[-1][y], y) for y in mem_path[-1].keys()]
    # if len(last)==0:
    #     print obs
    prob, state = max(last)
    
    
if len(args) < 1:
    print(USAGE)
    sys.exit(1)
    
    for topic_idx, topic in enumerate(nmf.components_):
    print('Topic #%d:' % topic_idx)
    print(' '.join([feature_names[i]
                    for i in topic.argsort()[:-n_top_words - 1:-1]]))
    print('')

    
    from __future__ import unicode_literals
import sys
sys.path.append('../')
    
    import jieba
jieba.enable_parallel(4)
import jieba.analyse
from optparse import OptionParser
    
    
    
      shape = tensor.shape.as_list()
    
    
class AdamWeightDecayOptimizer(tf.train.Optimizer):
  '''A basic Adam optimizer that includes 'correct' L2 weight decay.'''
    
        tf_example = tf.train.Example(features=tf.train.Features(feature=features))
    writer.write(tf_example.SerializeToString())
  writer.close()
    
        self.assertFalse(tokenization._is_whitespace(u'A'))
    self.assertFalse(tokenization._is_whitespace(u'-'))