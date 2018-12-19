
        
            with open(FISH_COMPLETION_TEMPLATE) as f:
        template = f.read()
    filled_template = template.replace('{{commands}}', '\n'.join(commands))
    with open(FISH_COMPLETION_FILE, 'w') as f:
        f.write(filled_template)
    
    from youtube_dl.utils import intlist_to_bytes
from youtube_dl.aes import aes_encrypt, key_expansion
    
        infile, outfile = args
    
    
class BinarySuppressedError(Exception):
    '''An error indicating that the body is binary and won't be written,
     e.g., for terminal output).'''
    
        # Adapters
    def get_transport_plugins(self):
        return [plugin for plugin in self
                if issubclass(plugin, TransportPlugin)]

    
    
@pytest.mark.skipif(not has_docutils(), reason='docutils not installed')
@pytest.mark.parametrize('filename', filenames)
def test_rst_file_syntax(filename):
    p = subprocess.Popen(
        ['rst2pseudoxml.py', '--report=1', '--exit-status=1', filename],
        stderr=subprocess.PIPE,
        stdout=subprocess.PIPE
    )
    err = p.communicate()[1]
    assert p.returncode == 0, err.decode('utf8')

    
    
def test_unicode_form_item_verbose(httpbin):
    r = http('--verbose', '--form',
             'POST', httpbin.url + '/post', u'test=%s' % UNICODE)
    assert HTTP_OK in r
    assert UNICODE in r
    
        def _get_path(self):
        return os.path.join(self.directory, self.name + '.json')
    
            volume_id = volumes[0].id
    
        # Retrieve any AWS settings from the environment.
    region, ec2_url, aws_connect_kwargs = get_aws_connection_info(module, boto3=True)
    if not region:
        module.fail_json(msg=str('Either region or AWS_REGION or EC2_REGION environment variable or boto config aws_region or ec2_region must be set.'))
    
            if module.params.get('next_marker'):
            params['Marker'] = module.params.get('next_marker')
        try:
            lambda_facts.update(aliases=client.list_aliases(FunctionName=function_name, **params)['Aliases'])
        except ClientError as e:
            if e.response['Error']['Code'] == 'ResourceNotFoundException':
                lambda_facts.update(aliases=[])
            else:
                module.fail_json_aws(e, msg='Trying to get aliases')
    else:
        module.fail_json(msg='Parameter function_name required for query=aliases.')
    
        try:
        configuration_facts = get_configuration_facts(cursor)
        if module.check_mode:
            changed = not check(configuration_facts, parameter_name, current_value)
        else:
            try:
                changed = present(configuration_facts, cursor, parameter_name, current_value)
            except pyodbc.Error as e:
                module.fail_json(msg=to_native(e), exception=traceback.format_exc())
    except NotSupportedError as e:
        module.fail_json(msg=to_native(e), ansible_facts={'vertica_configuration': configuration_facts})
    except CannotDropError as e:
        module.fail_json(msg=to_native(e), ansible_facts={'vertica_configuration': configuration_facts})
    except SystemExit:
        # avoid catching this on python 2.4
        raise
    except Exception as e:
        module.fail_json(msg=to_native(e), exception=traceback.format_exc())
    
        # Use 7zip when we have a binary, otherwise try to mount
    if binary:
        cmd = '%s x '%s' -o'%s' %s' % (binary, image, tmp_dir, ' '.join([quote(f) for f in extract_files]))
    else:
        cmd = 'mount -o loop,ro '%s' '%s'' % (image, tmp_dir)
    
    from __future__ import absolute_import, division, print_function
__metaclass__ = type
    
    
ANSIBLE_METADATA = {'metadata_version': '1.1',
                    'status': ['stableinterface'],
                    'supported_by': 'core'}
    
    
class Icinga2FeatureHelper:
    def __init__(self, module):
        self.module = module
        self._icinga2 = module.get_bin_path('icinga2', True)
        self.feature_name = self.module.params['name']
        self.state = self.module.params['state']
    
        removed_count = 0
    
        name = module.params['name']
    state = module.params['state']
    timeout = module.params['timeout']
    
        def splitroot(self, part, sep=sep):
        if part and part[0] == sep:
            stripped_part = part.lstrip(sep)
            # According to POSIX path resolution:
            # http://pubs.opengroup.org/onlinepubs/009695399/basedefs/xbd_chap04.html#tag_04_11
            # 'A pathname that begins with two successive slashes may be
            # interpreted in an implementation-defined manner, although more
            # than two leading slashes shall be treated as a single slash'.
            if len(part) - len(stripped_part) == 2:
                return '', sep * 2, stripped_part
            else:
                return '', sep, stripped_part
        else:
            return '', '', part
    
        def test_large_PYTHONPATH(self):
        path1 = 'ABCDE' * 100
        path2 = 'FGHIJ' * 100
        path = path1 + os.pathsep + path2
    
        for filename in os.listdir(directory):
        path = os.path.join(directory, filename)
        if not os.path.isfile(path):
            continue
        # Guess the content type based on the file's extension.  Encoding
        # will be ignored, although we should check for simple things like
        # gzip'd or compressed files.
        ctype, encoding = mimetypes.guess_type(path)
        if ctype is None or encoding is not None:
            # No guess could be made, or the file is encoded (compressed), so
            # use a generic bag-of-bits type.
            ctype = 'application/octet-stream'
        maintype, subtype = ctype.split('/', 1)
        with open(path, 'rb') as fp:
            msg.add_attachment(fp.read(),
                               maintype=maintype,
                               subtype=subtype,
                               filename=filename)
    # Now send or store the message
    if args.output:
        with open(args.output, 'wb') as fp:
            fp.write(msg.as_bytes(policy=SMTP))
    else:
        with smtplib.SMTP('localhost') as s:
            s.send_message(msg)
    
        # Add more tasks using `put()`
    for task in TASKS2:
        task_queue.put(task)
    
    cur.close()
con.close()

    
    
def main():
    print('Making key files...')
    makeKeyFiles('elgamal', 2048)
    print('Key files generation successful')
    
        publicKey = (n, e)
    privateKey = (n, d)
    return (publicKey, privateKey)
    
            return new_key

    
        def bulk_insert(self, values):
        i = 1
        self.__aux_list = values
        for value in values:
            self.insert_data(value)
            self._step_by_step(i)
            i += 1
    
    try:
	xrange		#Python 2
except NameError:
	xrange = range	#Python 3
    
    	currPos = 0
	while currPos < len(bitString):
		currPart = bitString[currPos:currPos+512]
		mySplits = []
		for i in range(16):
			mySplits.append(int(rearrange(currPart[32*i:32*i+32]),2))
		yield mySplits
		currPos += 512
    
    
        '''
        loop over all possible splits for the decision tree. find the best split.
        if no split exists that is less than 2 * error for the entire array
        then the data set is not split and the average for the entire array is used as the predictor
        '''
        for i in range(len(X)):
            if len(X[:i]) < self.min_leaf_size:
                continue
            elif len(X[i:]) < self.min_leaf_size:
                continue
            else:
                error_left = self.mean_squared_error(X[:i], np.mean(y[:i]))
                error_right = self.mean_squared_error(X[i:], np.mean(y[i:]))
                error = error_left + error_right
                if error < min_error:
                    best_split = i
                    min_error = error
    
        urls = []