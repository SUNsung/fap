
        
            #
    # Parses +date+ using Date._parse and converts it to a Time object.
    #
    # If a block is given, the year described in +date+ is converted by the
    # block.  For example:
    #
    #     Time.parse(...) {|y| 0 <= y && y < 100 ? (y >= 69 ? y + 1900 : y + 2000) : y}
    #
    # If the upper components of the given time are broken or missing, they are
    # supplied with those of +now+.  For the lower components, the minimum
    # values (1 or 0) are assumed if broken or missing.  For example:
    #
    #     # Suppose it is 'Thu Nov 29 14:33:20 2001' now and
    #     # your time zone is EST which is GMT-5.
    #     now = Time.parse('Thu Nov 29 14:33:20 2001')
    #     Time.parse('16:30', now)     #=> 2001-11-29 16:30:00 -0500
    #     Time.parse('7/23', now)      #=> 2001-07-23 00:00:00 -0500
    #     Time.parse('Aug 31', now)    #=> 2001-08-31 00:00:00 -0500
    #     Time.parse('Aug 2000', now)  #=> 2000-08-01 00:00:00 -0500
    #
    # Since there are numerous conflicts among locally defined time zone
    # abbreviations all over the world, this method is not intended to
    # understand all of them.  For example, the abbreviation 'CST' is
    # used variously as:
    #
    #     -06:00 in America/Chicago,
    #     -05:00 in America/Havana,
    #     +08:00 in Asia/Harbin,
    #     +09:30 in Australia/Darwin,
    #     +10:30 in Australia/Adelaide,
    #     etc.
    #
    # Based on this fact, this method only understands the time zone
    # abbreviations described in RFC 822 and the system time zone, in the
    # order named. (i.e. a definition in RFC 822 overrides the system
    # time zone definition.)  The system time zone is taken from
    # <tt>Time.local(year, 1, 1).zone</tt> and
    # <tt>Time.local(year, 7, 1).zone</tt>.
    # If the extracted time zone abbreviation does not match any of them,
    # it is ignored and the given time is regarded as a local time.
    #
    # ArgumentError is raised if Date._parse cannot extract information from
    # +date+ or if the Time class cannot represent specified date.
    #
    # This method can be used as a fail-safe for other parsing methods as:
    #
    #   Time.rfc2822(date) rescue Time.parse(date)
    #   Time.httpdate(date) rescue Time.parse(date)
    #   Time.xmlschema(date) rescue Time.parse(date)
    #
    # A failure of Time.parse should be checked, though.
    #
    # You must require 'time' to use this method.
    #
    def parse(date, now=self.now)
      comp = !block_given?
      d = Date._parse(date, comp)
      year = d[:year]
      year = yield(year) if year && !comp
      make_time(date, year, d[:mon], d[:mday], d[:hour], d[:min], d[:sec], d[:sec_fraction], d[:zone], now)
    end
    
      def test_numeric_file_descriptor2
    with_pipe {|r, w|
      Open3.popen2(RUBY, '-e', 'STDERR.puts 'foo'', 2 => w) {|i,o,t|
        assert_equal('foo\n', r.gets)
      }
    }
  end
    
    if profile_filename = ENV['PROFILE']
  require 'ruby-prof'
  reporter =
    case (profile_extname = File.extname(profile_filename))
    when '.txt'
      RubyProf::FlatPrinterWithLineNumbers
    when '.html'
      RubyProf::GraphHtmlPrinter
    when '.callgrind'
      RubyProf::CallTreePrinter
    else
      raise 'Unknown profiler format indicated by extension: #{profile_extname}'
    end
  File.open(profile_filename, 'w') do |io|
    reporter.new(RubyProf.profile { Pod::Command.run(ARGV) }).print(io)
  end
else
  Pod::Command.run(ARGV)
end

    
            self.summary = 'The repl listens to commands on standard input'
        self.description = <<-DESC
          The repl listens to commands on standard input and prints their
          result to standard output.
          It accepts all the other ipc subcommands. The repl will signal the
          end of output with the the ASCII CR+LF `\\n\\r`.
        DESC
    
          def update_if_necessary!
        if @update && config.verbose?
          UI.section('\nUpdating Spec Repositories\n'.yellow) do
            Repo.new(ARGV.new(['update'])).run
          end
        end
      end
    
        def exit_deploy_because_of_exception(ex)
      warn t(:deploy_failed, ex: ex.message)
      invoke 'deploy:failed'
      exit(false)
    end
    
      let(:help_output) do
    out, _err = capture_io do
      flags '--help', '-h'
    end
    out
  end
    
        def url(style_name = default_style, options = {})
      if options == true || options == false # Backwards compatibility.
        @url_generator.for(style_name, default_options.merge(:timestamp => options))
      else
        @url_generator.for(style_name, default_options.merge(options))
      end
    end
    
        def initialize
      clear
    end
    
            def description
          'have an attachment named #{@attachment_name}'
        end
    
            def rejected_types_rejected?
          @missing_rejected_types ||= @rejected_types.select { |type| type_allowed?(type) }
          @missing_rejected_types.none?
        end
      end
    end
  end
end

    
            def matches? subject
          @subject = subject
          @subject = subject.new if subject.class == Class
          error_when_not_valid? && no_error_when_valid?
        end
    
        i0, s0 = index, []
    r1 = _nt_rvalue
    s0 << r1
    if r1
      r2 = _nt__
      s0 << r2
      if r2
        r3 = _nt_regexp_operator
        s0 << r3
        if r3
          r4 = _nt__
          s0 << r4
          if r4
            i5 = index
            r6 = _nt_string
            if r6
              r5 = r6
            else
              r7 = _nt_regexp
              if r7
                r5 = r7
              else
                @index = i5
                r5 = nil
              end
            end
            s0 << r5
          end
        end
      end
    end
    if s0.last
      r0 = instantiate_node(LogStash::Config::AST::RegexpExpression,input, i0...index, s0)
      r0.extend(RegexpExpression0)
    else
      @index = i0
      r0 = nil
    end