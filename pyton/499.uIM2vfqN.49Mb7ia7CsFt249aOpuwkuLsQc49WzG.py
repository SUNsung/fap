
        
          def setUp(self):
    FLAGS.train_data = os.path.join(self.get_temp_dir(), 'test-text.txt')
    FLAGS.eval_data = os.path.join(self.get_temp_dir(), 'eval-text.txt')
    FLAGS.save_path = self.get_temp_dir()
    with open(FLAGS.train_data, 'w') as f:
      f.write(
          '''alice was beginning to get very tired of sitting by her sister on
          the bank, and of having nothing to do: once or twice she had peeped
          into the book her sister was reading, but it had no pictures or
          conversations in it, 'and what is the use of a book,' thought alice
          'without pictures or conversations?' So she was considering in her own
          mind (as well as she could, for the hot day made her feel very sleepy
          and stupid), whether the pleasure of making a daisy-chain would be
          worth the trouble of getting up and picking the daisies, when suddenly
          a White rabbit with pink eyes ran close by her.\n''')
      with open(FLAGS.eval_data, 'w') as f:
        f.write('alice she rabbit once\n')
    
      @tf.test.mock.patch.dict(premade_estimator.__dict__,
                           {'load_data': four_lines_data})
  def test_premade_estimator(self):
    premade_estimator.main([None, '--train_steps=1'])
    
    py_binary(
    name = 'translate',
    srcs = [
        'translate.py',
    ],
    srcs_version = 'PY2AND3',
    deps = [
        ':data_utils',
        ':seq2seq_model',
        '//tensorflow:tensorflow_py',
    ],
)
    
        # Embedding dimension.
    self.emb_dim = FLAGS.embedding_size
    
    
def fake_data(num_images):
  '''Generate a fake dataset that matches the dimensions of MNIST.'''
  data = numpy.ndarray(
      shape=(num_images, IMAGE_SIZE, IMAGE_SIZE, NUM_CHANNELS),
      dtype=numpy.float32)
  labels = numpy.zeros(shape=(num_images,), dtype=numpy.int64)
  for image in xrange(num_images):
    label = image % 2
    data[image, :, :, 0] = label - 0.5
    labels[image] = label
  return data, labels
    
          # Encoder inputs are padded and then reversed.
      encoder_pad = [data_utils.PAD_ID] * (encoder_size - len(encoder_input))
      encoder_inputs.append(list(reversed(encoder_input + encoder_pad)))
    
        ordered_state = collections.OrderedDict(
        sorted(state.items(), key=lambda t: t[0]))
    # For class instance without __repr__, some special cares are required.
    # Otherwise, the object address will be used.
    if '_cluster_spec' in ordered_state:
      ordered_state['_cluster_spec'] = collections.OrderedDict(
         sorted(ordered_state['_cluster_spec'].as_dict().items(),
                key=lambda t: t[0])
      )
    return ', '.join(
        '%s=%r' % (k, v) for (k, v) in six.iteritems(ordered_state)) 
    
    from alembic import op
import sqlalchemy as sa
    
    '''
    
    # revision identifiers, used by Alembic.
revision = '2591d77e9831'
down_revision = '12d55656cbca'
    
    
class Slice(Base):
    '''Declarative class to do query in upgrade'''
    __tablename__ = 'slices'
    id = Column(Integer, primary_key=True)
    datasource_id = Column(Integer)
    druid_datasource_id = Column(Integer)
    table_id = Column(Integer)
    datasource_type = Column(String(200))
    
    from alembic import op
import sqlalchemy as sa
    
    
def upgrade():
    op.add_column('dashboards', sa.Column('json_metadata', sa.Text(), nullable=True))
    
    Revision ID: 7dbf98566af7
Revises: 8e80a26a31db
Create Date: 2016-01-17 22:00:23.640788