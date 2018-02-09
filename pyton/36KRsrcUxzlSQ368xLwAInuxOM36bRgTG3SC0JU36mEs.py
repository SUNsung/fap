
        
            with app.app_context():
        init_db()
        yield app
    
        # now unfollow and check if that worked
    rv = client.get('/foo/unfollow', follow_redirects=True)
    assert b'You are no longer following &#34;foo&#34;' in rv.data
    rv = client.get('/')
    assert b'the message by foo' not in rv.data
    assert b'the message by bar' in rv.data

    
        try:
        return json.dumps(result, sort_keys=True, indent=indent, ensure_ascii=False)
    except UnicodeDecodeError:
        return json.dumps(result, sort_keys=True, indent=indent)

    
      def testPtbRawData(self):
    tmpdir = tf.test.get_temp_dir()
    for suffix in 'train', 'valid', 'test':
      filename = os.path.join(tmpdir, 'ptb.%s.txt' % suffix)
      with tf.gfile.GFile(filename, 'w') as fh:
        fh.write(self._string_data)
    # Smoke test
    output = reader.ptb_raw_data(tmpdir)
    self.assertEqual(len(output), 4)
    
        optimizer = tf.train.AdagradOptimizer(learning_rate=0.1)
    train_op = optimizer.minimize(loss, global_step=tf.train.get_global_step())
    return tf.estimator.EstimatorSpec(mode, loss=loss, train_op=train_op)
    
        # class_ids will be the model prediction for the class (Iris flower type)
    # The output node with the highest value is our prediction
    predictions = { 'class_ids': tf.argmax(input=logits, axis=1) }
    
    Forward-backward pass:
Run on Tesla K40c: 480 +/- 48 ms / batch
Run on Titan X:    244 +/- 30 ms / batch
'''
from __future__ import absolute_import
from __future__ import division
from __future__ import print_function
    
        def run(self, args, opts):
        if len(args) < 1:
            raise UsageError()
        elif len(args) > 1:
            raise UsageError('running 'scrapy crawl' with more than one spider is no longer supported')
        spname = args[0]
    
        forbidden_extensions = ['html', 'htm'] if results.nohtml else []