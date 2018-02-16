
        
            # Train the Model.
    classifier.train(
        input_fn=lambda:iris_data.train_input_fn(train_x, train_y,
                                                 args.batch_size),
        steps=args.train_steps)
    
        # The text file for eval.
    self.eval_data = FLAGS.eval_data
    
    
tf.app.flags.DEFINE_float('learning_rate', 0.5, 'Learning rate.')
tf.app.flags.DEFINE_float('learning_rate_decay_factor', 0.99,
                          'Learning rate decays by this much.')
tf.app.flags.DEFINE_float('max_gradient_norm', 5.0,
                          'Clip gradients to this norm.')
tf.app.flags.DEFINE_integer('batch_size', 64,
                            'Batch size to use during training.')
tf.app.flags.DEFINE_integer('size', 1024, 'Size of each model layer.')
tf.app.flags.DEFINE_integer('num_layers', 3, 'Number of layers in the model.')
tf.app.flags.DEFINE_integer('from_vocab_size', 40000, 'English vocabulary size.')
tf.app.flags.DEFINE_integer('to_vocab_size', 40000, 'French vocabulary size.')
tf.app.flags.DEFINE_string('data_dir', '/tmp', 'Data directory')
tf.app.flags.DEFINE_string('train_dir', '/tmp', 'Training directory.')
tf.app.flags.DEFINE_string('from_train_data', None, 'Training data.')
tf.app.flags.DEFINE_string('to_train_data', None, 'Training data.')
tf.app.flags.DEFINE_string('from_dev_data', None, 'Training data.')
tf.app.flags.DEFINE_string('to_dev_data', None, 'Training data.')
tf.app.flags.DEFINE_integer('max_train_data_size', 0,
                            'Limit on the size of training data (0: no limit).')
tf.app.flags.DEFINE_integer('steps_per_checkpoint', 200,
                            'How many training steps to do per checkpoint.')
tf.app.flags.DEFINE_boolean('decode', False,
                            'Set to True for interactive decoding.')
tf.app.flags.DEFINE_boolean('self_test', False,
                            'Run a self-test if this is set to True.')
tf.app.flags.DEFINE_boolean('use_fp16', False,
                            'Train using fp16 instead of fp32.')
    
      if ps_strategy is None:
    ps_strategy = device_setter._RoundRobinStrategy(num_devices)
  if not six.callable(ps_strategy):
    raise TypeError('ps_strategy must be callable')
    
        def syntax(self):
        '''
        Command syntax (preferably one-line). Do not include command name.
        '''
        return ''
    
            for spidername in args or spider_loader.list():
            spidercls = spider_loader.load(spidername)
            spidercls.start_requests = lambda s: conman.from_spider(s, result)
    
    
def sanitize_module_name(module_name):
    '''Sanitize the given module name, by replacing dashes and points
    with underscores and prefixing it with a letter if it doesn't start
    with one
    '''
    module_name = module_name.replace('-', '_').replace('.', '_')
    if module_name[0] not in string.ascii_letters:
        module_name = 'a' + module_name
    return module_name
    
    '''
    
    Revision ID: 2591d77e9831
Revises: 12d55656cbca
Create Date: 2015-12-15 17:02:45.128709
    
    
class Slice(Base):
    '''Declarative class to do query in upgrade'''
    __tablename__ = 'slices'
    id = Column(Integer, primary_key=True)
    datasource_id = Column(Integer)
    druid_datasource_id = Column(Integer)
    table_id = Column(Integer)
    datasource_type = Column(String(200))
    
    '''
    
    '''
    
    # revision identifiers, used by Alembic.
revision = '763d4b211ec9'
down_revision = 'd2424a248d63'
    
    def downgrade():
    op.drop_column('slices', 'description')
