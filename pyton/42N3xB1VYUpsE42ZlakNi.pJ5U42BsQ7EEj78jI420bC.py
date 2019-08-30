
        
                if self._group_exists(group_name=group_name, parent_name=parent_name):
            if not self.module.check_mode:
                group.append(group_name)
                result = self._delete_group(group_name)
                results.append(result)
            changed = True
        return changed, group, results
    
        @staticmethod
    def _get_aa_policy_id_of_server(clc, module, alias, server_id):
        '''
        retrieves the anti affinity policy id of the server based on the CLC server id
        :param clc: the clc-sdk instance to use
        :param module: the AnsibleModule object
        :param alias: the CLC account alias
        :param server_id: the CLC server id
        :return: aa_policy_id: The anti affinity policy id
        '''
        aa_policy_id = None
        try:
            result = clc.v2.API.Call(
                method='GET', url='servers/%s/%s/antiAffinityPolicy' %
                (alias, server_id))
            aa_policy_id = result.get('id')
        except APIFailedResponse as ex:
            if ex.response_status_code != 404:
                module.fail_json(msg='Unable to fetch anti affinity policy for server '{0}'. {1}'.format(
                    server_id, str(ex.response_text)))
        return aa_policy_id
    
        def ensure_public_ip_absent(self, server_ids):
        '''
        Ensures the given server ids having the public ip removed if there is any
        :param server_ids: the list of server ids
        :return: (changed, changed_server_ids, results)
                  changed: A flag indicating if there is any change
                  changed_server_ids : the list of server ids that are changed
                  results: The result list from clc public ip call
        '''
        changed = False
        results = []
        changed_server_ids = []
        servers = self._get_servers_from_clc(
            server_ids,
            'Failed to obtain server list from the CLC API')
        servers_to_change = [
            server for server in servers if len(
                server.PublicIPs().public_ips) > 0]
        for server in servers_to_change:
            if not self.module.check_mode:
                result = self._remove_publicip_from_server(server)
                results.append(result)
            changed_server_ids.append(server.id)
            changed = True
        return changed, changed_server_ids, results
    
            if strip:
            # If check mode, create a temporary file
            if check_mode:
                temp = tempfile.NamedTemporaryFile()
                path = temp.name
            f = open(path, 'w')
            try:
                [f.write(line) for line in lines if line.strip()]
            finally:
                f.close()
    
    from __future__ import absolute_import, division, print_function
__metaclass__ = type
    
    DOCUMENTATION = r'''
---
module: imc_rest
short_description: Manage Cisco IMC hardware through its REST API
description:
- Provides direct access to the Cisco IMC REST API.
- Perform any configuration changes and actions that the Cisco IMC supports.
- More information about the IMC REST API is available from
  U(http://www.cisco.com/c/en/us/td/docs/unified_computing/ucs/c/sw/api/3_0/b_Cisco_IMC_api_301.html)
author:
- Dag Wieers (@dagwieers)
version_added: '2.4'
requirements:
- lxml
- xmljson >= 0.1.8
options:
  hostname:
    description:
    - IP Address or hostname of Cisco IMC, resolvable by Ansible control host.
    required: true
    aliases: [ host, ip ]
  username:
    description:
    - Username used to login to the switch.
    default: admin
    aliases: [ user ]
  password:
    description:
    - The password to use for authentication.
    default: password
  path:
    description:
    - Name of the absolute path of the filename that includes the body
      of the http request being sent to the Cisco IMC REST API.
    - Parameter C(path) is mutual exclusive with parameter C(content).
    aliases: [ 'src', 'config_file' ]
  content:
    description:
    - When used instead of C(path), sets the content of the API requests directly.
    - This may be convenient to template simple requests, for anything complex use the M(template) module.
    - You can collate multiple IMC XML fragments and they will be processed sequentially in a single stream,
      the Cisco IMC output is subsequently merged.
    - Parameter C(content) is mutual exclusive with parameter C(path).
  protocol:
    description:
    - Connection protocol to use.
    default: https
    choices: [ http, https ]
  timeout:
    description:
    - The socket level timeout in seconds.
    - This is the time that every single connection (every fragment) can spend.
      If this C(timeout) is reached, the module will fail with a
      C(Connection failure) indicating that C(The read operation timed out).
    default: 60
  validate_certs:
    description:
    - If C(no), SSL certificates will not be validated.
    - This should only set to C(no) used on personally controlled sites using self-signed certificates.
    type: bool
    default: 'yes'
notes:
- The XML fragments don't need an authentication cookie, this is injected by the module automatically.
- The Cisco IMC XML output is being translated to JSON using the Cobra convention.
- Any configConfMo change requested has a return status of 'modified', even if there was no actual change
  from the previous configuration. As a result, this module will always report a change on subsequent runs.
  In case this behaviour is fixed in a future update to Cisco IMC, this module will automatically adapt.
- If you get a C(Connection failure) related to C(The read operation timed out) increase the C(timeout)
  parameter. Some XML fragments can take longer than the default timeout.
- More information about the IMC REST API is available from
  U(http://www.cisco.com/c/en/us/td/docs/unified_computing/ucs/c/sw/api/3_0/b_Cisco_IMC_api_301.html)
'''
    
    EXAMPLES = '''
# Ensure bootdevice is HD.
- ipmi_boot:
    name: test.testdomain.com
    user: admin
    password: password
    bootdev: hd
    
        # --- run command ---
    try:
        ipmi_cmd = command.Command(
            bmc=name, userid=user, password=password, port=port
        )
        module.debug('ipmi instantiated - name: '%s'' % name)
    
        # now do a benchmark where the number of points is fixed
    # and the variable is the number of features
    
    n_samples = np.logspace(.5, 3, 9)
n_features = np.logspace(1, 3.5, 7)
N_samples, N_features = np.meshgrid(n_samples,
                                    n_features)
scikits_time = np.zeros(N_samples.shape)
scipy_time = np.zeros(N_samples.shape)
    
    '''
