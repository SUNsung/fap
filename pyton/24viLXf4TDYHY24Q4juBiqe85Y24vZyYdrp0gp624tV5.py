
        
            with open(FISH_COMPLETION_TEMPLATE) as f:
        template = f.read()
    filled_template = template.replace('{{commands}}', '\n'.join(commands))
    with open(FISH_COMPLETION_FILE, 'w') as f:
        f.write(filled_template)
    
    
iv = key = [0x20, 0x15] + 14 * [0]
    
    versions_info['versions'][version] = new_version
versions_info['latest'] = version
    
        infile, outfile = args
    
        with io.open(infile, encoding='utf-8') as inf:
        issue_template_tmpl = inf.read()
    
    
if __name__ == '__main__':
    main()

    
    PREFIX = r'''%YOUTUBE-DL(1)
    
    # General information about the project.
project = u'youtube-dl'
copyright = u'2014, Ricardo Garcia Gonzalez'
    
    
class TestMultipleSocks(unittest.TestCase):
    @staticmethod
    def _check_params(attrs):
        params = get_params()
        for attr in attrs:
            if attr not in params:
                print('Missing %s. Skipping.' % attr)
                return
        return params
    
    
class TestThePlatformFeedSubtitles(BaseTestSubtitles):
    url = 'http://feed.theplatform.com/f/7wvmTC/msnbc_video-p-test?form=json&pretty=true&range=-40&byGuid=n_hardball_5biden_140207'
    IE = ThePlatformFeedIE
    
    
def fix_return(node):
    '''
    fixup returned dictionary
    
            rule['dest_port'] = str(rule.get('dest_port', 'Any')).lower()
        rule['dest_ip'] = rule.get('dest_ip', 'Any').lower()
        rule['source_port'] = str(rule.get('source_port', 'Any')).lower()
        rule['source_ip'] = rule.get('source_ip', 'Any').lower()
        rule['protocol'] = rule.get('protocol', 'Any').lower()
        rule['policy'] = rule.get('policy', 'allow').lower()
        rule['is_enable'] = rule.get('is_enable', True)
        rule['enable_logging'] = rule.get('enable_logging', False)
        rule['description'] = rule.get('description', 'rule added by Ansible')
    
        if purge_rules is True and len(rules) > 0:
        result['rules_purged'] = len(rules)
        deletions = result['rules_purged']
        rules = list()
        if not module.check_mode:
            gateway.del_all_nat_rules()
            task = gateway.save_services_configuration()
            vca.block_until_completed(task)
            rules = gateway.get_nat_rules()
        result['changed'] = True
    
    
if __name__ == '__main__':
    main()

    
        if root.get('total-models') == '0':
        return None
    
        # Label the results
    for (top, right, bottom, left), name in zip(face_locations, face_names):
        if not name:
            continue
    
            # Clear the frames array to start the next batch
        frames = []

    
    # You can also save a copy of the new image to disk if you want by uncommenting this line
# pil_image.save('image_with_boxes.jpg')

    
        # Print the location of each facial feature in this image
    for facial_feature in face_landmarks.keys():
        print('The {} in this face has the following points: {}'.format(facial_feature, face_landmarks[facial_feature]))
    
    from setuptools import setup
    
    Loosely based on https://github.com/astropy/astropy/pull/347
'''
    
    
def run(args):
    '''Handle ensure config commandline script.'''
    parser = argparse.ArgumentParser(
        description=('Ensure a Home Assistant config exists, '
                     'creates one if necessary.'))
    parser.add_argument(
        '-c', '--config',
        metavar='path_to_config_dir',
        default=config_util.get_default_config_dir(),
        help='Directory that contains the Home Assistant configuration')
    parser.add_argument(
        '--script',
        choices=['ensure_config'])
    
        if results.overwrite and os.path.exists(output_directory):
        shutil.rmtree(output_directory)
    
    from ...utils import get_shape, get_w