
        
            def get_level_message(self, record):
        separator = ': '
        if record.levelno == logging.WARNING:
            return colors.yellow(record.levelname) + separator
        if record.levelno == logging.ERROR:
            return colors.red(record.levelname) + separator
    
    
def ignore_sigpipe():
    # Restore default behavior for SIGPIPE instead of raising
    # an exception when encountered.
    if not IS_WINDOWS_PLATFORM:
        signal.signal(signal.SIGPIPE, signal.SIG_DFL)

    
            vol = Volume(
            self.client, 'composetest', name, driver=driver, driver_opts=opts,
            external=bool(external), custom_name=custom_name
        )
        self.tmp_volumes.append(vol)
        return vol
    
    import six
    
        _, err = capsys.readouterr()
    assert '\x1b' not in err