# Author: Olivier Grisel <olivier.grisel@ensta.org>
# License: Simplified BSD
    
    images_and_predictions = list(zip(digits.images[n_samples // 2:], predicted))
for index, (image, prediction) in enumerate(images_and_predictions[:4]):
    plt.subplot(2, 4, index + 5)
    plt.axis('off')
    plt.imshow(image, cmap=plt.cm.gray_r, interpolation='nearest')
    plt.title('Prediction: %i' % prediction)
    
    fig.show()

    
            As an alternative you might even in case of success
        call the next handler.
        '''
        res = self.check_range(request)
        if not res and self.successor:
            self.successor.handle(request)
    
    
def main():
    '''
    >>> molly = User('Molly')
    >>> mark = User('Mark')
    >>> ethan = User('Ethan')
    
    
class Transaction(object):
    '''A transaction guard.
    
    
class HexViewer:
    def update(self, subject):
        print(u'HexViewer: Subject %s has data 0x%x' % (subject.name, subject.data))
    
    
def on_sale_discount(order):
    return order.price * 0.25 + 20
    
    '''
*What is this pattern about?
The Borg pattern (also known as the Monostate pattern) is a way to
implement singleton behavior, but instead of having only one instance
of a class, there are multiple instances that share the same state. In
other words, the focus is on sharing state instead of sharing instance
identity.
    
    
class Flat(Building):
    def build_floor(self):
        self.floor = 'More than One'
    
        >>> Jhon.call_count2
    1
    '''
    
    
class Delegator(object):
    '''
    >>> delegator = Delegator(Delegate())
    >>> delegator.p1
    123
    >>> delegator.p2
    Traceback (most recent call last):
    ...
    AttributeError: 'Delegate' object has no attribute 'p2'
    >>> delegator.do_something('nothing')
    'Doing nothing'
    >>> delegator.do_anything()
    Traceback (most recent call last):
    ...
    AttributeError: 'Delegate' object has no attribute 'do_anything'
    '''
    
        >>> objects[0].__dict__['obj'], objects[0].__dict__['make_noise']
    (<...Dog object at 0x...>, <bound method Dog.bark of <...Dog object at 0x...>>)
    
    
if __name__ == '__main__':
    simple_hello = TextTag('hello, world!')
    special_hello = ItalicWrapper(BoldWrapper(simple_hello))
    print('before:', simple_hello.render())
    print('after:', special_hello.render())
    
    *Where is the pattern used practically?
This pattern can be seen in the Python standard library when we use
the isdir function. Although a user simply uses this function to know
whether a path refers to a directory, the system makes a few
operations and calls other modules (e.g., os.stat) to give the result.