
        
        # write out the dataset
write_datasets(FLAGS.save_dir, FLAGS.datafile_name, datasets)
print ('Saved to ', os.path.join(FLAGS.save_dir,
                                 FLAGS.datafile_name + '_' + dataset_name))

    
    rnn_a = generate_rnn(rnn_rngs[0], N, FLAGS.g, FLAGS.tau, FLAGS.dt,
                     FLAGS.max_firing_rate)
rnn_b = generate_rnn(rnn_rngs[1], N, FLAGS.g, FLAGS.tau, FLAGS.dt,
                     FLAGS.max_firing_rate)
rnns = [rnn_a, rnn_b]
    
      def __init__(self, filename):
    '''Initialize vocabulary.
    
        # TODO: decoder/encoder should accept cls? Otherwise, subclassing
    # JSONObjectWithFields is tricky...
    header_cls = Header
    header = jose.Field(
        'header', omitempty=True, default=header_cls(),
        decoder=header_cls.from_json)
    
    
def get_file_path(vhost_path):
    '''Get file path from augeas_vhost_path.
    
    logger = logging.getLogger(__name__)