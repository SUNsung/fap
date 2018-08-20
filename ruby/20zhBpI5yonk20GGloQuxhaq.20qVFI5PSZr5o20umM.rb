
        
                def view_rendered?(view, expected_locals)
          locals_for(view).any? do |actual_locals|
            expected_locals.all? { |key, value| value == actual_locals[key] }
          end
        end
      end
    
                    on.unsubscribe do |chan, count|
                  if count == 0
                    @subscription_lock.synchronize do
                      @raw_client = nil
                    end
                  end
                end
              end
            end
          end
    
          # Checks to see if a column exists.
      #
      #  t.string(:name) unless t.column_exists?(:name, :string)
      #
      # See {connection.column_exists?}[rdoc-ref:SchemaStatements#column_exists?]
      def column_exists?(column_name, type = nil, options = {})
        @base.column_exists?(name, column_name, type, options)
      end
    
              def shutdown
            @queue.push([:shutdown])
            Thread.pass while @thread.alive?
          end
    
        def engine(name)
      dir = '#{app_path}/random/#{name}'
      FileUtils.mkdir_p(dir)
    
      test 'broadcasting_for with a string' do
    assert_equal 'hello', ChatChannel.broadcasting_for('hello')
  end
end

    
        assert mock.verify
  end
end

    
            pubsub.expect(:subscribe, nil, ['channel', Proc, Proc])
        pubsub.expect(:unsubscribe, nil, ['channel', Proc])
    
      test 'unsubscribe command' do
    run_in_eventmachine do
      setup_connection
      subscribe_to_chat_channel
    
        def process(message)
      @last_action = [ :process, message ]
    end
    
          Dir.chdir('fastlane') do # this is an assumption of fastlane, that we have to .. when shelling out
        # Commit the changes
        changes_to_commit = [plugin_scores_cache_path, actions_md_path, 'Gemfile.lock', plugins_path, yml_path] + action_docs + custom_assets
        git_add(path: changes_to_commit)
        git_commit(path: changes_to_commit,
                message: 'Update docs for latest fastlane release (actions.md, available-plugins.md) 🚀')
        # Push them to the git remote
        push_to_git_remote
    
        def handle_results(tests_exit_status)
      result = TestResultParser.new.parse_result(test_results)
      SlackPoster.new.run(result)
    
          def gradle_path=(gradle_path)
        @gradle_path = gradle_path
        @escaped_gradle_path = gradle_path.shellescape
      end
    
            # This returns all registered provisioners.
        #
        # @return [Hash]
        def provisioners
          Registry.new.tap do |result|
            @registered.each do |plugin|
              result.merge!(plugin.provisioner)
            end
          end
        end
    
      def brief_build_info(f)
    build_time_str = f.logs.ctime.strftime('%Y-%m-%d %H:%M:%S')
    s = <<~EOS
      Homebrew build logs for #{f.full_name} on #{OS_VERSION}
    EOS
    if ARGV.include?('--with-hostname')
      hostname = Socket.gethostname
      s << 'Host: #{hostname}\n'
    end
    s << 'Build date: #{build_time_str}\n'
    s
  end
    
                if url =~ %r{^https?://prdownloads\.}
              problem <<~EOS.chomp
                Don't use prdownloads in SourceForge urls (url is #{url}).
                        See: http://librelist.com/browser/homebrew/2011/1/12/prdownloads-is-bad/
              EOS
            end
    
      entries = [{ template: deploy_rb, file: config_dir.join('deploy.rb') }]
  entries += envs.split(',').map { |stage| { template: stage_rb, file: deploy_dir.join('#{stage}.rb') } }
    
        it 'sets the output verbosity' do
      expect(config.output_verbosity).to eq 0
    end
    
      get(/.+/) do
    send_sinatra_file(request.path) {404}
  end
    
    module Jekyll
    
      class IncludeCodeTag < Liquid::Tag
    def initialize(tag_name, markup, tokens)
      @title = nil
      @file = nil
      if markup.strip =~ /\s*lang:(\S+)/i
        @filetype = $1
        markup = markup.strip.sub(/lang:\S+/i,'')
      end
      if markup.strip =~ /(.*)?(\s+|^)(\/*\S+)/i
        @title = $1 || nil
        @file = $3
      end
      super
    end
    
      # Removes trailing forward slash from a string for easily appending url segments
  def strip_slash(input)
    if input =~ /(.+)\/$|^\/$/
      input = $1
    end
    input
  end
    
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
    
              new(source, annotations)
        end