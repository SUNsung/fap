  def complete_option(method)
    if self.respond_to? 'complete_#{method}'.to_sym
      self.send('complete_#{method}'.to_sym)
    end
  end
    
      def tumblr
    Tumblr.configure do |config|
      config.consumer_key = tumblr_consumer_key
      config.consumer_secret = tumblr_consumer_secret
      config.oauth_token = tumblr_oauth_token
      config.oauth_token_secret = tumblr_oauth_token_secret
    end
    
    Tumblr::Client.new
  end
end
    
      def table_sort
    raise('You must call set_table_sort in any action using table_sort.') unless @table_sort_info.present?
    @table_sort_info[:order]
  end
    
      def test_order
    assert_equal(%w'', no_error {@opt.order!(%w'')})
    assert_equal(self.class, @flag)
    assert_equal(%w'foo bar', no_error {@opt.order!(%w'foo bar')})
    assert_equal(self.class, @flag)
    assert_equal(%w'- foo bar', no_error {@opt.order!(%w'- foo bar')})
    assert_equal(self.class, @flag)
    assert_equal(%w'foo bar', no_error {@opt.permute!(%w'-- foo bar')})
    assert_equal(self.class, @flag)
    assert_equal(%w'foo - bar', no_error {@opt.order!(%w'foo - bar')})
    assert_equal(self.class, @flag)
    assert_equal(%w'foo -- bar', no_error {@opt.order!(%w'foo -- bar')})
    assert_equal(self.class, @flag)
    assert_equal(%w'foo -- --help bar', no_error {@opt.order!(%w'foo -- --help bar')})
    assert_equal(self.class, @flag)
  end
    
      # Open3.pipeline_r starts a list of commands as a pipeline with a pipe
  # which connects to stdout of the last command.
  #
  #   Open3.pipeline_r(cmd1, cmd2, ... [, opts]) {|last_stdout, wait_threads|
  #     ...
  #   }
  #
  #   last_stdout, wait_threads = Open3.pipeline_r(cmd1, cmd2, ... [, opts])
  #   ...
  #   last_stdout.close
  #
  # Each cmd is a string or an array.
  # If it is an array, the elements are passed to Process.spawn.
  #
  #   cmd:
  #     commandline                              command line string which is passed to a shell
  #     [env, commandline, opts]                 command line string which is passed to a shell
  #     [env, cmdname, arg1, ..., opts]          command name and one or more arguments (no shell)
  #     [env, [cmdname, argv0], arg1, ..., opts] command name and arguments including argv[0] (no shell)
  #
  #   Note that env and opts are optional, as for Process.spawn.
  #
  # Example:
  #
  #   Open3.pipeline_r('zcat /var/log/apache2/access.log.*.gz',
  #                    [{'LANG'=>'C'}, 'grep', 'GET /favicon.ico'],
  #                    'logresolve') {|o, ts|
  #     o.each_line {|line|
  #       ...
  #     }
  #   }
  #
  #   Open3.pipeline_r('yes', 'head -10') {|o, ts|
  #     p o.read      #=> 'y\ny\ny\ny\ny\ny\ny\ny\ny\ny\n'
  #     p ts[0].value #=> #<Process::Status: pid 24910 SIGPIPE (signal 13)>
  #     p ts[1].value #=> #<Process::Status: pid 24913 exit 0>
  #   }
  #
  def pipeline_r(*cmds, **opts, &block)
    out_r, out_w = IO.pipe
    opts[:out] = out_w
    
        def split_arguments(arguments, sep=',')
      return [] if arguments.strip == 'void'
      arguments.scan(/([\w\*\s]+\(\*\w*\)\(.*?\)|[\w\*\s\[\]]+)(?:#{sep}\s*|$)/).collect {|m| m[0]}
    end
    
    require 'scanf.rb'
require 'test/unit'
require 'tempfile'
    
    
    {          case connections
          when 0;
          when 1; assert_equal true, ssl.session_reused?
          when 2; assert_equal false, ssl.session_reused?
          when 3; assert_equal true, ssl.session_reused?
          when 4; assert_equal false, ssl.session_reused?
          when 5..9; assert_equal true, ssl.session_reused?
          end
        }
      end
    end
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
    
          z = Zlib::Deflate.new
      z << 'foo'
      assert_raise(Zlib::StreamError) { z.set_dictionary('foo') }
      EnvUtil.suppress_warning do
        z.close # without this, outputs `zlib(finalizer): the stream was freed prematurely.'
      end
    end
    
            def parse(duration, do_validate=true)
          if do_validate and /\A(?:
                                  \d?\d:[0-5]\d:[0-5]\d|
                                  [0-5]?\d:[0-5]\d
                                )\z/x !~ duration
            raise ArgumentError,
                    'must be one of HH:MM:SS, H:MM:SS, MM::SS, M:SS: ' +
                    duration.inspect
          end
    
    def list_login_items_for_app(app_path)
  out, err, status = Open3.capture3(
    '/usr/bin/osascript', '-e',
    'tell application \'System Events\' to get the name of every login item ' \
    'whose path contains \'#{File.basename(app_path)}\''
  )
  if status.exitstatus > 0
    $stderr.puts err
    exit status.exitstatus
  end
  puts out.gsub(', ', '\n')
end
    
    module Mastodon::Snowflake
  DEFAULT_REGEX = /timestamp_id\('(?<seq_prefix>\w+)'/
    
      def page_url(page)
    account_following_index_url(@account, page: page) unless page.nil?
  end
    
      def updated
    object.updated_at.iso8601
  end
    
    def codepoints_to_filename(codepoints)
  codepoints.downcase.gsub(/\A[0]+/, '').tr(' ', '-')
end
    
          opts.on('-s', '--stdin', :NONE,
              'Read input from standard input instead of an input file.',
              'This is the default if no input file is specified. Requires --from.') do
        @options[:input] = $stdin
      end
    
            def run
          if @pod_name.nil?
            # Note: at that point, @wipe_all is always true (thanks to `validate!`)
            # Remove all
            clear_cache
          else
            # Remove only cache for this pod
            cache_descriptors = @cache.cache_descriptors_per_pod[@pod_name]
            if cache_descriptors.nil?
              UI.notice('No cache for pod named #{@pod_name} found')
            elsif cache_descriptors.count > 1 && !@wipe_all
              # Ask which to remove
              choices = cache_descriptors.map { |c| '#{@pod_name} v#{c[:version]} (#{pod_type(c)})' }
              index = UI.choose_from_array(choices, 'Which pod cache do you want to remove?')
              remove_caches([cache_descriptors[index]])
            else
              # Remove all found cache of this pod
              remove_caches(cache_descriptors)
            end
          end
        end
    
          def run
        UI.puts report
      end
    
          # @param  [Xcodeproj::Project] project
      #         The xcode project to generate a podfile for.
      #
      # @return [String] the text of the Podfile for the provided project
      #
      def podfile_template(project)
        podfile = ''
        podfile << 'project '#{@project_path}'\n\n' if @project_path
        podfile << <<-PLATFORM.strip_heredoc
          # Uncomment the next line to define a global platform for your project
          # platform :ios, '9.0'
        PLATFORM
    
      context 'called with null values' do
    it 'writes rules for other three' do
      ruleset = 'border-top-style: inset; ' +
                'border-right-style: none; ' +
                'border-left-style: double;'
      bad_rule = 'border-bottom-style: null;'
    
          expect('.all-buttons').to have_ruleset(ruleset)
    end
  end
    
      context 'called with one prefix' do
    it 'applies the prefix to the property' do
      rule = '-webkit-appearance: none; ' +
             'appearance: none;'