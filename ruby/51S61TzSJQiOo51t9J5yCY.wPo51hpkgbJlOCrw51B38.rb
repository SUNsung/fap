
        
            def javascripts_path
      File.join assets_path, 'javascripts'
    end
    
          # generate variables template
      save_file 'templates/project/_bootstrap-variables.sass',
                '// Override Bootstrap variables here (defaults from bootstrap-sass v#{Bootstrap::VERSION}):\n\n' +
                    File.read('#{save_to}/_variables.scss').lines[1..-1].join.gsub(/^(?=\$)/, '// ').gsub(/ !default;/, '')
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
    
          def initialize(pairs = {})
        @pairs = pairs
        pairs.each do |key, value|
          raise 'invalid container key: '#{key.inspect}'' unless VALID_KEYS.include?(key)
          send(:'#{key}=', value)
        end
    
      def inspect
    '#<#{self.class.name}: #{name.inspect} #{tags.inspect}>'
  end
    
              if @address.update_attributes(address_params)
            respond_with(@address, default_template: :show)
          else
            invalid_resource!(@address)
          end
        end