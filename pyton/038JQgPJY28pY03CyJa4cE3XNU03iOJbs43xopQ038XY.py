
        
                self.check_tokenize('''\
async def foo():
  def foo(await):
    await = 1
  if 1:
    await
async += 1
''', '''\
    NAME       'async'       (1, 0) (1, 5)
    NAME       'def'         (1, 6) (1, 9)
    NAME       'foo'         (1, 10) (1, 13)
    OP         '('           (1, 13) (1, 14)
    OP         ')'           (1, 14) (1, 15)
    OP         ':'           (1, 15) (1, 16)
    NEWLINE    '\\n'          (1, 16) (1, 17)
    INDENT     '  '          (2, 0) (2, 2)
    NAME       'def'         (2, 2) (2, 5)
    NAME       'foo'         (2, 6) (2, 9)
    OP         '('           (2, 9) (2, 10)
    NAME       'await'       (2, 10) (2, 15)
    OP         ')'           (2, 15) (2, 16)
    OP         ':'           (2, 16) (2, 17)
    NEWLINE    '\\n'          (2, 17) (2, 18)
    INDENT     '    '        (3, 0) (3, 4)
    NAME       'await'       (3, 4) (3, 9)
    OP         '='           (3, 10) (3, 11)
    NUMBER     '1'           (3, 12) (3, 13)
    NEWLINE    '\\n'          (3, 13) (3, 14)
    DEDENT     ''            (4, 2) (4, 2)
    NAME       'if'          (4, 2) (4, 4)
    NUMBER     '1'           (4, 5) (4, 6)
    OP         ':'           (4, 6) (4, 7)
    NEWLINE    '\\n'          (4, 7) (4, 8)
    INDENT     '    '        (5, 0) (5, 4)
    NAME       'await'       (5, 4) (5, 9)
    NEWLINE    '\\n'          (5, 9) (5, 10)
    DEDENT     ''            (6, 0) (6, 0)
    DEDENT     ''            (6, 0) (6, 0)
    NAME       'async'       (6, 0) (6, 5)
    OP         '+='          (6, 6) (6, 8)
    NUMBER     '1'           (6, 9) (6, 10)
    NEWLINE    '\\n'          (6, 10) (6, 11)
    ''')
    
        def load_short_binbytes(self):
        len = self.read(1)[0]
        self.append(self.read(len))
    dispatch[SHORT_BINBYTES[0]] = load_short_binbytes
    
    ignores = '''\
def foo():
    pass  # type: ignore
    
        env = {
        key.lower(): value
        for key, _, value in
        (line.partition('=') for line in out.splitlines())
        if key and value
    }
    
        if osname[:5] == 'linux':
        # At least on Linux/Intel, 'machine' is the processor --
        # i386, etc.
        # XXX what about Alpha, SPARC, etc?
        return  '%s-%s' % (osname, machine)
    elif osname[:5] == 'sunos':
        if release[0] >= '5':           # SunOS 5 == Solaris 2
            osname = 'solaris'
            release = '%d.%s' % (int(release[0]) - 3, release[2:])
            # We can't use 'platform.architecture()[0]' because a
            # bootstrap problem. We use a dict to get an error
            # if some suspicious happens.
            bitness = {2147483647:'32bit', 9223372036854775807:'64bit'}
            machine += '.%s' % bitness[sys.maxsize]
        # fall through to standard osname-release-machine representation
    elif osname[:3] == 'aix':
        return '%s-%s.%s' % (osname, version, release)
    elif osname[:6] == 'cygwin':
        osname = 'cygwin'
        import re
        rel_re = re.compile(r'[\d.]+')
        m = rel_re.match(release)
        if m:
            release = m.group()
    elif osname[:6] == 'darwin':
        import _osx_support
        osname, release, machine = _osx_support.get_platform_osx(
                                            get_config_vars(),
                                            osname, release, machine)
    
        The returned representation depends on the legacy flag:
    * if legacy is False (the default):
      date has the YYYYMMDD format and time the HHMMSS format
    * if legacy is True:
      date has the YYMMDD format and time the HHMMSS format.
    RFC 3977 compliant servers should understand both formats; therefore,
    legacy is only needed when talking to old servers.
    '''
    if not isinstance(dt, datetime.datetime):
        time_str = '000000'
    else:
        time_str = '{0.hour:02d}{0.minute:02d}{0.second:02d}'.format(dt)
    y = dt.year
    if legacy:
        y = y % 100
        date_str = '{0:02d}{1.month:02d}{1.day:02d}'.format(y, dt)
    else:
        date_str = '{0:04d}{1.month:02d}{1.day:02d}'.format(y, dt)
    return date_str, time_str
    
    def _supports_sched():
    if not hasattr(posix, 'sched_getscheduler'):
        return False
    try:
        posix.sched_getscheduler(0)
    except OSError as e:
        if e.errno == errno.ENOSYS:
            return False
    return True
    
            if not DEBUG:
            cmd = executable
        sys.stderr.write('unable to execute %r for unknown reasons' % cmd)
        os._exit(1)
    else: # in the parent
        # Loop until the child either exits or is terminated by a signal
        # (ie. keep waiting if it's merely stopped)
        while True:
            try:
                pid, status = os.waitpid(pid, 0)
            except OSError as exc:
                if not DEBUG:
                    cmd = executable
                raise DistutilsExecError(
                      'command %r failed: %s' % (cmd, exc.args[-1]))
            if os.WIFSIGNALED(status):
                if not DEBUG:
                    cmd = executable
                raise DistutilsExecError(
                      'command %r terminated by signal %d'
                      % (cmd, os.WTERMSIG(status)))
            elif os.WIFEXITED(status):
                exit_status = os.WEXITSTATUS(status)
                if exit_status == 0:
                    return   # hey, it succeeded!
                else:
                    if not DEBUG:
                        cmd = executable
                    raise DistutilsExecError(
                          'command %r failed with exit status %d'
                          % (cmd, exit_status))
            elif os.WIFSTOPPED(status):
                continue
            else:
                if not DEBUG:
                    cmd = executable
                raise DistutilsExecError(
                      'unknown error executing %r: termination status %d'
                      % (cmd, status))
    
        Handles decoding/encoding between RFC3339 strings and aware (not
    naive) `datetime.datetime` objects
    (e.g. ``datetime.datetime.now(pytz.utc)``).
    
    # If false, no module index is generated.
