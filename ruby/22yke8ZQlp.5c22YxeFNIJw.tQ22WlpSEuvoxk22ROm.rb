
        
        puts 'Stackprof Mode: #{MODE}'
    
        def initialize(*args)
      if args.empty?
        super(*Array.new(9))
      elsif args.length == 1 && args.first.is_a?(Hash)
        args.first.assert_valid_keys URI::Generic::COMPONENT
        super(*args.first.values_at(*URI::Generic::COMPONENT))
      else
        super
      end
    end
    
              # Built-in events
          if node['id'] == 'Events-catalog'
            node.next_element.css('li').each do |li|
              name = '#{li.at_css('b').content.delete(''').strip} event'
              id = name.parameterize
              li['id'] = id
              entries << [name, id, type] unless name == entries.last[0]
            end
            next
          end
    
    #
# Open3 grants you access to stdin, stdout, stderr and a thread to wait for the
# child process when running another program.
# You can specify various attributes, redirections, current directory, etc., of
# the program in the same way as for Process.spawn.
#
# - Open3.popen3 : pipes for stdin, stdout, stderr
# - Open3.popen2 : pipes for stdin, stdout
# - Open3.popen2e : pipes for stdin, merged stdout and stderr
# - Open3.capture3 : give a string for stdin; get strings for stdout, stderr
# - Open3.capture2 : give a string for stdin; get a string for stdout
# - Open3.capture2e : give a string for stdin; get a string for merged stdout and stderr
# - Open3.pipeline_rw : pipes for first stdin and last stdout of a pipeline
# - Open3.pipeline_r : pipe for last stdout of a pipeline
# - Open3.pipeline_w : pipe for first stdin of a pipeline
# - Open3.pipeline_start : run a pipeline without waiting
# - Open3.pipeline : run a pipeline and wait for its completion
#
    
    class SampleHosts
  def initialize
    list = %w(127.0.0.1 localhost
              192.168.1.1 x68k.linux.or.jp
              192.168.1.2 lc630.macos.or.jp
              192.168.1.3 lib30.win32.or.jp
              192.168.1.4 ns00.linux.or.jp
              192.168.1.5 yum.macos.or.jp
              ::ffff:192.168.1.5 ipv6.macos.or.jp
              ::192.168.1.5 too.yumipv6.macos.or.jp
              192.168.1.254 comstarz.foo.or.jp)
    
            ctx.flush_sessions(Time.now + 10000)
      when 4
        assert_equal false, ssl.session_reused?
        assert_equal 1, stats[:cache_num]
        assert_equal 2, stats[:cache_hits]
        assert_equal 2, stats[:cache_misses]
    
    assert_normal_exit %q{
  ARGF.set_encoding 'foo'
}
    
        if @verbose
      @start_time = Time.now
      message @start_time
      @execs.each_with_index{|(path, label, version), i|
        message 'target #{i}: ' + (label == version ? '#{label}' : '#{label} (#{version})') + ' at \'#{path}\''
      }
      message 'measure target: #{@measure_target}'
    end
  end
    
          class << self
        def append_features(klass)
          super
    
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
    
          parent = metadata_timestamped_path(version: version, timestamp: timestamp, create: create)
    
          attr_accessor(*VALID_KEYS)
      attr_accessor :pairs
    
    @@ chat
<pre id='chat'></pre>
<form>
  <input id='msg' placeholder='type message here...' />
</form>
    
        if run? && ARGV.any?
      require 'optparse'
      OptionParser.new { |op|
        op.on('-p port',   'set the port (default is 4567)')                { |val| set :port, Integer(val) }
        op.on('-o addr',   'set the host (default is #{bind})')             { |val| set :bind, val }
        op.on('-e env',    'set the environment (default is development)')  { |val| set :environment, val.to_sym }
        op.on('-s server', 'specify rack server/handler (default is thin)') { |val| set :server, val }
        op.on('-q',        'turn on quiet mode (default is off)')           {       set :quiet, true }
        op.on('-x',        'turn on the mutex lock (default is off)')       {       set :lock, true }
      }.parse!(ARGV.dup)
    end
  end
    
          def escape_string(str)
        str = @escaper.escape_url(str)        if @url
        str = @escaper.escape_html(str)       if @html
        str = @escaper.escape_javascript(str) if @javascript
        str
      end
    end
  end
end

    
        it 'Reads referrer from Host header when Referer header is relative' do
      env = {'HTTP_HOST' => 'foo.com', 'HTTP_REFERER' => '/valid'}
      expect(subject.referrer(env)).to eq('foo.com')
    end
    
      describe '#react' do
    it 'prevents attacks and warns about it' do
      io = StringIO.new
      mock_app do
        use Rack::Protection, :logger => Logger.new(io)
        run DummyApp
      end
      post('/', {}, 'rack.session' => {}, 'HTTP_ORIGIN' => 'http://malicious.com')
      expect(io.string).to match(/prevented.*Origin/)
    end
    
      it 'should not override the header if already set' do
    mock_app with_headers('X-XSS-Protection' => '0')
    expect(get('/', {}, 'wants' => 'text/html').headers['X-XSS-Protection']).to eq('0')
  end
    
      # These two settings work together to allow you to limit a spec run
  # to individual examples or groups you care about by tagging them with
  # `:focus` metadata. When nothing is tagged with `:focus`, all examples
  # get run.
  config.filter_run :focus
  config.run_all_when_everything_filtered = true