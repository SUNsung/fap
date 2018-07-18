
        
        # For this pull request, which changes Page#dir
# https://github.com/jekyll/jekyll/pull/4403
    
            def set_defaults
          hash_ = @jekyll_opts.fetch('webrick', {}).fetch('headers', {})
          DEFAULTS.each_with_object(@headers = hash_) do |(key, val), hash|
            hash[key] = val unless hash.key?(key)
          end
        end
      end
    end
  end
end

    
        def process(args)
      arg_is_present? args, '--server', 'The --server command has been replaced by the \
                          'serve' subcommand.'
      arg_is_present? args, '--serve', 'The --serve command has been replaced by the \
                          'serve' subcommand.'
      arg_is_present? args, '--no-server', 'To build Jekyll without launching a server, \
                          use the 'build' subcommand.'
      arg_is_present? args, '--auto', 'The switch '--auto' has been replaced with \
                          '--watch'.'
      arg_is_present? args, '--no-auto', 'To disable auto-replication, simply leave off \
                          the '--watch' switch.'
      arg_is_present? args, '--pygments', 'The 'pygments'settings has been removed in \
                          favour of 'highlighter'.'
      arg_is_present? args, '--paginate', 'The 'paginate' setting can only be set in \
                          your config files.'
      arg_is_present? args, '--url', 'The 'url' setting can only be set in your \
                          config files.'
      no_subcommand(args)
    end
    
            # This returns all the config classes for the various providers.
        #
        # @return [Hash]
        def provider_configs
          Registry.new.tap do |result|
            @registered.each do |plugin|
              result.merge!(plugin.components.configs[:provider])
            end
          end
        end
    
                  # Read!
              data << io.readpartial(READ_CHUNK_SIZE).encode('UTF-8', Encoding.default_external)
            else
              # Do a simple non-blocking read on the IO object
              data << io.read_nonblock(READ_CHUNK_SIZE)
            end
          rescue Exception => e
            # The catch-all rescue here is to support multiple Ruby versions,
            # since we use some Ruby 1.9 specific exceptions.
    
              # Repackage the box
          output_name = @env.vagrantfile.config.package.name || 'package.box'
          output_path = Pathname.new(File.expand_path(output_name, FileUtils.pwd))
          box.repackage(output_path)
    
            opts = OptionParser.new do |o|
          o.banner = 'Usage: vagrant cap [options] TYPE NAME [args]'
          o.separator ''
          o.separator 'This is an advanced command. If you don't know what this'
          o.separator 'does and you aren't explicitly trying to use it, you probably'
          o.separator 'don't want to use this.'
          o.separator ''
          o.separator 'This command checks or executes arbitrary capabilities that'
          o.separator 'Vagrant has for hosts, guests, and providers.'
          o.separator ''
          o.separator 'Options:'
          o.separator ''
    
        def gen_random_urandom(n)
      ret = Random.urandom(n)
      unless ret
        raise NotImplementedError, 'No random device'
      end
      unless ret.length == n
        raise NotImplementedError, 'Unexpected partial read from random device: only #{ret.length} for #{n} bytes'
      end
      ret
    end
  end
