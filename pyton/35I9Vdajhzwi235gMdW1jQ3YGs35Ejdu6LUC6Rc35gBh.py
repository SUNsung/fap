
        
            elif not RESULT and ('info_dict' in test and 'age_limit' in test['info_dict'] and
                         test['info_dict']['age_limit'] == 18):
        print('\nPotential false negative: {0}'.format(test['name']))
    
    
    {    # Options that need a file parameter
    'download-archive': ['--require-parameter'],
    'cookies': ['--require-parameter'],
    'load-info': ['--require-parameter'],
    'batch-file': ['--require-parameter'],
}
    
    
if __name__ == '__main__':
    main()

    
        with io.open(outfile, 'w', encoding='utf-8') as outf:
        outf.write(out)
    
        flags = [opt.get_opt_string() for opt in opts]
    
        def test_youtube_extract(self):
        assertExtractId = lambda url, id: self.assertEqual(YoutubeIE.extract_id(url), id)
        assertExtractId('http://www.youtube.com/watch?&v=BaW_jenozKc', 'BaW_jenozKc')
        assertExtractId('https://www.youtube.com/watch?&v=BaW_jenozKc', 'BaW_jenozKc')
        assertExtractId('https://www.youtube.com/watch?feature=player_embedded&v=BaW_jenozKc', 'BaW_jenozKc')
        assertExtractId('https://www.youtube.com/watch_popup?v=BaW_jenozKc', 'BaW_jenozKc')
        assertExtractId('http://www.youtube.com/watch?v=BaW_jenozKcsharePLED17F32AD9753930', 'BaW_jenozKc')
        assertExtractId('BaW_jenozKc', 'BaW_jenozKc')
    
        def test_module_exec(self):
        if sys.version_info >= (2, 7):  # Python 2.6 doesn't support package execution
            subprocess.check_call([sys.executable, '-m', 'youtube_dl', '--version'], cwd=rootDir, stdout=_DEV_NULL)
    
    # the data, split between train and test sets
(x_train, y_train), (x_test, y_test) = mnist.load_data()
    
        def __init__(self, l1=0., l2=0.):
        self.l1 = K.cast_to_floatx(l1)
        self.l2 = K.cast_to_floatx(l2)
    
    
def test_cce_one_hot():
    y_a = K.variable(np.random.randint(0, 7, (5, 6)))
    y_b = K.variable(np.random.random((5, 6, 7)))
    objective_output = losses.sparse_categorical_crossentropy(y_a, y_b)
    assert K.eval(objective_output).shape == (5, 6)
    
            self.kernel = self.add_weight(shape=(input_dim, self.units * 4),
                                      name='kernel',
                                      initializer=self.kernel_initializer,
                                      regularizer=self.kernel_regularizer,
                                      constraint=self.kernel_constraint)
        self.recurrent_kernel = self.add_weight(
            shape=(self.units, self.units * 4),
            name='recurrent_kernel',
            initializer=self.recurrent_initializer,
            regularizer=self.recurrent_regularizer,
            constraint=self.recurrent_constraint)
    
        if steps is not None:
        for step in range(steps):
            batch_outs = f(ins)
            if isinstance(batch_outs, list):
                if step == 0:
                    for _ in enumerate(batch_outs):
                        outs.append(0.)
                for i, batch_out in enumerate(batch_outs):
                    if i in stateful_metric_indices:
                        outs[i] = float(batch_out)
                    else:
                        outs[i] += batch_out
            else:
                if step == 0:
                    outs.append(0.)
                outs[0] += batch_outs
            if verbose == 1:
                progbar.update(step + 1)
        for i in range(len(outs)):
            if i not in stateful_metric_indices:
                outs[i] /= steps
    else:
        batches = make_batches(num_samples, batch_size)
        index_array = np.arange(num_samples)
        for batch_index, (batch_start, batch_end) in enumerate(batches):
            batch_ids = index_array[batch_start:batch_end]
            if isinstance(ins[-1], float):
                # Do not slice the training phase flag.
                ins_batch = slice_arrays(ins[:-1], batch_ids) + [ins[-1]]
            else:
                ins_batch = slice_arrays(ins, batch_ids)
            for i in indices_for_conversion_to_dense:
                ins_batch[i] = ins_batch[i].toarray()
    
    seq.add(Conv3D(filters=1, kernel_size=(3, 3, 3),
               activation='sigmoid',
               padding='same', data_format='channels_last'))
