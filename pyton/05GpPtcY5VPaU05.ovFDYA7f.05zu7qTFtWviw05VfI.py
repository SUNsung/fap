
DOCUMENTATION = '''
---
module: iam_server_certificate_facts
short_description: Retrieve the facts of a server certificate
description:
  - Retrieve the attributes of a server certificate
version_added: '2.2'
author: 'Allen Sanabria (@linuxdynasty)'
requirements: [boto3, botocore]
options:
  name:
    description:
      - The name of the server certificate you are retrieving attributes for.
    required: true
extends_documentation_fragment:
    - aws
    - ec2
'''
    
        for (index, rule) in enumerate(desired_rules):
        try:
            if rule != current_rules[index]:
                updates.append((index, rule))
        except IndexError:
            additions.append(rule)
    
    DOCUMENTATION = '''
---
module: vca_nat
short_description: add remove nat rules in a gateway  in a vca
description:
  - Adds or removes nat rules from a gateway in a vca environment
version_added: '2.0'
author: Peter Sprygada (@privateip)
options:
    purge_rules:
      description:
        - If set to true, it will delete all rules in the gateway that are not given as parameter to this module.
      type: bool
      default: false
    nat_rules:
      description:
        - A list of rules to be added to the gateway, Please see examples on valid entries
      required: True
      default: false
extends_documentation_fragment: vca.documentation
'''
    
        try:
        schema_facts = get_schema_facts(cursor)
        user_facts = get_user_facts(cursor)
        role_facts = get_role_facts(cursor)
        configuration_facts = get_configuration_facts(cursor)
        node_facts = get_node_facts(cursor)
        module.exit_json(changed=False,
                         ansible_facts={'vertica_schemas': schema_facts,
                                        'vertica_users': user_facts,
                                        'vertica_roles': role_facts,
                                        'vertica_configuration': configuration_facts,
                                        'vertica_nodes': node_facts})
    except NotSupportedError as e:
        module.fail_json(msg=to_native(e), exception=traceback.format_exc())
    except SystemExit:
        # avoid catching this on python 2.4
        raise
    except Exception as e:
        module.fail_json(msg=to_native(e), exception=traceback.format_exc())
    
        def role_add_hostgroup(self, name, item):
        return self.role_add_member(name=name, item={'hostgroup': item})
    
    EXAMPLES = '''
# Create groups based on the machine architecture
- group_by:
    key: machine_{{ ansible_machine }}
    
    
# ===========================================
# Module execution.
#
    
    
class BufferFull(UnpackException):
    pass
    
    
def check(src, should, use_list=0):
    assert unpackb(src, use_list=use_list) == should
    
        N = len(files)
    
    
def _executable_exists(name):
    return subprocess.call([CHECK_CMD, name],
                           stdout=subprocess.PIPE, stderr=subprocess.PIPE) == 0