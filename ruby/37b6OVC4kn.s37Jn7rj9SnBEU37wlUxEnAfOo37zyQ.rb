
        
          def regular?
    !staff?
  end
    
      def url
    object.metadata.url
  end
    
          command = ['git describe']
      command << '--tags' if match_lightweight
      command << '`git rev-list --tags#{tag_pattern_param} --max-count=1`'
      Actions.sh(command.compact.join(' '), log: false).chomp
    rescue
      nil
    end
    
            expect(result).to eq('/usr/local/bin/cloc  --by-file --xml  --out=build/cloc.xml MyCoolApp')
      end
    
          it 'gets the correct version number for 'TargetB'' do
        result = Fastlane::FastFile.new.parse('lane :test do
          get_version_number(xcodeproj: '.xcproject', target: 'TargetB')
        end').runner.execute(:test)
        expect(result).to eq('5.4.3')
      end
    
        def after(task, post_task, *args, &block)
      Rake::Task.define_task(post_task, *args, &block) if block_given?
      task = Rake::Task[task]
      task.enhance do
        post = Rake.application.lookup(post_task, task.scope)
        raise ArgumentError, 'Task #{post_task.inspect} not found' unless post
        post.invoke
      end
    end
    
      # Implemented by subclasses to provide default values for settings needed by
  # this plugin. Typically done using the `set_if_empty` Capistrano DSL method.
  #
  # Example:
  #
  #   def set_defaults
  #     set_if_empty :my_plugin_option, true
  #   end
  #
  def set_defaults; end
    
        it 'Reads referrer from Host header when Referer header is relative' do
      env = {'HTTP_HOST' => 'foo.com', 'HTTP_REFERER' => '/valid'}
      expect(subject.referrer(env)).to eq('foo.com')
    end
    
        it 'accepts #{method} requests with whitelisted Origin' do
      mock_app do
        use Rack::Protection::HttpOrigin, :origin_whitelist => ['http://www.friend.com']
        run DummyApp
      end
      expect(send(method.downcase, '/', {}, 'HTTP_ORIGIN' => 'http://www.friend.com')).to be_ok
    end
  end
end

    
        context 'with an instrumenter specified' do
      let(:app) { Rack::Protection::Base.new(nil, :instrumenter => instrumenter) }
    
      # Run specs in random order to surface order dependencies. If you find an
  # order dependency and want to debug it, you can fix the order by providing
  # the seed, which is printed after each run.
  #     --seed 1234
  config.order = :random
    
    end
    
          Dir.chdir(file_path) do
        contents = file.read
        if contents =~ /\A-{3}.+[^\A]-{3}\n(.+)/m
          contents = $1.lstrip
        end
        contents = pre_filter(contents)
        if @raw
          contents
        else
          partial = Liquid::Template.parse(contents)
          context.stack do
            partial.render(context)
          end
        end
      end
    end
  end
end
    
    module Jekyll
    
              def logstash_plugin_gem_spec?(spec)
            spec.metadata && spec.metadata['logstash_plugin'] == 'true'
          end
    
      def fifty_percent
    [1, (maximum * 0.5)].max.floor
  end