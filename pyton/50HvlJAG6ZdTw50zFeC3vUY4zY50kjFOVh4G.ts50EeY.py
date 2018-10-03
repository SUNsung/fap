
        
            # test that the user was inserted into the database
    with app.app_context():
        assert get_db().execute(
            'select * from user where username = 'a'',
        ).fetchone() is not None
    
        auth.login()
    # current user can't modify other user's post
    assert client.post('/1/update').status_code == 403
    assert client.post('/1/delete').status_code == 403
    # current user doesn't see edit link
    assert b'href='/1/update'' not in client.get('/').data
    
        def record_once(self, func):
        '''Works like :meth:`record` but wraps the function in another
        function that will ensure the function is only called once.  If the
        blueprint is registered a second time on the application, the
        function passed is not called.
        '''
        def wrapper(state):
            if state.first_registration:
                func(state)
        return self.record(update_wrapper(wrapper, func))
    
        Probably the most interesting way to load configurations is from an
    environment variable pointing to a file::
    
            buf.append('  Make sure to directly send your %s-request to this URL '
                   'since we can\'t make browsers or HTTP clients redirect '
                   'with form data reliably or without user interaction.' %
                   request.method)
        buf.append('\n\nNote: this exception is only raised in debug mode')
        AssertionError.__init__(self, ''.join(buf).encode('utf-8'))
    
    from functools import partial
from werkzeug.local import LocalStack, LocalProxy
    
        if b'\x00' not in head:
        return 'utf-8'
    
    
#: Log messages to :func:`~flask.logging.wsgi_errors_stream` with the format
#: ``[%(asctime)s] %(levelname)s in %(module)s: %(message)s``.
default_handler = logging.StreamHandler(wsgi_errors_stream)
default_handler.setFormatter(logging.Formatter(
    '[%(asctime)s] %(levelname)s in %(module)s: %(message)s'
))
    
        #: Some implementations can detect whether a session is newly
    #: created, but that is not guaranteed. Use with caution. The mixin
    # default is hard-coded ``False``.
    new = False
    
        :copyright: © 2010 by the Pallets team.
    :license: BSD, see LICENSE for more details.
'''
    
    from ansible.module_utils.ec2 import get_aws_connection_info
from ansible.module_utils.ec2 import ec2_argument_spec, boto3_conn
from ansible.module_utils.ec2 import snake_dict_to_camel_dict
from ansible.module_utils.ec2 import camel_dict_to_snake_dict
from ansible.module_utils.aws.core import AnsibleAWSModule
from ansible.module_utils.aws.cloudfront_facts import CloudFrontFactsServiceManager
import datetime
    
    # Activate pipeline
- data_pipeline:
    name: test-dp
    region: us-west-2
    state: active
    
    # AMI Creation, with a custom root-device size and another EBS attached
- ec2_ami:
    instance_id: i-xxxxxx
    name: newtest
    device_mapping:
        - device_name: /dev/sda1
          size: XXX
          delete_on_termination: true
          volume_type: gp2
        - device_name: /dev/sdb
          size: YYY
          delete_on_termination: false
          volume_type: gp2
    
    import re
    
        if region:
        try:
            connection = connect_to_aws(boto.ec2.cloudwatch, region, **aws_connect_params)
        except (NoAuthHandlerFound, AnsibleAWSError) as e:
            module.fail_json(msg=str(e))
    else:
        module.fail_json(msg='region must be specified')
    
    
def get_github_url(app, view, path):
    github_fmt = 'https://github.com/{}/{}/{}/{}{}'
    return (
        github_fmt.format(app.config.edit_on_github_project, view,
                          app.config.edit_on_github_branch,
                          app.config.edit_on_github_src_path, path))
    
        return '{}/blob/{}/{}{}'.format(GITHUB_URL, code_branch, fn, linespec)
    
        hass.bus.listen_once(EVENT_HOMEASSISTANT_STOP, _shutdown)
    
        def get_actiontec_data(self):
        '''Retrieve data from Actiontec MI424WR and return parsed result.'''
        try:
            telnet = telnetlib.Telnet(self.host)
            telnet.read_until(b'Username: ')
            telnet.write((self.username + '\n').encode('ascii'))
            telnet.read_until(b'Password: ')
            telnet.write((self.password + '\n').encode('ascii'))
            prompt = telnet.read_until(
                b'Wireless Broadband Router> ').split(b'\n')[-1]
            telnet.write('firewall mac_cache_dump\n'.encode('ascii'))
            telnet.write('\n'.encode('ascii'))
            telnet.read_until(prompt)
            leases_result = telnet.read_until(prompt).split(b'\n')[1:-1]
            telnet.write('exit\n'.encode('ascii'))
        except EOFError:
            _LOGGER.exception('Unexpected response from router')
            return
        except ConnectionRefusedError:
            _LOGGER.exception('Connection refused by router. Telnet enabled?')
            return None
    
        try:
        res = requests.post(url, data=data, timeout=5, **kwargs)
    except requests.exceptions.Timeout:
        _LOGGER.exception('Connection to the router timed out')
        return
    if res.status_code == 200:
        try:
            result = res.json()
        except ValueError:
            # If json decoder could not parse the response
            _LOGGER.exception('Failed to parse response from luci')
            return
        try:
            return result['result']
        except KeyError:
            _LOGGER.exception('No result in response from luci')
            return
    elif res.status_code == 401:
        # Authentication error
        _LOGGER.exception(
            'Failed to authenticate, check your username and password')
        return
    elif res.status_code == 403:
        _LOGGER.error('Luci responded with a 403 Invalid token')
        raise InvalidLuciTokenError
    
    
def _arp(ip_address):
    '''Get the MAC address for a given IP.'''
    cmd = ['arp', '-n', ip_address]
    arp = subprocess.Popen(cmd, stdout=subprocess.PIPE)
    out, _ = arp.communicate()
    match = re.search(r'(([0-9A-Fa-f]{1,2}\:){5}[0-9A-Fa-f]{1,2})', str(out))
    if match:
        return match.group(0)
    _LOGGER.info('No MAC address found for %s', ip_address)
    return None
    
        def see_vehicle(vehicle):
        '''Handle the reporting of the vehicle position.'''
        host_name = voc.vehicle_name(vehicle)
        dev_id = 'volvo_{}'.format(slugify(host_name))
        see(dev_id=dev_id,
            host_name=host_name,
            gps=(vehicle.position['latitude'],
                 vehicle.position['longitude']),
            icon='mdi:car')
    
        def __init__(self, hass, config):
        '''Set up main service.'''
        conf = config[DOMAIN]
        from pizzapi import Address, Customer
        from pizzapi.address import StoreException
        self.hass = hass
        self.customer = Customer(
            conf.get(ATTR_FIRST_NAME),
            conf.get(ATTR_LAST_NAME),
            conf.get(ATTR_EMAIL),
            conf.get(ATTR_PHONE),
            conf.get(ATTR_ADDRESS))
        self.address = Address(
            *self.customer.address.split(','),
            country=conf.get(ATTR_COUNTRY))
        self.country = conf.get(ATTR_COUNTRY)
        try:
            self.closest_store = self.address.closest_store()
        except StoreException:
            self.closest_store = None
    
    
def clean_socket_close(sock):
    '''Close a socket connection and logs its closure.'''
    _LOGGER.info('UPNP responder shutting down.')