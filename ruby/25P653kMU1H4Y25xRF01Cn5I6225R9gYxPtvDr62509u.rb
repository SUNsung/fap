
        
            valid_oauth_providers :tumblr
  end
    
        # next matching brace for brace at from
    def close_brace_pos(css, from, depth = 0)
      s = CharStringScanner.new(css[from..-1])
      while (b = s.scan_next(BRACE_RE))
        depth += (b == '}' ? -1 : +1)
        break if depth.zero?
      end
      raise 'match not found for {' unless depth.zero?
      from + s.pos - 1
    end
    
        def log_processing(name)
      puts yellow '  #{File.basename(name)}'
    end
    
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
    
          spec['main'] =
          find_files.(File.join(Bootstrap.stylesheets_path, '_bootstrap.scss')) +
          find_files.(Bootstrap.fonts_path) +
          %w(assets/javascripts/bootstrap.js)
    
          timestamp.concat(fraction)
    end
  end
end

    
        # Get rid of any info 'dir' files, so they don't conflict at the link stage
    info_dir_file = @f.info + 'dir'
    if info_dir_file.file? && !@f.skip_clean?(info_dir_file)
      observe_file_removal info_dir_file
    end
    
        it 'leaves normal params untouched' do
      mock_app do |env|
        request = Rack::Request.new(env)
        [200, {'Content-Type' => 'text/plain'}, [request.params['foo']]]
      end
      get '/', :foo => 'bar'
      expect(body).to eq('bar')
    end
    
      it 'should set the X-Frame-Options' do
    expect(get('/', {}, 'wants' => 'text/html').headers['X-Frame-Options']).to eq('SAMEORIGIN')
  end
    
      # GET /books/new
  def new
    @book = Book.new
  end
    
              new_source =
            node.receiver.source + ' =~ ' + node.first_argument.source
    
            def_node_matcher :on_body_of_reduce, <<-PATTERN
          (block (send _recv {:reduce :inject} !sym) _blockargs $(begin ...))
        PATTERN
    
            def_node_matcher :simple_double_comparison?, '(send $lvar :== $lvar)'
        def_node_matcher :simple_comparison?, <<-PATTERN
          {(send $lvar :== _)
           (send _ :== $lvar)}
        PATTERN
    
    module RuboCop
  module Cop
    module Style
      # This cop check for uses of Object#freeze on immutable objects.
      #
      # @example
      #   # bad
      #   CONST = 1.freeze
      #
      #   # good
      #   CONST = 1
      class RedundantFreeze < Cop
        include FrozenStringLiteral
    
          expect('.border-style-alternate').to have_rule(rule)
    end
  end
    
      context 'called with arguments (1, $value: 3em)' do
    it 'outputs triple the first value from the default scale' do
      expect('.one-base-three').to have_rule('font-size: 3.75em')
    end
  end
    
    describe 'prefixer' do
  before(:all) do
    ParserSupport.parse_file('library/prefixer')
  end
    
      context 'expands invalid text inputs' do
    it 'finds selectors' do
      list = @inputs_list.map { |input| '#{input}:invalid' }
      list = list.join(', ')
      ruleset = 'content: #{list};'