
def patharg(path):
    '''
    Back slashes need to be escaped in ITEM args,
    even in Windows paths.
    
    
def program(args, env, log_error):
    '''
    The main program without error handling
    
            '''
        raise NotImplementedError()
    
    
DEFAULT_CONFIG_DIR = str(os.environ.get(
    'HTTPIE_CONFIG_DIR',
    os.path.expanduser('~/.httpie') if not is_windows else
    os.path.expandvars(r'%APPDATA%\\httpie')
))
    
    
EXIT_STATUS_LABELS = {
    value: key
    for key, value in ExitStatus.__dict__.items()
    if key.isupper()
}

    
                # --no-option => --option
            inverted = '--' + option[5:]
            for action in self._actions:
                if inverted in action.option_strings:
                    setattr(self.args, action.dest, action.default)
                    break
            else:
                invalid.append(option)
    
        def load_installed_plugins(self):
        for entry_point_name in ENTRY_POINT_NAMES:
            for entry_point in iter_entry_points(entry_point_name):
                plugin = entry_point.load()
                plugin.package_name = entry_point.dist.key
                self.register(entry_point.load())
    
    
def main():
    num_args = len(sys.argv)
    if num_args < 2:
        print('No file passed (file should contain Markdown table syntax)')
        sys.exit(1)
    
        A simple application that shows how Flask and jQuery get along.
    
    if (twisted_version.major, twisted_version.minor, twisted_version.micro) >= (15, 5, 0):
    collect_ignore += _py_files('scrapy/xlib/tx')
    
            # start checks
        if opts.list:
            for spider, methods in sorted(contract_reqs.items()):
                if not methods and not opts.verbose:
                    continue
                print(spider)
                for method in sorted(methods):
                    print('  * %s' % method)
        else:
            start = time.time()
            self.crawler_process.start()
            stop = time.time()
    
        def short_desc(self):
        return 'Run a spider'
    
    
class Contract(object):
    ''' Abstract class for contracts '''
    
        win_version = env_info.win32_version()
    if win_version == 10:
        xlog.info('detected Win10, enable connect concurrency control, interval:%d', config.connect_interval)
        return config.connect_interval
    
    RecognitionException are generated, when a recognizer encounters incorrect
or unexpected input.