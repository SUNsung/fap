
        
            # This matches an IPv6 address, but also permits range expressions.
    #
    # This expression looks complex, but it really only spells out the various
    # combinations in which the basic unit of an IPv6 address (0..ffff) can be
    # written, from :: to 1:2:3:4:5:6:7:8, plus the IPv4-in-IPv6 variants such
    # as ::ffff:192.0.2.3.
    #
    # Note that we can't just use ipaddress.ip_address() because we also have to
    # accept ranges in place of each component.
    
        def on_open_shell(self):
        try:
            for cmd in (b'set terminal length 0', b'set terminal width 512'):
                self._exec_cli_command(cmd)
            self._exec_cli_command(b'set terminal length %d' % self.terminal_length)
        except AnsibleConnectionFailure:
            raise AnsibleConnectionFailure('unable to set terminal parameters')

    
            return mapping
    
        def test_max_delay(self):
        strategy = _exponential_backoff(retries=7, delay=1, backoff=2, max_delay=60)
        result = list(strategy())
        self.assertEquals(result, [1, 2, 4, 8, 16, 32, 60])
    
    import homeassistant.config as config_util
    
        if unit_1 == LENGTH_MILES:
        meters = __miles_to_meters(value)
    elif unit_1 == LENGTH_FEET:
        meters = __feet_to_meters(value)
    elif unit_1 == LENGTH_KILOMETERS:
        meters = __kilometers_to_meters(value)