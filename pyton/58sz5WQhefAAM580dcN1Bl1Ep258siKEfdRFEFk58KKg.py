
        
        from ansible.module_utils.aws.core import AnsibleAWSModule
from ansible.module_utils.ec2 import boto3_conn, camel_dict_to_snake_dict
from ansible.module_utils.ec2 import ec2_argument_spec, get_aws_connection_info
    
    database_name:
    description: Name of database.
    returned: When database name is specified
    type: str
    sample: 'mydatabase'
    
        def role_del(self, name):
        return self._post_json(method='role_del', name=name)
    
        def manage(self):
        rc, out = self._exec(['list'])
        if rc != 0:
            self.module.fail_json(msg='Unable to list icinga2 features. '
                                      'Ensure icinga2 is installed and present in binary path.')
    
    
ANSIBLE_METADATA = {'metadata_version': '1.1',
                    'status': ['preview'],
                    'supported_by': 'community'}
    
    import urllib
    
        elif 'subject' in url:
        titles = re.findall(r'data-title='([^']*)'>', html)
        song_id = re.findall(r'<li class='song-item' id='([^']*)'', html)
        song_ssid = re.findall(r'data-ssid='([^']*)'', html)
        get_song_url = 'http://music.douban.com/j/songlist/get_song_url'
    
    
def url_save_icourses(url, filepath, bar, total_size, dyn_callback=None, is_part=False, max_size=0, headers=None):
    def dyn_update_url(received):
        if callable(dyn_callback):
            logging.debug('Calling callback %s for new URL from %s' % (dyn_callback.__name__, received))
            return dyn_callback(received)
    if bar is None:
        bar = DummyProgressBar()
    if os.path.exists(filepath):
        if not force:
            if not is_part:
                bar.done()
                print('Skipping %s: file already exists' % tr(os.path.basename(filepath)))
            else:
                filesize = os.path.getsize(filepath)
                bar.update_received(filesize)
            return
        else:
            if not is_part:
                bar.done()
                print('Overwriting %s' % os.path.basename(filepath), '...')
    elif not os.path.exists(os.path.dirname(filepath)):
        os.mkdir(os.path.dirname(filepath))