seq.compile(loss='binary_crossentropy', optimizer='adadelta')
    
    EXAMPLES = '''
- name: obtain all WAF facts
  aws_waf_facts:
    
        def create_aws_list(self, invalidation_batch):
        aws_list = {}
        aws_list['Quantity'] = len(invalidation_batch)
        aws_list['Items'] = invalidation_batch
        return aws_list
    
    
def find_asgs(conn, module, name=None, tags=None):
    '''
    Args:
        conn (boto3.AutoScaling.Client): Valid Boto3 ASG client.
        name (str): Optional name of the ASG you are looking for.
        tags (dict): Optional dictionary of tags and values to search for.
    
    version_added: '2.2'
author: 'Jose Armesto (@fiunchinho)'
options:
  region:
    description:
      - The AWS region to use.
    required: true
    aliases: ['aws_region', 'ec2_region']
  name_regex:
    description:
      - A Launch Configuration to match
      - It'll be compiled as regex
    required: True
  sort_order:
    description:
      - Order in which to sort results.
    choices: ['ascending', 'descending']
    default: 'ascending'
  limit:
    description:
      - How many results to show.
      - Corresponds to Python slice notation like list[:limit].
requirements:
  - 'python >= 2.6'
  - boto3
extends_documentation_fragment:
    - aws
'''
    
        results = []
    for placement_group in response['PlacementGroups']:
        results.append({
            'name': placement_group['GroupName'],
            'state': placement_group['State'],
            'strategy': placement_group['Strategy'],
        })
    return results
    
        module.exit_json(changed=changed, **result)
    
        if module.params.get('event_source_arn'):
        params['EventSourceArn'] = module.params.get('event_source_arn')
    
        if private_zone:
        changed, result = create_or_update_private(module, client, matching_zones, record)
    else:
        changed, result = create_or_update_public(module, client, matching_zones, record)
    
        state = module.params.get('state')
    
        if backend:
        if state == 'present' or state == 'latest':
            args = ['atomic', 'pull', '--storage=%s' % backend, image]
            rc, out, err = module.run_command(args, check_rc=False)
            if rc < 0:
                module.fail_json(rc=rc, msg=err)
            else:
                out_run = ''
                if started:
                    args = ['atomic', 'run', '--storage=%s' % backend, image]
                    rc, out_run, err = module.run_command(args, check_rc=False)
                    if rc < 0:
                        module.fail_json(rc=rc, msg=err)
    
            try:
            function_app = self.web_client.web_apps.get(
                self.resource_group,
                self.name
            )
        except CloudError:
            pass
    
            print('Iteration %s of %s' % (i, n_iter))
    
    
if __name__ == '__main__':
    from sklearn.linear_model import Lasso, LassoLars
    import matplotlib.pyplot as plt
    
    import gc
import sys
import optparse
from datetime import datetime
import collections
    
        doctest.testmod()

    
    ### OUTPUT ###
# Jack move 5m then stop

    
        # verify that none of the target files exist
    assert not lexists('foo.txt')
    assert not lexists('bar.txt')
    assert not lexists('baz.txt')
    try:
        with open('foo.txt', 'w'):  # Creating the file
            pass
    
        class ClassRegistree(BaseRegisteredClass):
        def __init__(self, *args, **kwargs):
            pass
    
    
# Actions
def print_item(item):
    print(item)
    
        d = prototype.clone()
    a = prototype.clone(value='a-value', category='a')
    b = prototype.clone(value='b-value', is_checked=True)
    dispatcher.register_object('objecta', a)
    dispatcher.register_object('objectb', b)
    dispatcher.register_object('default', d)
    print([{n: p.value} for n, p in dispatcher.get_objects().items()])
    
    ### OUTPUT ###
# ['Student',
#  'Student',
#  'Scientist',
#  'Student',
#  'Scientist',
#  'Student',
#  'Scientist',
#  'Student',
#  'Scientist',
#  'Student',
#  'Scientist',
#  'Professor']