end
    
      def self.directory
    yield @dir
  end
    
      ruby_version_is '2.4' do
    describe 'full Unicode case mapping' do
      it 'modifies self in place for all of Unicode with no option' do
        a = 'äöÜ'
        a.capitalize!
        a.should == 'Äöü'
      end
    
      describe 'given a non-Time argument' do
    it 'returns nil if argument <=> self returns nil' do
      t = Time.now
      obj = mock('time')
      obj.should_receive(:<=>).with(t).and_return(nil)
      (t <=> obj).should == nil
    end
    
        def new_cv
      @@new_cv if defined? @@new_cv
    end
    
        res = Net::HTTPClientError.new('1.0', '4xx', 'test response')
    ruby_version_is ''...'2.6' do
      lambda { res.error! }.should raise_error(Net::HTTPServerException)
    end
    ruby_version_is '2.6' do
      lambda { res.error! }.should raise_error(Net::HTTPClientException)
    end
    
        # Returns whether `string` is a valid IP address or IP address range.
    #
    # @return [true] if valid IP address or IP address range.
    # @return [false] otherwise.
    def valid_ip_or_range?(string)
      range = Rex::Socket::RangeWalker.new(string)
      range && range.ranges && range.ranges.any?
    end
    
        self.sigs.each_key do |k|
      # There is only one pattern per run to test
      matched = nil
      matches = nil
    
          if rails?
        register_rails_engine
      elsif lotus?
        register_lotus
      elsif sprockets?
        register_sprockets
      end
    
        # .visible-sm { @include responsive-visibility() }
    # to:
    # @include responsive-visibility('.visible-sm')
    def apply_mixin_parent_selector(file, rule_sel)
      log_transform rule_sel
      replace_rules file, '\s*' + rule_sel, comments: false do |rule, rule_pos, css|
        body = unwrap_rule_block(rule.dup).strip
        next rule unless body =~ /^@include \w+/m || body =~ /^@media/ && body =~ /\{\s*@include/
        rule =~ /(#{COMMENT_RE}*)([#{SELECTOR_CHAR}\s*]+?)#{RULE_OPEN_BRACE_RE}/
        cmt, sel = $1, $2.strip
        # take one up selector chain if this is an &. selector
        if sel.start_with?('&')
          parent_sel = selector_for_pos(css, rule_pos.begin)
          sel        = parent_sel + sel[1..-1]
        end
        # unwrap, and replace @include
        unindent unwrap_rule_block(rule).gsub(/(@include [\w-]+)\(?([\$\w\-,\s]*)\)?/) {
          name, args = $1, $2
          sel.gsub(/\s+/, ' ').split(/,\s*/ ).map { |sel_part|
            '#{cmt}#{name}('#{sel_part}'#{', ' if args && !args.empty?}#{args})'
          }.join(';\n')
        }
      end
    end
    }
    
        alias log puts
    
      # Disable Rails's static asset server (Apache or nginx will already do this).
  if config.respond_to?(:serve_static_files)
    # rails >= 4.2
    config.serve_static_files = true
  elsif config.respond_to?(:serve_static_assets)
    # rails < 4.2
    config.serve_static_assets = true
  end
    
      # Do not eager load code on boot. This avoids loading your whole application
  # just for the purpose of running a single test. If you are using a tool that
  # preloads Rails for running tests, you may have to set it to true.
  config.eager_load = false
    
    desc 'Test all Gemfiles from test/*.gemfile'
task :test_all_gemfiles do
  require 'term/ansicolor'
  require 'pty'
  require 'shellwords'
  cmd      = 'bundle install --quiet && bundle exec rake --trace'
  statuses = Dir.glob('./test/gemfiles/*{[!.lock]}').map do |gemfile|
    env = {'BUNDLE_GEMFILE' => gemfile}
    cmd_with_env = '  (#{env.map { |k, v| 'export #{k}=#{Shellwords.escape v}' } * ' '}; #{cmd})'
    $stderr.puts Term::ANSIColor.cyan('Testing\n#{cmd_with_env}')
    PTY.spawn(env, cmd) do |r, _w, pid|
      begin
        r.each_line { |l| puts l }
      rescue Errno::EIO
        # Errno:EIO error means that the process has finished giving output.
      ensure
        ::Process.wait pid
      end
    end
    [$? && $?.exitstatus == 0, cmd_with_env]
  end
  failed_cmds = statuses.reject(&:first).map { |(_status, cmd_with_env)| cmd_with_env }
  if failed_cmds.empty?
    $stderr.puts Term::ANSIColor.green('Tests pass with all gemfiles')
  else
    $stderr.puts Term::ANSIColor.red('Failing (#{failed_cmds.size} / #{statuses.size})\n#{failed_cmds * '\n'}')
    exit 1
  end
end