      topic.feature_topic_users(args)
    end
    
      def render_response
    render json: {
      html: view_to_html_string('shared/notifications/_button', notification_setting: @notification_setting),
      saved: @saved
    }
  end
    
        projects
  end
end

    
        #
    # Return the number of seconds the specified time zone differs
    # from UTC.
    #
    # Numeric time zones that include minutes, such as
    # <code>-10:00</code> or <code>+1330</code> will work, as will
    # simpler hour-only time zones like <code>-10</code> or
    # <code>+13</code>.
    #
    # Textual time zones listed in ZoneOffset are also supported.
    #
    # If the time zone does not match any of the above, +zone_offset+
    # will check if the local time zone (both with and without
    # potential Daylight Saving \Time changes being in effect) matches
    # +zone+. Specifying a value for +year+ will change the year used
    # to find the local time zone.
    #
    # If +zone_offset+ is unable to determine the offset, nil will be
    # returned.
    def zone_offset(zone, year=self.now.year)
      off = nil
      zone = zone.upcase
      if /\A([+-])(\d\d)(:?)(\d\d)(?:\3(\d\d))?\z/ =~ zone
        off = ($1 == '-' ? -1 : 1) * (($2.to_i * 60 + $4.to_i) * 60 + $5.to_i)
      elsif /\A[+-]\d\d\z/ =~ zone
        off = zone.to_i * 3600
      elsif ZoneOffset.include?(zone)
        off = ZoneOffset[zone] * 3600
      elsif ((t = self.local(year, 1, 1)).zone.upcase == zone rescue false)
        off = t.utc_offset
      elsif ((t = self.local(year, 7, 1)).zone.upcase == zone rescue false)
        off = t.utc_offset
      end
      off
    end
    
      def test_rfc2822_leap_second
    t = Time.utc(1998,12,31,23,59,59)
    assert_equal(t, Time.rfc2822('Thu, 31 Dec 1998 23:59:59 UTC'))
    assert_equal(t, Time.rfc2822('Fri, 31 Dec 1998 23:59:59 -0000'));t.localtime
    assert_equal(t, Time.rfc2822('Fri,  1 Jan 1999 08:59:59 +0900'))
    assert_equal(t, Time.rfc2822('Fri,  1 Jan 1999 00:59:59 +0100'))
    assert_equal(t, Time.rfc2822('Fri, 31 Dec 1998 23:59:59 +0000'))
    assert_equal(t, Time.rfc2822('Fri, 31 Dec 1998 22:59:59 -0100'));t.utc
    t += 1
    assert_equal(t, Time.rfc2822('Thu, 31 Dec 1998 23:59:60 UTC'))
    assert_equal(t, Time.rfc2822('Fri, 31 Dec 1998 23:59:60 -0000'));t.localtime
    assert_equal(t, Time.rfc2822('Fri,  1 Jan 1999 08:59:60 +0900'))
    assert_equal(t, Time.rfc2822('Fri,  1 Jan 1999 00:59:60 +0100'))
    assert_equal(t, Time.rfc2822('Fri, 31 Dec 1998 23:59:60 +0000'))
    assert_equal(t, Time.rfc2822('Fri, 31 Dec 1998 22:59:60 -0100'));t.utc
    t += 1 if t.sec == 60
    assert_equal(t, Time.rfc2822('Thu,  1 Jan 1999 00:00:00 UTC'))
    assert_equal(t, Time.rfc2822('Fri,  1 Jan 1999 00:00:00 -0000'));t.localtime
    assert_equal(t, Time.rfc2822('Fri,  1 Jan 1999 09:00:00 +0900'))
    assert_equal(t, Time.rfc2822('Fri,  1 Jan 1999 01:00:00 +0100'))
    assert_equal(t, Time.rfc2822('Fri,  1 Jan 1999 00:00:00 +0000'))
    assert_equal(t, Time.rfc2822('Fri, 31 Dec 1998 23:00:00 -0100'))
  end
    
      def setup
    @in6_addr_any = IPAddr.new()
    @a = IPAddr.new('3ffe:505:2::/48')
    @b = IPAddr.new('0:0:0:1::')
    @c = IPAddr.new(IN6MASK32)
    @inconvertible_range = 1..5
    @inconvertible_string = 'sometext'
  end
  alias set_up setup
    
    class ACLTest < Test::Unit::TestCase
  HOSTS = SampleHosts.new
    
    
# hash
assert_equal 'Hash',            '{}.class'
assert_equal '{}',              '{}.inspect'
assert_equal 'Hash',            '{1=>2}.class'
assert_equal '{1=>2}',          '{1=>2}.inspect'
assert_equal '2',               'h = {1 => 2}; h[1]'
assert_equal '0',               'h = {1 => 2}; h.delete(1); h.size'
assert_equal '',                'h = {1 => 2}; h.delete(1); h[1]'
assert_equal '2',               'h = {'string' => 'literal', 'goto' => 'hell'}; h.size'
assert_equal 'literal', 'h = {'string'=>'literal', 'goto'=>'hell'}; h['string']'
assert_equal 'hell', 'h = {'string'=>'literal', 'goto'=>'hell'}; h['goto']'
    
    Bootstrap.load!

    
        def puts(*args)
      STDERR.puts *args unless @silence
    end