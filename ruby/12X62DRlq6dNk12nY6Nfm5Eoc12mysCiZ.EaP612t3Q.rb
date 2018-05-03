
        
          def teardown
    ActiveSupport.escape_html_entities_in_json = @old_escape_html_entities_in_json
  end
    
    class RedirectController < ActionController::Base
  # empty method not used anywhere to ensure methods like
  # `status` and `location` aren't called on `redirect_to` calls
  def status; raise 'Should not be called!'; end
  def location; raise 'Should not be called!'; end
    
      test 'response status aliases deprecated' do
    response = ActionDispatch::TestResponse.create
    assert_deprecated { response.success? }
    assert_deprecated { response.missing? }
    assert_deprecated { response.error? }
  end
end

    
    require 'abstract_unit'
    
        test 'head :continue (100) does not return any content' do
      content = body(HeadController.action(:continue).call(Rack::MockRequest.env_for('/')))
      assert_empty content
    end
    
            # This returns all the config classes for the various pushes.
        #
        # @return [Registry]
        def push_configs
          Registry.new.tap do |result|
            @registered.each do |plugin|
              result.merge!(plugin.components.configs[:push])
            end
          end
        end
    
            hash.each do |key, value|
          self[convert_key(key)] = value
        end
      end
    
                  # Check if data is actually ready on this IO device.
              # We have to do this since `readpartial` will actually block
              # until data is available, which can cause blocking forever
              # in some cases.
              results = ::IO.select([io], nil, nil, 1.0)
              break if !results || results[0].empty?
    
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
    
          def calculate_column_widths(rows)
        num_columns = rows.map { |row| row.values.length }.max
        Array.new(num_columns) do |col|
          rows.map { |row| row.values[col].to_s.length }.max
        end
      end
    
        it 'honours a property filter before yielding' do
      recipient = mock('recipient')
      recipient.expects(:doit).with('example1.com', :redis, port: 6379, type: :slave)
      recipient.expects(:doit).with('example1.com', :web, port: 80)
      dsl.role_properties(:redis, :web, select: :active) do |host, role, props|
        recipient.doit(host, role, props)
      end
    end
  end
end

    
    run SinatraStaticServer

    
    require 'stringex'
    
    def config_tag(config, key, tag=nil, classname=nil)
  options     = key.split('.').map { |k| config[k] }.last #reference objects with dot notation
  tag       ||= 'div'
  classname ||= key.sub(/_/, '-').sub(/\./, '-')
  output      = '<#{tag} class='#{classname}''
    
          rtn = ''
      (context.environments.first['site'][@array_name] || []).each do |file|
        if file !~ /^[a-zA-Z0-9_\/\.-]+$/ || file =~ /\.\// || file =~ /\/\./
          rtn = rtn + 'Include file '#{file}' contains invalid characters or sequences'
        end
    
      # Removes trailing forward slash from a string for easily appending url segments
  def strip_slash(input)
    if input =~ /(.+)\/$|^\/$/
      input = $1
    end
    input
  end
    
            def stock_location_params
          params.require(:stock_location).permit(permitted_stock_location_attributes)
        end
      end
    end
  end
end
