
        
          Returns:
    mask1: mask for first sentence
    mask2: mask for second sentence
  '''
  mask1_start, mask2_start = [], []
  while sent1[0] == sent2[0]:
    sent1 = sent1[1:]
    sent2 = sent2[1:]
    mask1_start.append(0.)
    mask2_start.append(0.)
    
    
def ptb_raw_data(data_path=None):
  '''Load PTB raw data from data directory 'data_path'.
  Reads PTB text files, converts strings to integer ids,
  and performs mini-batching of the inputs.
  The PTB dataset comes from Tomas Mikolov's webpage:
  http://www.fit.vutbr.cz/~imikolov/rnnlm/simple-examples.tgz
  Args:
    data_path: string path to the directory where simple-examples.tgz has
      been extracted.
  Returns:
    tuple (train_data, valid_data, test_data, vocabulary)
    where each of the data objects can be passed to PTBIterator.
  '''
    
    
def percent_correct(real_sequence, fake_sequences):
  '''Determine the percent of tokens correctly generated within a batch.'''
  identical = 0.
  for fake_sequence in fake_sequences:
    for real, fake in zip(real_sequence, fake_sequence):
      if real == fake:
        identical += 1.
  return identical / recursive_length(fake_sequences)

    
        elif FLAGS.discriminator_model == 'seq2seq_vd':
      load_ckpt = tf.train.latest_checkpoint(FLAGS.language_model_ckpt_dir)
      print('Restoring Discriminator from %s.' % load_ckpt)
      tf.logging.info('Restoring Discriminator from %s.' % load_ckpt)
      dis_encoder_init_saver = init_savers['dis_encoder_init_saver']
      dis_decoder_init_saver = init_savers['dis_decoder_init_saver']
      dis_encoder_init_saver.restore(sess, load_ckpt)
      dis_decoder_init_saver.restore(sess, load_ckpt)
    
        def test_samestat(self):
        test_fn1 = support.TESTFN
        test_fn2 = support.TESTFN + '2'
        self.addCleanup(support.unlink, test_fn1)
        self.addCleanup(support.unlink, test_fn2)
    
        def check_input(self, code, expected):
        with tempfile.NamedTemporaryFile('wb+') as stdin:
            sep = os.linesep.encode('ASCII')
            stdin.write(sep.join((b'abc', b'def')))
            stdin.flush()
            stdin.seek(0)
            with subprocess.Popen(
                (sys.executable, '-c', code),
                stdin=stdin, stdout=subprocess.PIPE) as proc:
                stdout, stderr = proc.communicate()
        self.assertEqual(stdout.rstrip(), expected)
    
        def persistent_id(self, obj):
        # Instead of pickling MemoRecord as a regular class instance, we emit a
        # persistent ID.
        if isinstance(obj, MemoRecord):
            # Here, our persistent ID is simply a tuple, containing a tag and a
            # key, which refers to a specific record in the database.
            return ('MemoRecord', obj.key)
        else:
            # If obj does not have a persistent ID, return None. This means obj
            # needs to be pickled as usual.
            return None
    
    # We can extract the richest alternative in order to display it:
richest = msg.get_body()
partfiles = {}
if richest['content-type'].maintype == 'text':
    if richest['content-type'].subtype == 'plain':
        for line in richest.get_content().splitlines():
            print(line)
        sys.exit()
    elif richest['content-type'].subtype == 'html':
        body = richest
    else:
        print('Don't know how to display {}'.format(richest.get_content_type()))
        sys.exit()
elif richest['content-type'].content_type == 'multipart/related':
    body = richest.get_body(preferencelist=('html'))
    for part in richest.iter_attachments():
        fn = part.get_filename()
        if fn:
            extension = os.path.splitext(part.get_filename())[1]
        else:
            extension = mimetypes.guess_extension(part.get_content_type())
        with tempfile.NamedTemporaryFile(suffix=extension, delete=False) as f:
            f.write(part.get_content())
            # again strip the <> to go from email form of cid to html form.
            partfiles[part['content-id'][1:-1]] = f.name
else:
    print('Don't know how to display {}'.format(richest.get_content_type()))
    sys.exit()
with tempfile.NamedTemporaryFile(mode='w', delete=False) as f:
    # The magic_html_parser has to rewrite the href='cid:....' attributes to
    # point to the filenames in partfiles.  It also has to do a safety-sanitize
    # of the html.  It could be written using html.parser.
    f.write(magic_html_parser(body.get_content(), partfiles))
webbrowser.open(f.name)
os.remove(f.name)
for fn in partfiles.values():
    os.remove(fn)
    
        with open(args.msgfile, 'rb') as fp:
        msg = email.message_from_binary_file(fp, policy=default)