
        
        
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
    
    
def test_when_cant_configure_automatically(shell_pid, shell, logs):
    shell_pid.return_value = 12
    shell.how_to_configure.return_value = ShellConfiguration(
        content='eval $(thefuck --alias)',
        path='/tmp/.bashrc',
        reload='bash',
        can_configure_automatically=False)
    main()
    logs.how_to_configure_alias.assert_called_once()
    
    match_output = '''
Hit:1 http://us.archive.ubuntu.com/ubuntu zesty InRelease
Hit:2 http://us.archive.ubuntu.com/ubuntu zesty-updates InRelease
Get:3 http://us.archive.ubuntu.com/ubuntu zesty-backports InRelease [89.2 kB]
Hit:4 http://security.ubuntu.com/ubuntu zesty-security InRelease
Hit:5 http://ppa.launchpad.net/ubuntu-mozilla-daily/ppa/ubuntu zesty InRelease
Hit:6 https://download.docker.com/linux/ubuntu zesty InRelease
Hit:7 https://cli-assets.heroku.com/branches/stable/apt ./ InRelease
Fetched 89.2 kB in 0s (122 kB/s)
Reading package lists... Done
Building dependency tree
Reading state information... Done
8 packages can be upgraded. Run 'apt list --upgradable' to see them.
'''
    
    
@pytest.mark.skipif(_is_not_okay_to_test(),
                    reason='No need to run if there\'s no formula')
def test_match(brew_no_available_formula, brew_already_installed,
               brew_install_no_argument):
    assert match(Command('brew install elsticsearch',
                         brew_no_available_formula))
    assert not match(Command('brew install git',
                             brew_already_installed))
    assert not match(Command('brew install', brew_install_no_argument))
    
    
def copy(module, connection, name, target, bucket):
    ''' Copy an Elasticache backup. '''
    try:
        response = connection.copy_snapshot(SourceSnapshotName=name,
                                            TargetSnapshotName=target,
                                            TargetBucket=bucket)
        changed = True
    except botocore.exceptions.ClientError as e:
        module.fail_json(msg='Unable to copy the snapshot.', exception=traceback.format_exc())
    return response, changed
    
    # Fail if the server certificate name was not found
- iam_server_certificate_facts:
    name: production-cert
  register: server_cert
  failed_when: '{{ server_cert.results | length == 0 }}'
'''
    
    EXAMPLES = '''
---
# Simple example of listing all info for a function
- name: List all for a specific function
  lambda_facts:
    query: all
    function_name: myFunction
  register: my_function_details
# List all versions of a function
- name: List function versions
  lambda_facts:
    query: versions
    function_name: myFunction
  register: my_function_versions
# List all lambda function versions
- name: List all function
  lambda_facts:
    query: all
    max_items: 20
- name: show Lambda facts
  debug:
    var: lambda_facts
'''
    
    - oneandone_firewall_policy:
    auth_token: oneandone_private_api_key
    firewall_policy: ansible-firewall-policy-updated
    add_server_ips:
     - server_identifier (id or name)
     - server_identifier #2 (id or name)
    wait: true
    wait_timeout: 500
    state: update
    
    
def protocol_to_string(protocol):
    protocol = protocol_to_tuple(protocol)
    if protocol[0] is True:
        return 'Tcp'
    elif protocol[1] is True:
        return 'Udp'
    elif protocol[2] is True:
        return 'Icmp'
    elif protocol[3] is True:
        return 'Other'
    elif protocol[4] is True:
        return 'Any'
    
        if not pyodbc_found:
        module.fail_json(msg='The python pyodbc module is required.')
    
        module.exit_json(changed=changed, schema=schema, ansible_facts={'vertica_schemas': schema_facts})
    
        module_hbacrule = get_hbacrule_dict(description=module.params['description'],
                                        hostcategory=hostcategory,
                                        ipaenabledflag=ipaenabledflag,
                                        servicecategory=servicecategory,
                                        sourcehostcategory=sourcehostcategory,
                                        usercategory=usercategory)
    ipa_hbacrule = client.hbacrule_find(name=name)
    
    # Create groups like 'virt_kvm_host'
- group_by:
    key: virt_{{ ansible_virtualization_type }}_{{ ansible_virtualization_role }}
    
        try:
        data = urlencode(params)
        response, info = fetch_url(module, url, data=data)
    except Exception as e:
        module.fail_json(msg='Unable to notify Honeybadger: %s' % to_native(e), exception=traceback.format_exc())
    else:
        if info['status'] == 201:
            module.exit_json(changed=True)
        else:
            module.fail_json(msg='HTTP result code: %d connecting to %s' % (info['status'], url))
    
            # If feature is already in good state, just exit
        if (re.search('Disabled features:.* %s[ \n]' % self.feature_name, out) and self.state == 'absent') or \
                (re.search('Enabled features:.* %s[ \n]' % self.feature_name, out) and self.state == 'present'):
            self.module.exit_json(changed=False)
    
        elif p['state'] in ['absent', 'unfollowed']:
        unfollow_log(module, le_path, logs)
    
    ## All tokens go to the parser (unless skip() is called in that rule)
# on a particular 'channel'.  The parser tunes to a particular channel
# so that whitespace etc... can go to the parser on a 'hidden' channel.
DEFAULT_CHANNEL = 0
    
        Validation of predicates
    occurs when normally parsing the alternative just like matching a token.
    Disambiguating predicate evaluation occurs when we hoist a predicate into
    a prediction decision.
    '''
    
    
    def rewind(self, marker=None):
        '''
        Reset the stream so that next call to index would return marker.
        The marker will usually be index() but it doesn't have to be.  It's
        just a marker to indicate what state the stream was in.  This is
        essentially calling release() and seek().  If there are markers
        created after this marker argument, this routine must unroll them
        like a stack.  Assume the state the stream was in when this marker
        was created.
    
    ############################################################################
#
# basic token interface
#
############################################################################
    
    from contextlib import contextmanager
import os
import sys
import time
import abc
    
    ### OUTPUT ###
# Jack move 5m then stop

    
    
class Reporter:
    def __init__(self):
        self._tm = None
    
    
def memento(obj, deep=False):
    state = deepcopy(obj.__dict__) if deep else copy(obj.__dict__)
    
    
# Example usage
class Data(Subject):
    def __init__(self, name=''):
        Subject.__init__(self)
        self.name = name
        self._data = 0
    
        print('After subclassing: ')
    for k in RegistryHolder.REGISTRY:
        print(k)
    
        # A shop that sells random animals
    shop = PetShop(random_animal)
    for i in range(3):
        shop.show_pet()
        print('=' * 20)
    
        def __init__(self):
        self.time_provider = datetime.datetime
    
    
class Student(AbstractExpert):
    @property
    def is_eager_to_contribute(self):
        return True