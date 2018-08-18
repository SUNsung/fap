
        
          formula = ARGV.formulae.first
  options = Options.create(ARGV.flags_only)
  build   = Build.new(formula, options)
  build.install
rescue Exception => e
  Marshal.dump(e, error_pipe)
  error_pipe.close
  exit! 1
end

    
        version '3' do
      self.release = '3.5.17'
      self.base_url = 'https://github.com/d3/d3-3.x-api-reference/blob/master/'
      self.root_path = 'API-Reference.md'
    
        def initialize(filters = nil)
      @filters = filters ? filters.dup : []
    end
    
          base = path
      dest = url.path
    
          def values_at(*indices)
        indices.collect { |key| self[convert_key(key)] }
      end
    
            @value << new_block
      end
    end
  end
end

    
              # Parse the options
          argv = parse_options(opts)
          return if !argv
          raise Vagrant::Errors::CLIInvalidUsage, help: opts.help.chomp if argv.length != 3
    
            # If we're just checking, then just return exit codes
        if options[:check]
          return 0 if cap_host.capability?(name)
          return 1
        end
    
        header = Gem::Package::TarHeader.new :name => name, :mode => mode,
                                         :size => size, :prefix => prefix,
                                         :mtime => ENV['SOURCE_DATE_EPOCH'] ? Time.at(ENV['SOURCE_DATE_EPOCH'].to_i).utc : Time.now
    
        def stop_servers
      if @normal_server
        @normal_server.kill.join
        @normal_server = nil
      end
      if @proxy_server
        @proxy_server.kill.join
        @proxy_server = nil
      end
      if @ssl_server
        @ssl_server.stop
        @ssl_server = nil
      end
      if @ssl_server_thread
        @ssl_server_thread.kill.join
        @ssl_server_thread = nil
      end
      utils = WEBrick::Utils    # TimeoutHandler is since 1.9
      utils::TimeoutHandler.terminate if defined?(utils::TimeoutHandler.terminate)
    end
    
        ##
    # Basic authentication for proxy servers.  See BasicAuth for details.
    
          def get_passwd(realm, user, reload_db)
        reload() if reload_db
        @passwd[user]
      end
    
        # check that consumer threads with values match producers that called push before close
    assert_equal successful_prod_threads.map{|thr| thr[:pc]}, popped_values.compact.sort
    assert_nil q.pop
  end
    
        def default_regexp # :nodoc:
      {
        SCHEME: /\A[A-Za-z][A-Za-z0-9+\-.]*\z/,
        USERINFO: /\A(?:%\h\h|[!$&-.0-;=A-Z_a-z~])*\z/,
        HOST: /\A(?:(?<IP-literal>\[(?:(?<IPv6address>(?:\h{1,4}:){6}(?<ls32>\h{1,4}:\h{1,4}|(?<IPv4address>(?<dec-octet>[1-9]\d|1\d{2}|2[0-4]\d|25[0-5]|\d)\.\g<dec-octet>\.\g<dec-octet>\.\g<dec-octet>))|::(?:\h{1,4}:){5}\g<ls32>|\h{,4}::(?:\h{1,4}:){4}\g<ls32>|(?:(?:\h{1,4}:)?\h{1,4})?::(?:\h{1,4}:){3}\g<ls32>|(?:(?:\h{1,4}:){,2}\h{1,4})?::(?:\h{1,4}:){2}\g<ls32>|(?:(?:\h{1,4}:){,3}\h{1,4})?::\h{1,4}:\g<ls32>|(?:(?:\h{1,4}:){,4}\h{1,4})?::\g<ls32>|(?:(?:\h{1,4}:){,5}\h{1,4})?::\h{1,4}|(?:(?:\h{1,4}:){,6}\h{1,4})?::)|(?<IPvFuture>v\h+\.[!$&-.0-;=A-Z_a-z~]+))\])|\g<IPv4address>|(?<reg-name>(?:%\h\h|[!$&-.0-9;=A-Z_a-z~])*))\z/,
        ABS_PATH: /\A\/(?:%\h\h|[!$&-.0-;=@-Z_a-z~])*(?:\/(?:%\h\h|[!$&-.0-;=@-Z_a-z~])*)*\z/,
        REL_PATH: /\A(?:%\h\h|[!$&-.0-;=@-Z_a-z~])+(?:\/(?:%\h\h|[!$&-.0-;=@-Z_a-z~])*)*\z/,
        QUERY: /\A(?:%\h\h|[!$&-.0-;=@-Z_a-z~\/?])*\z/,
        FRAGMENT: /\A(?:%\h\h|[!$&-.0-;=@-Z_a-z~\/?])*\z/,
        OPAQUE: /\A(?:[^\/].*)?\z/,
        PORT: /\A[\x09\x0a\x0c\x0d ]*\d*[\x09\x0a\x0c\x0d ]*\z/,
      }
    end
    
          expect_updated_sign_in_at(user)
    end
    
      def theme_color
    '#282c37'
  end
    
    require 'rubygems'  # install rubygems
require 'hpricot'   # gem install hpricot
require 'uri'
require 'timeout'
    
    
    
            when :err
          case s[:last]
            when :pass
              # Oops got a -ERR after a pass so its crap ignore the pass
              # But report it, might be helpfull for guessing :-)
    
        _cal[ver].each_pair do |key, value|
      cal[ver][key] = Array.new
      cal[ver][key] << String.new
      cal[ver][key][-1] << '#ifdef AIX%s' % ver.delete('.')
      cal[ver][key][-1] << '\n'
      cal[ver][key][-1] << '''.rjust(5)
      value.each_byte do |c|
        cal[ver][key][-1] << '\x%02x' % c
      end
      cal[ver][key][-1] << '''.ljust(7)
      cal[ver][key][-1] << '/*  cal     r2,-%d(r29)' %
          (65536 - value.unpack('nn')[1])
      cal[ver][key][-1] << '*/'.rjust(15)
      cal[ver][key][-1] << '\n'
      cal[ver][key][-1] << '#endif'
      cal[ver][key][-1] << '\n'
    end
    
    module RuboCop
  module Cop
    module Performance
      # This cop identifies the use of `Regexp#match` or `String#match`, which
      # returns `#<MatchData>`/`nil`. The return value of `=~` is an integral
      # index/`nil` and is more performant.
      #
      # @example
      #   # bad
      #   do_something if str.match(/regex/)
      #   while regex.match('str')
      #     do_something
      #   end
      #
      #   # good
      #   method(str =~ /regex/)
      #   return value unless regex =~ 'str'
      class RedundantMatch < Cop
        MSG = 'Use `=~` in places where the `MatchData` returned by ' \
              '`#match` will not be used.'.freeze
    
            expect(cop.offenses).to be_empty
      end