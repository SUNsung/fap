
        
        
def check_entry(line_num, segments):
    # START Title
    raw_title = segments[index_title]
    title_re_match = link_re.match(raw_title)
    # url should be wrapped in '[TITLE](LINK)' Markdown syntax
    if not title_re_match:
        add_error(line_num, 'Title syntax should be '[TITLE](LINK)'')
    else:
        # do not allow '... API' in the entry title
        title = title_re_match.group(1)
        if title.upper().endswith(' API'):
            add_error(line_num, 'Title should not end with '... API'. Every entry is an API here!')
        # do not allow duplicate links
        link = title_re_match.group(2)
        if link in previous_links:
            add_error(line_num, 'Duplicate link - entries should only be included in one section')
        else:
            previous_links.append(link)
    # END Title
    # START Description
    # first character should be capitalized
    char = segments[index_desc][0]
    if char.upper() != char:
        add_error(line_num, 'first character of description is not capitalized')
    # last character should not punctuation
    char = segments[index_desc][-1]
    if char in punctuation:
        add_error(line_num, 'description should not end with {}'.format(char))
    desc_length = len(segments[index_desc])
    if desc_length > 100:
        add_error(line_num, 'description should not exceed 100 characters (currently {})'.format(desc_length))
    # END Description
    # START Auth
    # values should conform to valid options only
    auth = segments[index_auth]
    if auth != 'No' and (not auth.startswith('`') or not auth.endswith('`')):
        add_error(line_num, 'auth value is not enclosed with `backticks`')
    if auth.replace('`', '') not in auth_keys:
        add_error(line_num, '{} is not a valid Auth option'.format(auth))
    # END Auth
    # START HTTPS
    # values should conform to valid options only
    https = segments[index_https]
    if https not in https_keys:
        add_error(line_num, '{} is not a valid HTTPS option'.format(https))
    # END HTTPS
    # START CORS
    # values should conform to valid options only
    cors = segments[index_cors]
    if cors not in cors_keys:
        add_error(line_num, '{} is not a valid CORS option'.format(cors))
    # END CORS
    
    matplotlib.rcParams['image.interpolation'] = 'nearest'
DATA_DIR = 'rnn_synth_data_v1.0'
    
    
def nparray_and_transpose(data_a_b_c):
  '''Convert the list of items in data to a numpy array, and transpose it
  Args:
    data: data_asbsc: a nested, nested list of length a, with sublist length
      b, with sublist length c.
  Returns:
    a numpy 3-tensor with dimensions a x c x b
'''
  data_axbxc = np.array([datum_b_c for datum_b_c in data_a_b_c])
  data_axcxb = np.transpose(data_axbxc, axes=[0,2,1])
  return data_axcxb
    
      def word_to_char_ids(self, word):
    if word in self._word_to_id:
      return self._word_char_ids[self._word_to_id[word]]
    else:
      return self._convert_word_to_char_ids(word)
    
        test_data = utils.parse_commonsense_reasoning_test(test_data_name)
    self.question_ids, self.sentences, self.labels = test_data
    self.all_probs = []  # aggregate single-model prediction here.
    
        if len(free_ids) < 5:
      raise ValueError('Not enough free char ids: %d' % len(free_ids))
    
    from __future__ import absolute_import
    
            # on exit we want to clean up earlier.  Normally the request context
        # stays preserved until the next request in the same thread comes
        # in.  See RequestGlobals.push() for the general behavior.
        top = _request_ctx_stack.top
        if top is not None and top.preserved:
            top.pop()
    
        .. versionadded:: 1.0
    '''
    
        if state == 'absent':
        if not snapshot_id:
            module.fail_json(msg='snapshot_id must be set when state is absent')
        try:
            ec2.delete_snapshot(snapshot_id)
        except boto.exception.BotoServerError as e:
            # exception is raised if snapshot does not exist
            if e.error_code == 'InvalidSnapshot.NotFound':
                module.exit_json(changed=False)
            else:
                module.fail_json(msg='%s: %s' % (e.error_code, e.error_message))
    
            for server_cert in server_certs:
            if not name:
                server_cert = iam.get_server_certificate(ServerCertificateName=server_cert['ServerCertificateName'])['ServerCertificate']
            cert_md = server_cert['ServerCertificateMetadata']
            results[cert_md['ServerCertificateName']] = {
                'certificate_body': server_cert['CertificateBody'],
                'server_certificate_id': cert_md['ServerCertificateId'],
                'server_certificate_name': cert_md['ServerCertificateName'],
                'arn': cert_md['Arn'],
                'path': cert_md['Path'],
                'expiration': cert_md['Expiration'].isoformat(),
                'upload_date': cert_md['UploadDate'].isoformat(),
            }
    
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
    
    
if __name__ == '__main__':
    main()

    
    
class Header(jose.Header):
    '''ACME-specific JOSE Header. Implements nonce, kid, and url.
    '''
    nonce = jose.Field('nonce', omitempty=True, encoder=jose.encode_b64jose)
    kid = jose.Field('kid', omitempty=True)
    url = jose.Field('url', omitempty=True)
    
    class SelectVhostTest(unittest.TestCase):
    '''Tests for certbot_apache.display_ops.select_vhost.'''
    
    The path to this file can be provided interactively or using the
``--dns-cloudxns-credentials`` command-line argument. Certbot records the path
to this file for use during renewal, but does not store the file's contents.