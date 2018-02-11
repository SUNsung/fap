
        
          Raises:
    tf.errors.InvalidArgumentError: if batch_size or num_steps are too high.
  '''
  with tf.name_scope(name, 'PTBProducer', [raw_data, batch_size, num_steps]):
    raw_data = tf.convert_to_tensor(raw_data, name='raw_data', dtype=tf.int32)
    
    
class CIFAR10InputTest(tf.test.TestCase):
    
    import iris_data
    
      # Small utility function to evaluate a dataset by feeding batches of data to
  # {eval_data} and pulling the results from {eval_predictions}.
  # Saves memory and enables this to run on smaller GPUs.
  def eval_in_batches(data, sess):
    '''Get all predictions for a dataset by running it in small batches.'''
    size = data.shape[0]
    if size < EVAL_BATCH_SIZE:
      raise ValueError('batch size for evals larger than dataset: %d' % size)
    predictions = numpy.ndarray(shape=(size, NUM_LABELS), dtype=numpy.float32)
    for begin in xrange(0, size, EVAL_BATCH_SIZE):
      end = begin + EVAL_BATCH_SIZE
      if end <= size:
        predictions[begin:end, :] = sess.run(
            eval_prediction,
            feed_dict={eval_data: data[begin:end, ...]})
      else:
        batch_predictions = sess.run(
            eval_prediction,
            feed_dict={eval_data: data[-EVAL_BATCH_SIZE:, ...]})
        predictions[begin:, :] = batch_predictions[begin - size:, :]
    return predictions
    
    Forward-backward pass:
Run on Tesla K40c: 480 +/- 48 ms / batch
Run on Titan X:    244 +/- 30 ms / batch
'''
from __future__ import absolute_import
from __future__ import division
from __future__ import print_function
    
                # is there a channel override for token type?
            try:
                overrideChannel = self.channelOverrideMap[t.type]
                
            except KeyError:
                # no override for this type
                pass
            
            else:
                if overrideChannel == self.channel:
                    t.channel = overrideChannel
                else:
                    discard = True
            
            if not discard:
                t.index = index
                self.tokens.append(t)
                index += 1
    
    from alembic import op
import sqlalchemy as sa
    
    
def downgrade():
    op.drop_table('logs')

    
    Revision ID: 3c3ffe173e4f
Revises: ad82a75afd82
Create Date: 2016-08-18 14:06:28.784699