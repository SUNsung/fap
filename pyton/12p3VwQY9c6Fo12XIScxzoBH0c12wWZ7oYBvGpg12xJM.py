
        
        
def get_running_config(module, config=None):
    contents = module.params['running_config']
    if not contents:
        if config:
            contents = config
        else:
            contents = get_config(module)
    return NetworkConfig(indent=1, contents=contents)
    
        if module.params['save_when'] == 'always':
        save_config(module, result)
    elif module.params['save_when'] == 'modified':
        output = run_commands(module, ['show running-config', 'show startup-config'])
    
                if not module.check_mode and module.params['update'] == 'merge':
                load_config(module, commands)
    
    
DOCUMENTATION = '''
---
module: dellos9_config
version_added: '2.2'
author: 'Dhivya P (@dhivyap)'
short_description: Manage Dell EMC Networking OS9 configuration sections
description:
  - OS9 configurations use a simple block indent file syntax
    for segmenting configuration into sections.  This module provides
    an implementation for working with OS9 configuration sections in
    a deterministic way.
extends_documentation_fragment: dellos9
options:
  lines:
    description:
      - The ordered set of commands that should be configured in the
        section.  The commands must be the exact same commands as found
        in the device running-config. Be sure to note the configuration
        command syntax as some commands are automatically modified by the
        device config parser. This argument is mutually exclusive with I(src).
    aliases: ['commands']
  parents:
    description:
      - The ordered set of parents that uniquely identify the section or hierarchy
        the commands should be checked against.  If the parents argument
        is omitted, the commands are checked against the set of top
        level or global commands.
  src:
    description:
      - Specifies the source path to the file that contains the configuration
        or configuration template to load.  The path to the source file can
        either be the full path on the Ansible control host or a relative
        path from the playbook or role root directory. This argument is
        mutually exclusive with I(lines).
  before:
    description:
      - The ordered set of commands to push on to the command stack if
        a change needs to be made.  This allows the playbook designer
        the opportunity to perform configuration commands prior to pushing
        any changes without affecting how the set of commands are matched
        against the system.
  after:
    description:
      - The ordered set of commands to append to the end of the command
        stack if a change needs to be made.  Just like with I(before) this
        allows the playbook designer to append a set of commands to be
        executed after the command set.
  match:
    description:
      - Instructs the module on the way to perform the matching of
        the set of commands against the current device config.  If
        match is set to I(line), commands are matched line by line.  If
        match is set to I(strict), command lines are matched with respect
        to position.  If match is set to I(exact), command lines
        must be an equal match.  Finally, if match is set to I(none), the
        module will not attempt to compare the source configuration with
        the running configuration on the remote device.
    default: line
    choices: ['line', 'strict', 'exact', 'none']
  replace:
    description:
      - Instructs the module on the way to perform the configuration
        on the device.  If the replace argument is set to I(line) then
        the modified lines are pushed to the device in configuration
        mode.  If the replace argument is set to I(block) then the entire
        command block is pushed to the device in configuration mode if any
        line is not correct.
    default: line
    choices: ['line', 'block']
  update:
    description:
      - The I(update) argument controls how the configuration statements
        are processed on the remote device.  Valid choices for the I(update)
        argument are I(merge) and I(check).  When you set this argument to
        I(merge), the configuration changes merge with the current
        device running configuration.  When you set this argument to I(check)
        the configuration updates are determined but not actually configured
        on the remote device.
    default: merge
    choices: ['merge', 'check']
  save:
    description:
      - The C(save) argument instructs the module to save the running-
        config to the startup-config at the conclusion of the module
        running.  If check mode is specified, this argument is ignored.
    type: bool
    default: no
  config:
    description:
      - The module, by default, will connect to the remote device and
        retrieve the current running-config to use as a base for comparing
        against the contents of source.  There are times when it is not
        desirable to have the task get the current running-config for
        every task in a playbook.  The I(config) argument allows the
        implementer to pass in the configuration to use as the base
        config for comparison.
  backup:
    description:
      - This argument will cause the module to create a full backup of
        the current C(running-config) from the remote device before any
        changes are made. If the C(backup_options) value is not given,
        the backup file is written to the C(backup) folder in the playbook
        root directory. If the directory does not exist, it is created.
    type: bool
    default: 'no'
  backup_options:
    description:
      - This is a dict object containing configurable options related to backup file path.
        The value of this option is read only when C(backup) is set to I(yes), if C(backup) is set
        to I(no) this option will be silently ignored.
    suboptions:
      filename:
        description:
          - The filename to be used to store the backup configuration. If the the filename
            is not given it will be generated based on the hostname, current time and date
            in format defined by <hostname>_config.<current-date>@<current-time>
      dir_path:
        description:
          - This option provides the path ending with directory name in which the backup
            configuration file will be stored. If the directory does not exist it will be first
            created and the filename is either the value of C(filename) or default filename
            as described in C(filename) options description. If the path value is not given
            in that case a I(backup) directory will be created in the current working directory
            and backup configuration will be copied in C(filename) within I(backup) directory.
        type: path
    type: dict
    version_added: '2.8'
notes:
  - This module requires Dell OS9 version 9.10.0.1P13 or above.
    
        @patch('ansible.module_utils.facts.hardware.linux.LinuxHardware._run_lsblk', return_value=(0, LSBLK_OUTPUT, ''))
    def test_lsblk_uuid(self, mock_run_lsblk):
        module = Mock()
        lh = linux.LinuxHardware(module=module, load_on_init=False)
        lsblk_uuids = lh._lsblk_uuid()
    
            Optional `strict' argument when false adds a bunch of commonly found,
        but non-standard types.
        '''
        extensions = self.guess_all_extensions(type, strict)
        if not extensions:
            return None
        return extensions[0]
    
    
