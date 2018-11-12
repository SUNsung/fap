
        
          def internal_commands
    find_internal_commands HOMEBREW_LIBRARY_PATH/'cmd'
  end
    
              if File.extname(file) == '.rb'
            tree[subtree] ||= []
            tree[subtree] << file
          end
        end
      end
    
          def cookie_paths(path)
        path = '/' if path.to_s.empty?
        paths = []
        Pathname.new(path).descend { |p| paths << p.to_s }
        paths
      end
    
          def escape(object)
        case object
        when Hash   then escape_hash(object)
        when Array  then object.map { |o| escape(o) }
        when String then escape_string(object)
        when Tempfile then object
        else nil
        end
      end
    
        it 'Returns nil when Referer header is missing and allow_empty_referrer is false' do
      env = {'HTTP_HOST' => 'foo.com'}
      subject.options[:allow_empty_referrer] = false
      expect(subject.referrer(env)).to be_nil
    end
    
          subject do
        plugin_class.new(
          'oneString' => '${FunString:foo}',
          'oneBoolean' => '${FunBool:false}',
          'oneArray' => [ 'first array value', '${FunString:foo}' ],
          'oneHash' => { 'key1' => '${FunString:foo}', 'key2' => '${FunString} is ${FunBool}', 'key3' => '${FunBool:false} or ${funbool:false}' },
          'nestedHash' => { 'level1' => { 'key1' => 'http://${FunString}:8080/blah.txt' } },
          'nestedArray' => { 'level1' => [{ 'key1' => 'http://${FunString}:8080/blah.txt' }, { 'key2' => 'http://${FunString}:8080/foo.txt' }] },
          'deepHash' => { 'level1' => { 'level2' => {'level3' => { 'key1' => 'http://${FunString}:8080/blah.txt' } } } }
        )
      end
    
              it 'successfully install the plugin when verification is disabled' do
            command = logstash.run_command_in_path('bin/logstash-plugin install --no-verify logstash-filter-qatest')
            expect(command).to install_successfully
            expect(logstash).to have_installed?('logstash-filter-qatest')
          end