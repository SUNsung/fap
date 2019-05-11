
        
            proc.sendline(u'ehco test')
    
    containers = (('thefuck/python3-tcsh',
               u'''FROM python:3
                   RUN apt-get update
                   RUN apt-get install -yy tcsh''',
               u'tcsh'),
              ('thefuck/python2-tcsh',
               u'''FROM python:2
                   RUN apt-get update
                   RUN apt-get install -yy tcsh''',
               u'tcsh'))
    
    
@pytest.mark.parametrize('command, new_command', [
    (Command('cargo buid', no_such_subcommand_old), 'cargo build'),
    (Command('cargo buils', no_such_subcommand), 'cargo build')])
def test_get_new_command(command, new_command):
    assert get_new_command(command) == new_command

    
    
@parametrize_extensions
@parametrize_filename
@parametrize_script
def test_get_new_command(ext, tar_error, filename, unquoted, quoted, script, fixed):
    tar_error(unquoted.format(ext))
    assert (get_new_command(Command(script.format(filename.format(ext)), ''))
            == fixed.format(dir=quoted.format(''), filename=filename.format(ext)))

    
    - heroku_collaborator:
    api_key: YOUR_API_KEY
    user: '{{ item.user }}'
    apps: '{{ item.apps | default(apps) }}'
    suppress_invitation: '{{ item.suppress_invitation | default(suppress_invitation) }}'
    state: '{{ item.state | default('present') }}'
  with_items:
    - { user: 'a.b@example.com' }
    - { state: 'absent', user: 'b.c@example.com', suppress_invitation: false }
    - { user: 'x.y@example.com', apps: ['heroku-example-app'] }
'''
    
    EXAMPLES = '''
- name: Create a new host in OpenNebula
  one_host:
    name: host1
    cluster_id: 1
    api_url: http://127.0.0.1:2633/RPC2
    
        def role_remove_member(self, name, item):
        return self._post_json(method='role_remove_member', name=name, item=item)
    
        if module.params['environment']:
        params['deploy[environment]'] = module.params['environment']
    
    EXAMPLES = '''
- name: Add device to CA Spectrum
  local_action:
    module: spectrum_device
    device: '{{ ansible_host }}'
    community: secret
    landscape: '0x100000'
    oneclick_url: http://oneclick.example.com:8080
    oneclick_user: username
    oneclick_password: password
    state: present
    
    Loosely based on https://github.com/astropy/astropy/pull/347
'''
    
    # The language for content autogenerated by Sphinx. Refer to documentation
# for a list of supported languages.
#
# This is also used if you do content translation via gettext catalogs.
# Usually you set 'language' from the command line for these cases.
language = None