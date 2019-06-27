
        
          def _test_request__stream_body(http)
    req = Net::HTTP::Post.new('/')
    data = $test_net_http_data
    req.content_length = data.size
    req['Content-Type'] = 'application/x-www-form-urlencoded'
    req.body_stream = StringIO.new(data)
    res = http.request(req)
    assert_kind_of Net::HTTPResponse, res
    assert_kind_of String, res.body
    assert_equal data.size, res.body.size
    assert_equal data, res.body
  end
    
          # specific to Ruby 2.7+
      if Gem::Version.new(RUBY_VERSION) >= Gem::Version.new('2.7.0')
        tests.merge!({
          '4.5.6' => '#{MAGENTA}#{BOLD}4.5#{CLEAR}#{RED}#{REVERSE}.6#{CLEAR}',
          '\e[0m\n' => '#{RED}#{REVERSE}^[#{CLEAR}[#{BLUE}#{BOLD}0#{CLEAR}#{RED}#{REVERSE}m#{CLEAR}\n',
          '<<EOS\nhere\nEOS' => '#{RED}<<EOS#{CLEAR}\n#{RED}here#{CLEAR}\n#{RED}EOS#{CLEAR}',
          ':@1' => '#{YELLOW}:#{CLEAR}#{RED}#{REVERSE}@1#{CLEAR}',
          '@@1' => '#{RED}#{REVERSE}@@1#{CLEAR}',
        })
      end
    
    Rake::TestTask.new(:'test:core') do |t|
  core_tests = %w[base delegator encoding extensions filter
     helpers mapped_error middleware radius rdoc
     readme request response result route_added_hook
     routing server settings sinatra static templates]
  t.test_files = core_tests.map {|n| 'test/#{n}_test.rb'}
  t.ruby_opts = ['-r rubygems'] if defined? Gem
  t.ruby_opts << '-I.'
  t.warning = true
end
    
    ::Bundler.with_friendly_errors do
  ::Bundler::CLI.start(ARGV, :debug => true)
end

    
          PluginManager.ui.info('Installing file: #{local_file}')
      uncompressed_path = uncompress(local_file)
      PluginManager.ui.debug('Pack uncompressed to #{uncompressed_path}')
      pack = LogStash::PluginManager::PackInstaller::Pack.new(uncompressed_path)
      raise PluginManager::InvalidPackError, 'The pack must contains at least one plugin' unless pack.valid?
    
      it 'returns the sorted config parts' do
    expect(subject.config_parts).to eq(ordered_config_parts)
  end
    
          context 'when the plugin doesnt exist' do
        it 'fails to install and report an error' do
          command = logstash.run_command_in_path('bin/logstash-plugin install --no-verify logstash-output-impossible-plugin')
          expect(command.stderr).to match(/Plugin not found, aborting/)
        end
      end
    end
  end
end

    
          it 'list the plugin with his version' do
        result = logstash.run_command_in_path('bin/logstash-plugin list --verbose #{plugin_name}')
        expect(result).to run_successfully_and_output(/^#{plugin_name} \(\d+\.\d+.\d+\)/)
      end
    end
  end
end

    
    RSpec.configure do |c|
  c.include ServiceTester
end