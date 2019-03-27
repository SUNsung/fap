
        
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
    
        states_t_bxn, outputs_t_bxn = sess.run([states_t, outputs_t],
                                           feed_dict=feed_dict)
    states_nxt = np.transpose(np.squeeze(np.asarray(states_t_bxn)))
    outputs_t_bxn = np.squeeze(np.asarray(outputs_t_bxn))
    r_sxt = np.dot(P_nxn, states_nxt)
    
    
def spikify_data(data_e, rng, dt=1.0, max_firing_rate=100):
  ''' Apply spikes to a continuous dataset whose values are between 0.0 and 1.0
  Args:
    data_e: nexamples length list of NxT trials
    dt: how often the data are sampled
    max_firing_rate: the firing rate that is associated with a value of 1.0
  Returns:
    spikified_e: a list of length b of the data represented as spikes,
    sampled from the underlying poisson process.
    '''
    
      Returns:
    TensorFlow session and tensors dict.
  '''
  with tf.Graph().as_default():
    sys.stderr.write('Recovering graph.\n')
    with tf.gfile.FastGFile(gd_file, 'r') as f:
      s = f.read().decode()
      gd = tf.GraphDef()
      text_format.Merge(s, gd)
    
      return [
      final_gen_objective, log_probs, rewards, advantages, baselines,
      maintain_averages_op, critic_loss, cumulative_rewards
  ]
    
          # if time > maxlen, return all true vector
      done = tf.cond(
          tf.greater(time, maximum_length),
          lambda: tf.ones([
              batch_size,], dtype=tf.bool), lambda: done)
      return (done, cell_state, next_input, cell_output, context_state)
    
    # List all EIP addresses for a VM.
- ec2_eip_facts:
    filters:
       instance-id: i-123456789
  register: my_vm_eips
    
        '''Get an elasticache connection'''
    try:
        conn = connect_to_region(region_name=region, **aws_connect_kwargs)
    except boto.exception.NoAuthHandlerFound as e:
        module.fail_json(msg=e.message)
    
    options:
    name:
        description:
            - Hostname of the machine to manage.
        required: true
    state:
        description:
            - Takes the host to the desired lifecycle state.
            - If C(absent) the host will be deleted from the cluster.
            - If C(present) the host will be created in the cluster (includes C(enabled), C(disabled) and C(offline) states).
            - If C(enabled) the host is fully operational.
            - C(disabled), e.g. to perform maintenance operations.
            - C(offline), host is totally offline.
        choices:
            - absent
            - present
            - enabled
            - disabled
            - offline
        default: present
    im_mad_name:
        description:
            - The name of the information manager, this values are taken from the oned.conf with the tag name IM_MAD (name)
        default: kvm
    vmm_mad_name:
        description:
            - The name of the virtual machine manager mad name, this values are taken from the oned.conf with the tag name VM_MAD (name)
        default: kvm
    cluster_id:
        description:
            - The cluster ID.
        default: 0
    cluster_name:
        description:
            - The cluster specified by name.
    labels:
        description:
            - The labels for this host.
    template:
        description:
            - The template or attribute changes to merge into the host template.
        aliases:
            - attributes
    
    
if __name__ == '__main__':
    main()

    
    
DOCUMENTATION = '''
---
module: ipa_dnszone
author: Fran Fitzpatrick (@fxfitz)
short_description: Manage FreeIPA DNS Zones
description:
- Add and delete an IPA DNS Zones using IPA API
options:
  zone_name:
    description:
    - The DNS zone name to which needs to be managed.
    required: true
  state:
    description: State to ensure
    required: false
    default: present
    choices: ['present', 'absent']
extends_documentation_fragment: ipa.documentation
version_added: '2.5'
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
    
    RETURN = '''# '''
    
    from __future__ import absolute_import, division, print_function
__metaclass__ = type
    
        params = {}
    params['message'] = msg
    if annotated_by:
        params['annotated_by'] = annotated_by
    if level:
        params['level'] = level
    if instance_id:
        params['instance_id'] = instance_id
    if event_epoch:
        params['event_epoch'] = event_epoch
    
    
def plot_batch_times(all_times, n_features, all_batch_sizes, data):
    plt.figure()
    plot_results(all_batch_sizes, all_times['pca'], label='PCA')
    plot_results(all_batch_sizes, all_times['ipca'], label='IncrementalPCA')
    plt.legend(loc='lower left')
    plt.suptitle('Algorithm runtime vs. batch_size for n_components %i\n \
                 LFW, size %i x %i' % (
                 n_features, data.shape[0], data.shape[1]))
    plt.xlabel('Batch size')
    plt.ylabel('Time (seconds)')
    
    n_samples = np.logspace(.5, 3, 9)
n_features = np.logspace(1, 3.5, 7)
N_samples, N_features = np.meshgrid(n_samples,
                                    n_features)
scikits_time = np.zeros(N_samples.shape)
scipy_time = np.zeros(N_samples.shape)
    
    '''
# Author: Olivier Grisel <olivier.grisel@ensta.org>
# License: Simplified BSD
    
    
def plot_influence(conf, mse_values, prediction_times, complexities):
    '''
    Plot influence of model complexity on both accuracy and latency.
    '''
    plt.figure(figsize=(12, 6))
    host = host_subplot(111, axes_class=Axes)
    plt.subplots_adjust(right=0.75)
    par1 = host.twinx()
    host.set_xlabel('Model Complexity (%s)' % conf['complexity_label'])
    y1_label = conf['prediction_performance_label']
    y2_label = 'Time (s)'
    host.set_ylabel(y1_label)
    par1.set_ylabel(y2_label)
    p1, = host.plot(complexities, mse_values, 'b-', label='prediction error')
    p2, = par1.plot(complexities, prediction_times, 'r-',
                    label='latency')
    host.legend(loc='upper right')
    host.axis['left'].label.set_color(p1.get_color())
    par1.axis['right'].label.set_color(p2.get_color())
    plt.title('Influence of Model Complexity - %s' % conf['estimator'].__name__)
    plt.show()
    
    The data is generated with the ``make_checkerboard`` function, then
shuffled and passed to the Spectral Biclustering algorithm. The rows
and columns of the shuffled matrix are rearranged to show the
biclusters found by the algorithm.
    
    import numpy as np
from matplotlib import pyplot as plt
    
    # The data that we are interested in is made of 8x8 images of digits, let's
# have a look at the first 4 images, stored in the `images` attribute of the
# dataset.  If we were working from image files, we could load them using
# matplotlib.pyplot.imread.  Note that each image must have the same size. For these
# images, we know which digit they represent: it is given in the 'target' of
# the dataset.
images_and_labels = list(zip(digits.images, digits.target))
for index, (image, label) in enumerate(images_and_labels[:4]):
    plt.subplot(2, 4, index + 1)
    plt.axis('off')
    plt.imshow(image, cmap=plt.cm.gray_r, interpolation='nearest')
    plt.title('Training: %i' % label)
    
                plt.subplots_adjust(bottom=0, top=.89, wspace=0,
                                left=0, right=1)
            plt.suptitle('n_cluster=%i, connectivity=%r' %
                         (n_clusters, connectivity is not None), size=17)
    
        ax.scatter(X[:, 3], X[:, 0], X[:, 2],
               c=labels.astype(np.float), edgecolor='k')
    
    plt.subplot(224)
plt.scatter(X_filtered[:, 0], X_filtered[:, 1], c=y_pred)
plt.title('Unevenly Sized Blobs')