
        
              # If the batch is too small, add a few other examples
      if len(batch_indices) < self.hparams.batch_size:
        batch_indices += [0] * (self.hparams.batch_size-len(batch_indices))
    
      if use_json:
    the_file = open(data_fname,'w')
    json.dump(data_dict, the_file)
    the_file.close()
  else:
    try:
      with h5py.File(data_fname, 'w') as hf:
        for k, v in data_dict.items():
          clean_k = k.replace('/', '_')
          if clean_k is not k:
            print('Warning: saving variable with name: ', k, ' as ', clean_k)
          else:
            print('Saving variable with name: ', clean_k)
          hf.create_dataset(clean_k, data=v, compression=compression)
    except IOError:
      print('Cannot open %s for writing.', data_fname)
      raise
    
        # Critic loss calculated from the estimated value function \hat{V}(s)
    # versus the true value function V*(s).
    critic_loss = create_critic_loss(cumulative_rewards, estimated_values,
                                     present)
    
    from __future__ import absolute_import
from __future__ import division
from __future__ import print_function
    
    from __future__ import absolute_import, division, print_function
__metaclass__ = type
    
        if not HAS_GOOGLE_CLOUD_SPANNER:
        module.fail_json(msg='Please install google-cloud-spanner.')
    
    from ansible.module_utils.basic import AnsibleModule
from ansible.module_utils.vca import VcaError, vca_argument_spec, vca_login
    
    
DOCUMENTATION = '''
---
module: group_by
short_description: Create Ansible groups based on facts
description:
  - Use facts to create ad-hoc groups that can be used later in a playbook.
  - This module is also supported for Windows targets.
version_added: '0.9'
options:
  key:
    description:
    - The variables whose values will be used as groups
    required: true
  parents:
    description:
    - The list of the parent groups
    required: false
    default: 'all'
    version_added: '2.4'
author: 'Jeroen Hoekx (@jhoekx)'
notes:
  - Spaces in group names are converted to dashes '-'.
  - This module is also supported for Windows targets.
'''