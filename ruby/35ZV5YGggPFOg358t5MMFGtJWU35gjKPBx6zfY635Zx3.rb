
        
              if year != off_year
        off = nil
        off = zone_offset(zone, year) if zone
      end
    
      def test_invalid
    # They were actually used in some web sites.
    assert_raise(ArgumentError) { Time.httpdate('1 Dec 2001 10:23:57 GMT') }
    assert_raise(ArgumentError) { Time.httpdate('Sat, 1 Dec 2001 10:25:42 GMT') }
    assert_raise(ArgumentError) { Time.httpdate('Sat,  1-Dec-2001 10:53:55 GMT') }
    assert_raise(ArgumentError) { Time.httpdate('Saturday, 01-Dec-2001 10:15:34 GMT') }
    assert_raise(ArgumentError) { Time.httpdate('Saturday, 01-Dec-101 11:10:07 GMT') }
    assert_raise(ArgumentError) { Time.httpdate('Fri, 30 Nov 2001 21:30:00 JST') }
    
      def popen_run(cmd, opts, child_io, parent_io) # :nodoc:
    if last = Hash.try_convert(cmd.last)
      opts = opts.merge(last)
      cmd.pop
    end
    pid = spawn(*cmd, opts)
    wait_thr = Process.detach(pid)
    child_io.each(&:close)
    result = [*parent_io, wait_thr]
    if defined? yield
      begin
        return yield(*result)
      ensure
        parent_io.each(&:close)
        wait_thr.join
      end
    end
    result
  end
  module_function :popen_run
  class << self
    private :popen_run
  end
    
        module StatusLine # :nodoc: all
      def terminal_width
        unless @terminal_width ||= nil
          begin
            require 'io/console'
            width = $stdout.winsize[1]
          rescue LoadError, NoMethodError, Errno::ENOTTY, Errno::EBADF, Errno::EINVAL
            width = ENV['COLUMNS'].to_i.nonzero? || 80
          end
          width -= 1 if /mswin|mingw/ =~ RUBY_PLATFORM
          @terminal_width = width
        end
        @terminal_width
      end
    
    assert_finish 10, %q{
  begin
    require 'io/nonblock'
    require 'timeout'
    timeout(3) do
      r, w = IO.pipe
      w.nonblock?
      w.nonblock = true
      w.write_nonblock('a' * 100000)
      w.nonblock = false
      t1 = Thread.new { w.write('b' * 4096) }
      t2 = Thread.new { w.write('c' * 4096) }
      sleep 0.5
      r.sysread(4096).length
      sleep 0.5
      r.sysread(4096).length
      t1.join
      t2.join
    end
  rescue LoadError, Timeout::Error, NotImplementedError
  end
}, '[ruby-dev:32566]'
    
    # dynamic symbol literal
assert_equal 'a3c',             ':'a#{1+2}c''
assert_equal ':a3c',            ':'a#{1+2}c'.inspect'
assert_equal 'Symbol',          ':'a#{1+2}c'.class'
    
    # This is the script used to automatically convert all of twbs/bootstrap LESS to Sass.
#
# Most differences are fixed by regexps and other forms of string substitution.
# There are Bootstrap-specific workarounds for the lack of parent selectors, recursion, mixin namespaces, extend within @media, etc in Sass 3.2.
class Converter
  module LessConversion
    # Some regexps for matching bits of SCSS:
    SELECTOR_CHAR               = '\[\]$\w\-{}#,.:&>@'
    # 1 selector (the part before the {)
    SELECTOR_RE                 = /[#{SELECTOR_CHAR}]+[#{SELECTOR_CHAR}\s]*/
    # 1 // comment
    COMMENT_RE                  = %r((?:^[ \t]*//[^\n]*\n))
    # 1 {, except when part of @{ and #{
    RULE_OPEN_BRACE_RE          = /(?<![@#\$])\{/
    # same as the one above, but in reverse (on a reversed string)
    RULE_OPEN_BRACE_RE_REVERSE  = /\{(?![@#\$])/
    # match closed brace, except when \w precedes }, or when }[.'']. a heurestic to exclude } that are not selector body close }
    RULE_CLOSE_BRACE_RE         = /(?<!\w)\}(?![.''])/
    RULE_CLOSE_BRACE_RE_REVERSE = /(?<![.''])\}(?!\w)/
    # match any brace that opens or closes a properties body
    BRACE_RE                    = /#{RULE_OPEN_BRACE_RE}|#{RULE_CLOSE_BRACE_RE}/m
    BRACE_RE_REVERSE            = /#{RULE_OPEN_BRACE_RE_REVERSE}|#{RULE_CLOSE_BRACE_RE_REVERSE}/m
    # valid characters in mixin definitions
    SCSS_MIXIN_DEF_ARGS_RE      = /[\w\-,\s$:#%()]*/
    LESS_MIXIN_DEF_ARGS_RE      = /[\w\-,;.\s@:#%()]*/
    
      # Enable Rack::Cache to put a simple HTTP cache in front of your application
  # Add `rack-cache` to your Gemfile before enabling this.
  # For large-scale production use, consider using a caching reverse proxy like nginx, varnish or squid.
  # config.action_dispatch.rack_cache = true
    
                -- Finally, add our sequence number to our base, and chop
            -- it to the last two bytes
            tail := (
              (sequence_base + nextval(table_name || '_id_seq'))
              & 65535);
    
      # Before we load the schema, define the timestamp_id function.
  # Idiomatically, we might do this in a migration, but then it
  # wouldn't end up in schema.rb, so we'd need to figure out a way to
  # get it in before doing db:setup as well. This is simpler, and
  # ensures it's always in place.
  Rake::Task['db:schema:load'].enhance ['db:define_timestamp_id']
    
      private
    
        #
    # @param ips [String] IP range(s)
    # @return [true] if actions on ips are allowed.
    # @return [false] if actions are not allowed on ips.
    def allow_actions_on?(ips)
      return true unless limit_to_network
      return true unless boundary
      return true if boundary.empty?
      boundaries = Shellwords.split(boundary)
      return true if boundaries.empty? # It's okay if there is no boundary range after all
      given_range = Rex::Socket::RangeWalker.new(ips)
      return false unless given_range # Can't do things to nonexistant IPs
      allowed = false
      boundaries.each do |boundary_range|
        ok_range = Rex::Socket::RangeWalker.new(boundary)
        allowed  = true if ok_range.include_range? given_range
      end
      return allowed
    end
    
    