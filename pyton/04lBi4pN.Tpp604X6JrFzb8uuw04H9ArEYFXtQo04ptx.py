
        
          dim = embeddings.shape[1]
    
    
def all_plot(d, full_name='', exclude='', nspaces=0):
  '''Recursively plot all the LFADS model parameters in the nested
  dictionary.'''
  for k, v in d.iteritems():
    this_name = full_name+'/'+k
    if isinstance(v, dict):
      all_plot(v, full_name=this_name, exclude=exclude, nspaces=nspaces+4)
    else:
      if exclude == '' or exclude not in this_name:
        _plot_item(v, name=k, full_name=full_name+'/'+k, nspaces=nspaces+4)
    
      Args:
    datasets: The dictionary of dataset structures.
    npcs:  The number of pcs for each, basically like lfads factors.
    nsamples (optional): Number of samples to take for each dataset.
    ntime (optional): Number of time steps to take in each sample.
    
    
def parse_commonsense_reasoning_test(test_data_name):
  '''Read JSON test data.'''
  with tf.gfile.Open(os.path.join(
      FLAGS.data_dir, 'commonsense_test',
      '{}.json'.format(test_data_name)), 'r') as f:
    data = json.load(f)
    
    EOS_INDEX = 0
    
    Launch command:
  python generate_samples.py
  --data_dir=/tmp/data/imdb  --data_set=imdb
  --batch_size=256 --sequence_length=20 --base_directory=/tmp/imdb
  --hparams='gen_rnn_size=650,dis_rnn_size=650,gen_num_layers=2,
  gen_vd_keep_prob=1.0' --generator_model=seq2seq_vd
  --discriminator_model=seq2seq_vd --is_present_rate=0.5
  --maskgan_ckpt=/tmp/model.ckpt-45494
  --seq2seq_share_embedding=True --dis_share_embedding=True
  --attention_option=luong --mask_strategy=contiguous --baseline_method=critic
  --number_epochs=4
'''
    
    
def convert_to_indices(sequences):
  '''Convert a list of size [batch_size, sequence_length, vocab_size] to
  a list of size [batch_size, sequence_length] where the vocab element is
  denoted by the index.
  '''
  batch_of_indices = []
    
    
      '''
      if attention_option == 'bahdanau':
        # transform query
        query = tf.matmul(query, query_w)
    
        y_train = np.reshape(y_train, (len(y_train), 1))
    y_test = np.reshape(y_test, (len(y_test), 1))
    
    encoder_inputs = model.input[0]   # input_1
encoder_outputs, state_h_enc, state_c_enc = model.layers[2].output   # lstm_1
encoder_states = [state_h_enc, state_c_enc]
encoder_model = Model(encoder_inputs, encoder_states)
    
    # Display the 1st 8 corrupted and denoised images
rows, cols = 10, 30
num = rows * cols
imgs = np.concatenate([x_test[:num], x_test_noisy[:num], x_decoded[:num]])
imgs = imgs.reshape((rows * 3, cols, image_size, image_size))
imgs = np.vstack(np.split(imgs, rows, axis=1))
imgs = imgs.reshape((rows * 3, -1, image_size, image_size))
imgs = np.vstack([np.hstack(i) for i in imgs])
imgs = (imgs * 255).astype(np.uint8)
plt.figure()
plt.axis('off')
plt.title('Original images: top rows, '
          'Corrupted Input: middle rows, '
          'Denoised Input:  third rows')
plt.imshow(imgs, interpolation='none', cmap='gray')
Image.fromarray(imgs).save('corrupted_and_denoised.png')
plt.show()

    
            firewall_policy = oneandone_conn.remove_firewall_rule(
            firewall_id=firewall_id,
            rule_id=rule_id
        )
        return firewall_policy
    except Exception as e:
        module.fail_json(msg=str(e))
    
    # Ensure role with certain details
- ipa_role:
    name: another-role
    description: Just another role
    group:
    - editors
    host:
    - host01.example.com
    hostgroup:
    - hostgroup01
    privilege:
    - Group Administrators
    - User Administrators
    service:
    - service01
    
    # ===========================================
# Module execution.
#
import json
import socket
import traceback
    
        # Deploy params
    revision_id = module.params['revision_id']
    deployed_by = module.params['deployed_by']
    deployed_to = module.params['deployed_to']
    repository = module.params['repository']
    
    # If true, keep warnings as 'system message' paragraphs in the built
# documents.
#keep_warnings = False
    
        # Apply some eyeliner
    d.line(face_landmarks['left_eye'] + [face_landmarks['left_eye'][0]], fill=(0, 0, 0, 110), width=6)
    d.line(face_landmarks['right_eye'] + [face_landmarks['right_eye'][0]], fill=(0, 0, 0, 110), width=6)
    
    # Create arrays of known face encodings and their names
known_face_encodings = [
    obama_face_encoding,
    biden_face_encoding
]
known_face_names = [
    'Barack Obama',
    'Joe Biden'
]
    
    # Convert the image to a PIL-format image so that we can draw on top of it with the Pillow library
# See http://pillow.readthedocs.io/ for more about PIL/Pillow
pil_image = Image.fromarray(unknown_image)
# Create a Pillow ImageDraw Draw instance to draw with
draw = ImageDraw.Draw(pil_image)
    
    for face_landmarks in face_landmarks_list: