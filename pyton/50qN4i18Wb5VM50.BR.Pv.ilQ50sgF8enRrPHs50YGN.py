
        
            Returns:
        List
        [
            {
                'auto_scaling_group_arn': (
                    'arn:aws:autoscaling:us-west-2:275977225706:autoScalingGroup:58abc686-9783-4528-b338-3ad6f1cbbbaf:'
                    'autoScalingGroupName/public-webapp-production'
                ),
                'auto_scaling_group_name': 'public-webapp-production',
                'availability_zones': ['us-west-2c', 'us-west-2b', 'us-west-2a'],
                'created_time': '2016-02-02T23:28:42.481000+00:00',
                'default_cooldown': 300,
                'desired_capacity': 2,
                'enabled_metrics': [],
                'health_check_grace_period': 300,
                'health_check_type': 'ELB',
                'instances':
                [
                    {
                        'availability_zone': 'us-west-2c',
                        'health_status': 'Healthy',
                        'instance_id': 'i-047a12cb',
                        'launch_configuration_name': 'public-webapp-production-1',
                        'lifecycle_state': 'InService',
                        'protected_from_scale_in': false
                    },
                    {
                        'availability_zone': 'us-west-2a',
                        'health_status': 'Healthy',
                        'instance_id': 'i-7a29df2c',
                        'launch_configuration_name': 'public-webapp-production-1',
                        'lifecycle_state': 'InService',
                        'protected_from_scale_in': false
                    }
                ],
                'launch_config_name': 'public-webapp-production-1',
                'launch_configuration_name': 'public-webapp-production-1',
                'load_balancer_names': ['public-webapp-production-lb'],
                'max_size': 4,
                'min_size': 2,
                'new_instances_protected_from_scale_in': false,
                'placement_group': None,
                'status': None,
                'suspended_processes': [],
                'tags':
                [
                    {
                        'key': 'Name',
                        'propagate_at_launch': true,
                        'resource_id': 'public-webapp-production',
                        'resource_type': 'auto-scaling-group',
                        'value': 'public-webapp-production'
                    },
                    {
                        'key': 'env',
                        'propagate_at_launch': true,
                        'resource_id': 'public-webapp-production',
                        'resource_type': 'auto-scaling-group',
                        'value': 'production'
                    }
                ],
                'target_group_names': [],
                'target_group_arns': [],
                'termination_policies':
                [
                    'Default'
                ],
                'vpc_zone_identifier':
                [
                    'subnet-a1b1c1d1',
                    'subnet-a2b2c2d2',
                    'subnet-a3b3c3d3'
                ]
            }
        ]
    '''
    
    
DOCUMENTATION = '''
---
module: ec2_eip_facts
short_description: List EC2 EIP details
description:
    - List details of EC2 Elastic IP addresses.
version_added: '2.6'
author: 'Brad Macpherson (@iiibrad)'
options:
  filters:
    description:
      - A set of filters to use. Each filter is a name:value pair. The value
        may be a list or a single element.
    required: false
    default: {}
extends_documentation_fragment:
    - aws
    - ec2
'''
    
        module.exit_json(launch_configurations=snaked_launch_configs)
    
        return youngest_snapshot
    
        region, ec2_url, aws_connect_params = get_aws_connection_info(module, boto3=True)
    connection = boto3_conn(module, conn_type='client', resource='ec2', region=region, endpoint=ec2_url, **aws_connect_params)
    
        for param in module_params:
        module_param = module.params.get(param, None)
        if module_param:
            api_params[pc(param)] = module_param
    
        private_zone = bool(vpc_id and vpc_region)
    
        if state == 'present':
        enable_or_update_bucket_as_website(client_connection, resource_connection, module)
    elif state == 'absent':
        disable_bucket_as_website(client_connection, module)
    
    
def main():
    module = AnsibleModule(argument_spec=dict(
        view=dict(choices=['topics', 'subscriptions'], default='topics'),
        topic=dict(required=False),
        state=dict(choices=['list'], default='list'),
        service_account_email=dict(),
        credentials_file=dict(),
        project_id=dict(), ),)
    
            if state == 'absent' and user in heroku_collaborator_list:
            if not module.check_mode:
                heroku_app.remove_collaborator(user)
            affected_apps += [app]
            result_state = True
        elif state == 'present' and user not in heroku_collaborator_list:
            if not module.check_mode:
                heroku_app.add_collaborator(user_id_or_email=user, silent=module.params['suppress_invitation'])
            affected_apps += [app]
            result_state = True
    
        platforms = 'any',
    zip_safe = True,
    include_package_data = True,
    
    import urllib
    
    from xml.etree import cElementTree as ET
from copy import copy
from ..common import *
#----------------------------------------------------------------------
def ckplayer_get_info_by_xml(ckinfo):
    '''str->dict
    Information for CKPlayer API content.'''
    e = ET.XML(ckinfo)
    video_dict = {'title': '',
                  #'duration': 0,
                  'links': [],
                  'size': 0,
                  'flashvars': '',}
    dictified = dictify(e)['ckplayer']
    if 'info' in dictified:
        if '_text' in dictified['info'][0]['title'][0]:  #title
            video_dict['title'] = dictified['info'][0]['title'][0]['_text'].strip()
    
                    ffmpeg.ffmpeg_concat_audio_and_video([loop_file_path, single_file_path], title + '_full', 'mp4')
                cleanup_files([video_file_path, audio_file_path, loop_file_path])
            except EnvironmentError as err:
                print('Error preparing full coub video. {}'.format(err))
    except Exception as err:
        print('Error while downloading files. {}'.format(err))
    
    headers = {
    'DNT': '1',
    'Accept-Encoding': 'gzip, deflate, sdch, br',
    'Accept-Language': 'en-CA,en;q=0.8,en-US;q=0.6,zh-CN;q=0.4,zh;q=0.2',
    'Upgrade-Insecure-Requests': '1',
    'User-Agent': 'Mozilla/5.0 (Macintosh; Intel Mac OS X 10_11_3) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/49.0.2623.75 Safari/537.36',
    'Accept': 'text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,*/*;q=0.8',
    'Cache-Control': 'max-age=0',
    'Referer': 'http://www.dilidili.com/',
    'Connection': 'keep-alive',
    'Save-Data': 'on',
}
    
    '''
refer to http://open.youku.com/tools
'''
youku_embed_patterns = [ 'youku\.com/v_show/id_([a-zA-Z0-9=]+)',
                         'player\.youku\.com/player\.php/sid/([a-zA-Z0-9=]+)/v\.swf',
                         'loader\.swf\?VideoIDS=([a-zA-Z0-9=]+)',
                         'player\.youku\.com/embed/([a-zA-Z0-9=]+)',
                         'YKU.Player\(\'[a-zA-Z0-9]+\',{ client_id: \'[a-zA-Z0-9]+\', vid: \'([a-zA-Z0-9]+)\''
                       ]
    }
    
        fc2video_download_by_upid(upid, output_dir, merge, info_only)
    
    def makeKeyFiles(name, keySize):
    if os.path.exists('%s_pubkey.txt' % (name)) or os.path.exists('%s_privkey.txt' % (name)):
        print('\nWARNING:')
        print(''%s_pubkey.txt' or '%s_privkey.txt' already exists. \nUse a different name or delete these files and re-run this program.' % (name, name))
        sys.exit()
    
            return new_key

    
        def __prepare__(self, N = 0, M = 0):
        self.dp = [[-1 for y in range(0,M)] for x in range(0,N)]
    
    	if len(sys.argv) == 1:
		try:
			n = int(raw_input('Enter a number: '))
			print(partition(n))
		except ValueError:
			print('Please enter a number.')
	else:
		try:
			n = int(sys.argv[1])
			print(partition(n))
		except ValueError:
			print('Please pass a number.')
    
    	s = [7, 12, 17, 22,  7, 12, 17, 22,  7, 12, 17, 22,  7, 12, 17, 22, \
		5,  9, 14, 20,  5,  9, 14, 20,  5,  9, 14, 20,  5,  9, 14, 20, \
		4, 11, 16, 23,  4, 11, 16, 23,  4, 11, 16, 23,  4, 11, 16, 23, \
		6, 10, 15, 21,  6, 10, 15, 21,  6, 10, 15, 21,  6, 10, 15, 21 ]
    
        def train(self, X, y):
        '''
        train:
        @param X: a one dimensional numpy array
        @param y: a one dimensional numpy array. 
        The contents of y are the labels for the corresponding X values
    
        score = np.sqrt(mean_square_diff)
    
            a += a
        b >>= 1
    
        @unittest.skip('registration captcha is unfinished')
    def test_captcha_blocking(self):
        with contextlib.nested(
            self.mock_register(),
            self.failed_captcha()
        ):
            res = self.do_register()
            self.assert_failure(res, 'BAD_CAPTCHA')
    
        def test_admin_enabled(self):
        cfg = {'admin': True}
        self.world.is_admin = mock.Mock(return_value=True)
        feature_state = self.world._make_state(cfg)
        self.assertTrue(feature_state.is_enabled(user=gary))
    
        def test_tuple_of(self):
        self.assertEquals((), ConfigValue.tuple_of(str)(''))
        self.assertEquals(('a', 'b'), ConfigValue.tuple_of(str)('a, b'))
        self.assertEquals(('a', 'b'),
                          ConfigValue.tuple_of(str, delim=':')('a : b'))
    
            self.amqp.assert_event_item(
            {
                'event_type': event_type,
                'event_topic': 'quarantine',
                'payload': {
                    'domain': request.host,
                    'referrer_domain': self.domain_mock(),
                    'verified_email': context.user.email_verified,
                    'user_id': context.user._id,
                    'sr_name': subreddit.name,
                    'referrer_url': request.headers.get(),
                    'user_agent': request.user_agent,
                    'user_agent_parsed': request.parsed_agent.to_dict(),
                    'sr_id': subreddit._id,
                    'user_name': context.user.name,
                    'oauth2_client_id': context.oauth2_client._id,
                    'oauth2_client_app_type': context.oauth2_client.app_type,
                    'oauth2_client_name': context.oauth2_client.name,
                    'geoip_country': context.location,
                    'obfuscated_data': {
                        'client_ip': request.ip,
                        'client_ipv4_24': '1.2.3',
                        'client_ipv4_16': '1.2',
                    }
                }
            }
        )
    
            perm_set = TestPermissionSet()
        perm_set['x'] = True
        self.assertTrue(perm_set['x'])
        self.assertFalse(perm_set['y'])
        perm_set['x'] = False
        self.assertFalse(perm_set['x'])
        perm_set[perm_set.ALL] = True
        self.assertTrue(perm_set['x'])
        self.assertTrue(perm_set['y'])
        self.assertFalse(perm_set['z'])
        self.assertTrue(perm_set.get('x', False))
        self.assertFalse(perm_set.get('z', False))
        self.assertTrue(perm_set.get('z', True))
    
            for width in (108, 216, 320, 640, 960, 1080):
            url = self.provider.resize_image(image, width)
            self.assertEqual(url, 'https://unsplash.it/%d/%d' % (width,
                width*2))

    
        def _get_limit(self, interval):
        return self.limit[interval]
    
        This function is really really bad, and should be rewritten
    as soon as possible.
    '''