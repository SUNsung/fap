
        
        
def load_word_embeddings(word_embeddings_dir, word_embeddings_file):
  '''Loads pretrained word embeddings from a binary file and returns the matrix.
    
      T, N = vals_txn.shape
  if n_to_plot > N:
    n_to_plot = N
    
    
def read_data(data_fname):
  ''' Read saved data in HDF5 format.
    
    import numpy as np
import tensorflow as tf
    
        self._id_to_word = []
    self._word_to_id = {}
    self._unk = -1
    self._bos = -1
    self._eos = -1
    
          if len(example) > num_steps:
        final_x = example[:num_steps]
        final_y = example[1:(num_steps + 1)]
        w[i] = 1
    
      samples = []
  for sequence_id in xrange(min(len(arr), max_num_to_print)):
    sample = []
    for i, index in enumerate(arr[sequence_id, :]):
      if p[sequence_id, i] == 1:
        sample.append(str(id_to_word[index]))
      else:
        sample.append('*' + str(id_to_word[index]))
    buffer_str = ' '.join(sample)
    samples.append(buffer_str)
  return samples
    
        # rnn_vd derived from the same code base as rnn_zaremba.
    elif (FLAGS.discriminator_model == 'rnn_zaremba' or
          FLAGS.discriminator_model == 'rnn_vd'):
      dis_variable_maps = variable_mapping.rnn_zaremba(hparams, model='dis')
      dis_init_saver = tf.train.Saver(var_list=dis_variable_maps)
      init_savers['dis_init_saver'] = dis_init_saver
    
    
DOCUMENTATION = '''
---
module: elasticache_snapshot
short_description: Manage cache snapshots in Amazon Elasticache.
description:
  - Manage cache snapshots in Amazon Elasticache.
  - Returns information about the specified snapshot.
version_added: '2.3'
author: 'Sloane Hertel (@s-hertel)'
extends_documentation_fragment:
  - aws
  - ec2
requirements: [ boto3, botocore ]
options:
  name:
    description:
      - The name of the snapshot we want to create, copy, delete
    required: yes
  state:
    description:
      - Actions that will create, destroy, or copy a snapshot.
    choices: ['present', 'absent', 'copy']
  replication_id:
    description:
      - The name of the existing replication group to make the snapshot.
  cluster_id:
    description:
      - The name of an existing cache cluster in the replication group to make the snapshot.
  target:
    description:
      - The name of a snapshot copy
  bucket:
    description:
      - The s3 bucket to which the snapshot is exported
'''
    
            elif desired_state == 'offline':
            if current_state == HOST_ABSENT:
                self.fail(msg='absent host cannot be placed in offline state')
            elif current_state in [HOST_STATES.MONITORED, HOST_STATES.DISABLED]:
                if one.host.status(host.ID, HOST_STATUS.OFFLINE):
                    self.wait_for_host_state(host, [HOST_STATES.OFFLINE])
                    result['changed'] = True
                else:
                    self.fail(msg='could not set host offline')
            elif current_state in [HOST_STATES.OFFLINE]:
                pass
            else:
                self.fail(msg='unknown host state %s, cowardly refusing to change state to offline' % current_state_name)
    
        def hbacrule_mod(self, name, item):
        return self._post_json(method='hbacrule_mod', name=name, item=item)
    
        module = AnsibleModule(
        argument_spec=dict(
            component=dict(required=True, aliases=['name']),
            version=dict(required=True),
            token=dict(required=True, no_log=True),
            state=dict(required=True, choices=['started', 'finished', 'failed']),
            hosts=dict(required=False, default=[socket.gethostname()], aliases=['host']),
            env=dict(required=False),
            owner=dict(required=False),
            description=dict(required=False),
            message=dict(required=False),
            source_system=dict(required=False, default='ansible'),
            validate_certs=dict(default='yes', type='bool'),
            url=dict(required=False, default='https://api.bigpanda.io'),
        ),
        supports_check_mode=True,
    )
    
    from ansible.module_utils.basic import AnsibleModule
from ansible.module_utils.six.moves.urllib.parse import urlencode
from ansible.module_utils._text import to_native
from ansible.module_utils.urls import fetch_url
    
    # Apply monkey patches to fix issues in external libraries
from . import _monkeypatches
del _monkeypatches
    
        def long_desc(self):
        '''A long description of the command. Return short description when not
        available. It cannot contain newlines, since contents will be formatted
        by optparser which removes newlines and wraps text.
        '''
        return self.short_desc()
    
            spidercls = DefaultSpider
        spider_loader = self.crawler_process.spider_loader
        if opts.spider:
            spidercls = spider_loader.load(opts.spider)
        else:
            spidercls = spidercls_for_request(spider_loader, request, spidercls)
        self.crawler_process.crawl(spidercls, start_requests=lambda: [request])
        self.crawler_process.start()

    
        def test_simple(self):
        def f(p):
            pass
        f_ident = ident(f)
        self.check_events(f, [(1, 'call', f_ident),
                              (1, 'return', f_ident),
                              ])
    
    
def _check_location(package):
    if package.__spec__.origin is None or not package.__spec__.has_location:
        raise FileNotFoundError(f'Package has no location {package!r}')
    
    import os
import email
import mimetypes
    
    # register the Foo class; make `g()` and `_h()` accessible via proxy
MyManager.register('Foo2', Foo, exposed=('g', '_h'))
    
    def worker(input, output):
    for func, args in iter(input.get, 'STOP'):
        result = calculate(func, args)
        output.put(result)
    
            #Creating directory title page for current directory
        with open('dir_title.html', 'w') as os_html:
            os_html.write(header + dir_title)
        
        group.append(HTML('dir_title.html').render())