#latex_domain_indices = True
    
            self.assertFalse(self.addr1.conflicts(self.addr))
        self.assertTrue(self.addr1.conflicts(self.addr_defined))
        self.assertFalse(self.addr1.conflicts(self.addr_default))
    
    from acme.magic_typing import Dict  # pylint: disable=unused-import, no-name-in-module
from certbot import constants
from certbot import errors
from certbot import interfaces
    
    
def gradients_collection(ys, xs, grad_ys=None, **kwargs):
    return gradients(ys, xs, grad_ys, checkpoints='collection', **kwargs)
    
                    var_x = K.reshape(inputs, (batch_size,
                                           self.group,
                                           channels // self.group,
                                           height,
                                           width))
                mean = K.mean(var_x, axis=[2, 3, 4], keepdims=True)
                std = K.sqrt(K.var(var_x, axis=[2, 3, 4], keepdims=True) + self.epsilon)
                var_x = (var_x - mean) / std
    
    
_DEFAULTS = {
    'threshold': {
        'default': 99.0,
        'info': 'Adjust the threshold for histogram matching. Can reduce extreme colors '
                'leaking in by filtering out colors at the extreme ends of the histogram '
                'spectrum.',
        'datatype': float,
        'rounding': 1,
        'min_max': (90.0, 100.0),
        'choices': [],
        'gui_radio': False,
        'fixed': True,
    }
}

    
        # MASK MANIPULATIONS
    def erode(self, mask):
        ''' Erode/dilate mask if requested '''
        kernel = self.get_erosion_kernel(mask)
        if self.config['erosion'] > 0:
            logger.trace('Eroding mask')
            mask = cv2.erode(mask, kernel, iterations=1)  # pylint: disable=no-member
        else:
            logger.trace('Dilating mask')
            mask = cv2.dilate(mask, kernel, iterations=1)  # pylint: disable=no-member
        return mask
    
        def __call__(self, shape, dtype='float32'):  # tf needs partition_info=None
        shape = list(shape)
        if self.scale == 1:
            return self.initializer(shape)
        new_shape = shape[:3] + [shape[3] // (self.scale ** 2)]
        if isinstance(self.initializer, dict):
            self.initializer = initializers.deserialize(self.initializer)
        var_x = self.initializer(new_shape, dtype)
        var_x = tf.transpose(var_x, perm=[2, 0, 1, 3])
        var_x = tf.image.resize_nearest_neighbor(
            var_x,
            size=(shape[0] * self.scale, shape[1] * self.scale),
            align_corners=True)
        var_x = tf.space_to_depth(var_x, block_size=self.scale, data_format='NHWC')
        var_x = tf.transpose(var_x, perm=[1, 2, 0, 3])
        return var_x
    
        def __init__(self, parent):
        ttk.Frame.__init__(self, parent)
        self.pack(side=tk.BOTTOM, padx=10, pady=2, fill=tk.X, expand=False)