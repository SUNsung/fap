
        
        EXAMPLES = '''
- name: Create a new Linode.
  linode_v4:
    label: new-linode
    type: g6-nanode-1
    region: eu-west
    image: linode/debian9
    root_pass: passw0rd
    authorized_keys:
      - 'ssh-rsa ...'
    state: present
    
    
def create_missing_directories(dest):
    destpath = os.path.dirname(dest)
    if not os.path.exists(destpath):
        os.makedirs(destpath)
    
            # The first resource is True / Not Null and the second resource is False / Null
        if resource1 and not resource2:
            self.module.log('resource1 and not resource2. ' + debug_resources)
            return False
    
                if isinstance(value, list):
                attrs[name] = list(map(to_bytes, value))
            else:
                attrs[name].append(to_bytes(value))
    
            # Change the password (or throw an exception)
        try:
            self.connection.passwd_s(self.dn, None, self.passwd)
        except ldap.LDAPError as e:
            self.fail('Unable to set password', e)
    
    # send an email to more than one recipient that the build failed
- sendgrid:
      username: '{{ sendgrid_username }}'
      password: '{{ sendgrid_password }}'
      from_address: 'build@mycompany.com'
      to_addresses:
        - 'ops@mycompany.com'
        - 'devteam@mycompany.com'
      subject: 'Build failure!.'
      body: 'Unable to pull source repository from Git server.'
  delegate_to: localhost
'''
    
    from ansible.module_utils.basic import AnsibleModule, missing_required_lib
    
    Request receiver in simple form keeps a reference to a single successor.
As a variation some receivers may be capable of sending requests out
in several directions, forming a `tree of responsibility`.
    
    '''
*What is this pattern about?
Define a family of algorithms, encapsulate each one, and make them interchangeable.
Strategy lets the algorithm vary independently from clients that use it.
    
    
def convert_to_text(data):
    print('[CONVERT]')
    return '{} as text'.format(data)
    
            pet = self.pet_factory()
        print('We have a lovely {}'.format(pet))
        print('It says {}'.format(pet.speak()))
    
    
if __name__ == '__main__':
    main()
    
        def render(self):
        return self._text