
        
                def test_url_sub_key_for_sqlite3
          spec = resolve :production, 'production' => { 'url' => 'sqlite3:foo?encoding=utf8' }
          assert_equal({
            'adapter'  => 'sqlite3',
            'database' => 'foo',
            'encoding' => 'utf8',
            'name'     => 'production' }, spec)
        end
    
      def test_serialized_attribute_declared_in_subclass
    hash = { 'important1' => 'value1', 'important2' => 'value2' }
    important_topic = ImportantTopic.create('important' => hash)
    assert_equal(hash, important_topic.important)
    
          connection = Connection.new(server, env)
      assert_called(connection.websocket, :close) do
        connection.process
      end
    end
  end
end

    
      test 'websocket connection' do
    run_in_eventmachine do
      connection = open_connection
      connection.process
    
          assert_equal [ data ], channel.lines
    end
  end
    
        it 'keeps flip-flops from interfering' do
      a = eval 'proc { |i| ScratchPad << i if (i == 4)..(i == 7) }'
      b = eval 'proc { |i| ScratchPad << i if (i == 4)..(i == 7) }'
      6.times(&a)
      6.times(&b)
      ScratchPad.recorded.should == [4, 5, 4, 5]
    end
  end
end
    
        o = o = Object.new
    assert_syntax_error('def o.foo(arg1?:) end', /arg1\?/, bug11663)
    assert_syntax_error('def o.foo(arg1?:, arg2:) end', /arg1\?/, bug11663)
    assert_syntax_error('proc {|arg1?:|}', /arg1\?/, bug11663)
    assert_syntax_error('proc {|arg1?:, arg2:|}', /arg1\?/, bug11663)
    
    describe 'CApiWrappedStruct' do
  before :each do
    @s = CApiWrappedStructSpecs.new
  end
    
        gemspec_file = File.join(@tempdir, @gem.spec_name)
    
        request_digest =
      '#{Digest::MD5.hexdigest(ha1)}:' \
      '#{params['nonce']}:#{'%08x' % nonce_count}:#{cnonce}:#{params['qop']}:' \
      '#{Digest::MD5.hexdigest(ha2)}'
    'Digest username=\'#{user}\'' \
      ', realm=\'#{params['realm']}\'' \
      ', nonce=\'#{params['nonce']}\'' \
      ', uri=\'#{params['uri']}\'' \
      ', qop=#{params['qop']}' \
      ', nc=#{'%08x' % nonce_count}' \
      ', cnonce=\'#{cnonce}\'' \
      ', response=\'#{Digest::MD5.hexdigest(request_digest)}\'' \
      ', opaque=\'#{params['opaque']}\'' \
      ', algorithm=#{params['algorithm']}'
  end
end

    
      # Unicode-based encodings (except UTF-8)
  UNICODE_ENCODINGS = [Encoding::UTF_16BE, Encoding::UTF_16LE, Encoding::UTF_32BE, Encoding::UTF_32LE,
                       Encoding::GB18030, Encoding::UCS_2BE, Encoding::UCS_4BE]
    
        # #gradient > { @mixin horizontal ... }
    # to:
    # @mixin gradient-horizontal
    def flatten_mixins(file, container, prefix)
      log_transform container, prefix
      replace_rules file, Regexp.escape(container) do |mixins_css|
        unindent unwrap_rule_block(mixins_css).gsub(/@mixin\s*([\w-]+)/, '@mixin #{prefix}-\\1')
      end
    end
    
        def log_http_get_files(files, from, cached = false)
      return if files.empty?
      s = '  #{'CACHED ' if cached}GET #{files.length} files from #{from} #{files * ' '}...'
      if cached
        puts dark green s
      else
        puts dark cyan s
      end
    end
    
      config.active_support.deprecation = :stderr
end

    
      def test_font_helper_with_suffix_sharp
    assert_match %r(url\(['']?/assets/.*svg#.+['']?\)), @css
  end
    
          spec['version'] = Bootstrap::VERSION
    
            # Prints the list of specs & pod cache dirs for a single pod name.
        #
        # This output is valid YAML so it can be parsed with 3rd party tools
        #
        # @param [Array<Hash>] cache_descriptors
        #        The various infos about a pod cache. Keys are
        #        :spec_file, :version, :release and :slug
        #
        def print_pod_cache_infos(pod_name, cache_descriptors)
          UI.puts '#{pod_name}:'
          cache_descriptors.each do |desc|
            if @short_output
              [:spec_file, :slug].each { |k| desc[k] = desc[k].relative_path_from(@cache.root) }
            end
            UI.puts('  - Version: #{desc[:version]}')
            UI.puts('    Type:    #{pod_type(desc)}')
            UI.puts('    Spec:    #{desc[:spec_file]}')
            UI.puts('    Pod:     #{desc[:slug]}')
          end
        end
      end
    end
  end
end

    
        def ensure_stage
      Rake::Task.define_task(:ensure_stage) do
        unless stage_set?
          puts t(:stage_not_set)
          exit 1
        end
      end
    end
    
      deploy_rb = File.expand_path('../../templates/deploy.rb.erb', __FILE__)
  stage_rb = File.expand_path('../../templates/stage.rb.erb', __FILE__)
  capfile = File.expand_path('../../templates/Capfile', __FILE__)
    
      SPREE_GEMS.each do |gem_name|
    rm_f  '#{gem_name}/Gemfile.lock'
    rm_rf '#{gem_name}/pkg'
    rm_rf '#{gem_name}/spec/dummy'
  end
end