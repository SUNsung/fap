
        
          def setUp(self):
    FLAGS.train_data = os.path.join(self.get_temp_dir() + 'test-text.txt')
    FLAGS.eval_data = os.path.join(self.get_temp_dir() + 'eval-text.txt')
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
    
    from __future__ import absolute_import
from __future__ import division
from __future__ import print_function
    
        # Write
    lm_seq_ser = lm_seq.seq.SerializeToString()
    seq_ae_seq_ser = seq_ae_seq.seq.SerializeToString()
    writer_lm_all.write(lm_seq_ser)
    writer_seq_ae_all.write(seq_ae_seq_ser)
    if not doc.is_validation:
      writer_lm.write(lm_seq_ser)
      writer_rev_lm.write(rev_lm_seq.seq.SerializeToString())
      writer_seq_ae.write(seq_ae_seq_ser)
    
    
def _build_random_sequence(vocab_ids):
  seq_len = random.randint(10, 200)
  ids = vocab_ids.values()
  seq = data.SequenceWrapper()
  for token_id in [random.choice(ids) for _ in range(seq_len)]:
    seq.add_timestep().set_token(token_id)
  return seq
    
    
if __name__ == '__main__':
  tf.app.run()

    
        # Loads mapping from string UID to integer node ID.
    node_id_to_uid = {}
    proto_as_ascii = tf.gfile.GFile(label_lookup_path).readlines()
    for line in proto_as_ascii:
      if line.startswith('  target_class:'):
        target_class = int(line.split(': ')[1])
      if line.startswith('  target_class_string:'):
        target_class_string = line.split(': ')[1]
        node_id_to_uid[target_class] = target_class_string[1:-2]
    
        ```python
        model = Sequential()
        model.add(Permute((2, 1), input_shape=(10, 64)))
        # now: model.output_shape == (None, 64, 10)
        # note: `None` is the batch dimension
    ```
    
        @property
    def use_bias(self):
        return self.cell.use_bias
    
    # this will contain our generated image
if K.image_data_format() == 'channels_first':
    combination_image = K.placeholder((1, 3, img_nrows, img_ncols))
else:
    combination_image = K.placeholder((1, img_nrows, img_ncols, 3))
    
            # Test equivalence of convert_dense_weights_data_format
        out1 = model1.predict(x)
        layer_utils.convert_dense_weights_data_format(model1.layers[2], prev_shape, target_data_format)
        for (src, dst) in zip(model1.layers, model2.layers):
            dst.set_weights(src.get_weights())
        out2 = model2.predict(transpose(x))
    
    question = layers.Input(shape=(query_maxlen,), dtype='int32')
encoded_question = layers.Embedding(vocab_size, EMBED_HIDDEN_SIZE)(question)
encoded_question = layers.Dropout(0.3)(encoded_question)
encoded_question = RNN(EMBED_HIDDEN_SIZE)(encoded_question)
encoded_question = layers.RepeatVector(story_maxlen)(encoded_question)
    
        print('int:')
    print('calculation time: %fs' % (end_calc-start_calc))
    print('conversion time: %fs\n\n' % (end_conv-start_conv))
    
    >>> from nntplib import NNTP
>>> s = NNTP('news')
>>> resp, count, first, last, name = s.group('comp.lang.python')
>>> print('Group', name, 'has', count, 'articles, range', first, 'to', last)
Group comp.lang.python has 51 articles, range 5770 to 5821
>>> resp, subs = s.xhdr('subject', '{0}-{1}'.format(first, last))
>>> resp = s.quit()
>>>
    
        print('ADDN_LINK_FILES=', end=' ')
    for addn in vars['addn_link']: print(''%s'' % (addn), end=' ')
    print() ; print()
    
        def _create_infile(self):
        infile = support.TESTFN
        with open(infile, 'w') as fp:
            self.addCleanup(os.remove, infile)
            fp.write(self.data)
        return infile
    
            self.assertEqual(x[:], a.tolist()[1:])
        with self.assertRaises(ValueError):
            c_int.from_buffer(a, -1)
        with self.assertRaises(ValueError):
            (c_int * 16).from_buffer(a, sizeof(c_int))
        with self.assertRaises(ValueError):
            (c_int * 1).from_buffer(a, 16 * sizeof(c_int))
    
            # This is no longer true, now that WINFUNCTYPE caches created types internally.
        ## # CFuncPtr subclasses are compared by identity, so this raises a TypeError:
        ## self.assertRaises(TypeError, setattr, wndclass,
        ##                  'lpfnWndProc', WNDPROC_2(wndproc))
        # instead:
    
            # to not leak references, we must clean _pointer_type_cache
        from ctypes import _pointer_type_cache
        del _pointer_type_cache[id(P)]
    
            total_count = 0
        translated_count = 0
        with open(fn) as f:
            catalog = read_po(f)
            for msg in catalog:
                total_count += 1
                if is_translated(msg):
                    translated_count += 1
        pct = translated_count / float(total_count) * 100
        click.echo('% -7s % 2d%%' % (
            locale,
            pct,
        ), err=True)
        if pct >= MINIMUM and locale not in rv:
            rv.append(locale)
    with open(catalog_file, 'w') as f:
        json.dump({
            'supported_locales': sorted(rv)
        }, f, indent=2)
        f.write('\n')