if __name__ == '__main__':
    unittest.main()

    
            If the message is a multipart and the decode flag is True, then None
        is returned.
        '''
        # Here is the logic table for this code, based on the email5.0.0 code:
        #   i     decode  is_multipart  result
        # ------  ------  ------------  ------------------------------
        #  None   True    True          None
        #   i     True    True          None
        #  None   False   True          _payload (a list)
        #   i     False   True          _payload element i (a Message)
        #   i     False   False         error (not a list)
        #   i     True    False         error (not a list)
        #  None   False   False         _payload
        #  None   True    False         _payload decoded (bytes)
        # Note that Barry planned to factor out the 'decode' case, but that
        # isn't so easy now that we handle the 8 bit data, which needs to be
        # converted in both the decode and non-decode path.
        if self.is_multipart():
            if decode:
                return None
            if i is None:
                return self._payload
            else:
                return self._payload[i]
        # For backward compatibility, Use isinstance and this error message
        # instead of the more logical is_multipart test.
        if i is not None and not isinstance(self._payload, list):
            raise TypeError('Expected list, got %s' % type(self._payload))
        payload = self._payload
        # cte might be a Header, so for now stringify it.
        cte = str(self.get('content-transfer-encoding', '')).lower()
        # payload may be bytes here.
        if isinstance(payload, str):
            if utils._has_surrogates(payload):
                bpayload = payload.encode('ascii', 'surrogateescape')
                if not decode:
                    try:
                        payload = bpayload.decode(self.get_param('charset', 'ascii'), 'replace')
                    except LookupError:
                        payload = bpayload.decode('ascii', 'replace')
            elif decode:
                try:
                    bpayload = payload.encode('ascii')
                except UnicodeError:
                    # This won't happen for RFC compliant messages (messages
                    # containing only ASCII code points in the unicode input).
                    # If it does happen, turn the string into bytes in a way
                    # guaranteed not to fail.
                    bpayload = payload.encode('raw-unicode-escape')
        if not decode:
            return payload
        if cte == 'quoted-printable':
            return quopri.decodestring(bpayload)
        elif cte == 'base64':
            # XXX: this is a bit of a hack; decode_b should probably be factored
            # out somewhere, but I haven't figured out where yet.
            value, defects = decode_b(b''.join(bpayload.splitlines()))
            for defect in defects:
                self.policy.handle_defect(self, defect)
            return value
        elif cte in ('x-uuencode', 'uuencode', 'uue', 'x-uue'):
            in_file = BytesIO(bpayload)
            out_file = BytesIO()
            try:
                uu.decode(in_file, out_file, quiet=True)
                return out_file.getvalue()
            except uu.Error:
                # Some decoding problem
                return bpayload
        if isinstance(payload, str):
            return bpayload
        return payload
    
                    bogus jpg body
    
        def CheckNotSupportedError(self):
        self.assertTrue(issubclass(sqlite.NotSupportedError,
                                   sqlite.DatabaseError),
                        'NotSupportedError is not a subclass of DatabaseError')
    
        with tf.variable_scope(name, reuse=reuse):
        alpha = get_w(alpha_shape, w_initializer=alpha_init, name='alpha')
        # o = relu(x) + 0.5 * tf.multiply(alpha, x - tf.abs(x))  # TFLearn
        o = leaky_relu(x, alpha)  # TensorLayer / <Deep Learning>
    
    
# # Test
# def attention_flow_2(h, u, T=None, J=None, d=None, name=None, reuse=None):
#     '''Attention Flow Match Layer
#     Input shape:
#         h: [N, T, d]  # 原文中的 shape 为 [N, T, 2d], 因为经过了 bi-LSTM, 维度扩了一倍
#         u: [N, J, d]
#     Output shape:
#         [N, T, 4d]
# 
#     Args:
#         h: context encoding     shape: [N, T, d]
#         u: question encoding    shape: [N, J, d]
#         T(int): context length
#         J(int): question length
#         d(int): features size
#         name(str):
#         reuse(bool):
# 
#     Returns:
# 
#     '''
#     print('Test')
#     d = d or int(h.get_shape()[-1])
#     T = T or int(h.get_shape()[-2])
#     J = J or int(u.get_shape()[-2])
# 
#     with tf.variable_scope(name or 'attention_flow', reuse=reuse):
#         h_expand = tf.tile(tf.expand_dims(h, axis=2), [1, 1, J, 1])
#         u_expand = tf.tile(tf.expand_dims(u, axis=1), [1, T, 1, 1])
#         hu = tf.multiply(h_expand, u_expand)  # [N, T, J, d]
#         h_u_hu = tf.concat([h_expand, u_expand, hu], axis=-1)  # [N, T, J, 3d]
#         W_s = get_w([3 * d, 1])  # [3d, 1]
# 
#         # similarity matrix
#         # S = tf.reshape(tf.einsum('ntjd,do->ntjo', h_u_hu, W_s), [-1, T, J])
#         # 以上操作等价于
#         S = tf.reshape(tf.matmul(tf.reshape(h_u_hu, [-1, 3 * d]), W_s), [-1, T, J])
# 
#         # 得到 S 后，下面的操作就与 `attention_flow_self` 一样了
# 
#         # u_tilde(u~): context to question attended query vectors
#         u_tilde = tf.matmul(softmax(S), u)  # [N, T, d]
# 
#         # h_tilde(h~): question to context attended query vectors
#         b = tf.reduce_max(S, axis=2)  # [N, T]
#         b = softmax(b, axis=-1)  # [N, T]
#         b = tf.expand_dims(b, axis=1)  # [N, 1, T]
#         h_tilde = tf.matmul(b, h)  # [N, 1, d]
#         h_tilde = tf.tile(h_tilde, [1, T, 1])  # [N, T, d]
# 
#         g = tf.concat([h, u_tilde, h * u_tilde, h * h_tilde], axis=-1)  # [N, T, 4d]
# 
#     return g

    
    
def get_w(shape,
          w_initializer=truncated_normal,
          w_regularizer=l2_regularizer,
          name=None):
    name = name or 'W'
    W = tf.get_variable(name, shape, dtype=tf_float, initializer=w_initializer,
                        regularizer=w_regularizer)
    return W
    
        def test_nonce_decoder(self):
        from acme.jws import Header
        nonce_field = Header._fields['nonce']
    
            add_records.append(record_content)