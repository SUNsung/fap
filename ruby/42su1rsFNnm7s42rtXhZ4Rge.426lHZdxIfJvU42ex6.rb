
        
          def userpaths?
    @settings.include? :userpaths
  end
end
    
      def observe_file_removal(path)
    path.extend(ObserverPathnameExtension).unlink if path.exist?
  end
    
            if msg = blacklisted?(query)
          if count > 0
            puts
            puts 'If you meant #{query.inspect} precisely:'
            puts
          end
          puts msg
        elsif count == 0
          puts 'No formula found for #{query.inspect}.'
          begin
            GitHub.print_pull_requests_matching(query)
          rescue GitHub::Error => e
            SEARCH_ERROR_QUEUE << e
          end
        end
      end
    end
    
        Category.transaction do
      staff.group_names = ['staff']
      unless staff.save
        puts staff.errors.full_messages
        raise 'Failed to set permissions on the Staff category!'
      end
    
          if @launch_event_sent || launch_context.p_hash.nil?
        return
      end
    
            session.action_launched(launch_context: launch_context)
      end
    end
  end
end

    
              it 'adds multiple frameworks' do
            result = Fastlane::FastFile.new.parse('lane :test do
                carthage(command: '#{command}', frameworks: ['myframework', 'myframework2'])
              end').runner.execute(:test)
            expect(result).to eq('carthage archive myframework myframework2')
          end
        end
    
            expect(result[1]).to start_with('security set-keychain-settings')
        expect(result[1]).to include('-t 300')
        expect(result[1]).to_not(include('-l'))
        expect(result[1]).to_not(include('-u'))
        expect(result[1]).to include('~/Library/Keychains/test.keychain')
        expect(result[2]).to start_with('security list-keychains -s')
        expect(result[2]).to end_with(File.expand_path('~/Library/Keychains/test.keychain').to_s)
      end
    
          it 'requires project to be specified if .slather.yml is not found' do
        expect do
          Fastlane::FastFile.new.parse('lane :test do
            slather
          end').runner.execute(:test)
        end.to raise_error(FastlaneCore::Interface::FastlaneError)
      end
    
          context 'when specify output_file, config_file and strict options' do
        it 'adds config option, strict option and redirect file' do
          result = Fastlane::FastFile.new.parse('lane :test do
            swiftlint(
              strict: true,
              output_file: '#{output_file}',
              config_file: '#{config_file}'
            )
          end').runner.execute(:test)
    
    # Here be helper
    
    gem 'rails', '~> 5.2'
gem 'omniauth', '~> 1.3'
gem 'oauth2'
gem 'omniauth-oauth2'
gem 'rdoc'
    
        private
    
        def filter_const(name)
      if name.is_a? Array
        name.map &method(:filter_const)
      else
        Docs.const_get '#{name}_filter'.camelize
      end
    end
    
        attr_accessor :name, :type, :path
    
        def additional_options
      {}
    end
    
        def request_all(urls)
      queue = [urls].flatten
      until queue.empty?
        result = yield request_one(queue.shift)
        queue.concat(result) if result.is_a? Array
      end
    end
    
          def base_urls
        @base_urls ||= self.class.base_urls.map { |url| URL.parse(url) }
      end
    
            if mod
          if name == 'Index'
            return slug.split('/')[1..-2].join('/')
          elsif name == 'Angular'
            return slug.split('/').last.split('-').first
          end
        end
    
    When /^I should see one less invite$/ do
  step 'I should see \'#{@inviter_invite_count -1} invites left\''
end
    
          @conv2 = Conversation.create(hash)
      Message.create(:author => @person, :created_at => Time.now + 100, :text => 'message', :conversation_id => @conv2.id)
             .increase_unread(alice)
    
        it 'generates a jasmine fixture', :fixture => true do
      contact = alice.contact_for(bob.person)
      aspect = alice.aspects.create(:name => 'people')
      contact.aspects << aspect
      contact.save
      get :new, params: {person_id: bob.person.id}
      save_fixture(html_for('body'), 'status_message_new')
    end
  end
end

    
          it 'doesn't post multiple times' do
        alice.like!(@target)
        post :create, params: like_hash
        expect(response.code).to eq('422')
      end
    end
    
        # Converts a Sass options hash into a standard form, filling in
    # default values and resolving aliases.
    #
    # @param options [{Symbol => Object}] The options hash;
    #   see {file:SASS_REFERENCE.md#Options the Sass options documentation}
    # @return [{Symbol => Object}] The normalized options hash.
    # @private
    def self.normalize_options(options)
      options = DEFAULT_OPTIONS.merge(options.reject {|_k, v| v.nil?})
    
        # Returns a string representation of the Sass backtrace.
    #
    # @param default_filename [String] The filename to use for unknown files
    # @see #sass_backtrace
    # @return [String]
    def sass_backtrace_str(default_filename = 'an unknown file')
      lines = message.split('\n')
      msg = lines[0] + lines[1..-1].
        map {|l| '\n' + (' ' * 'Error: '.size) + l}.join
      'Error: #{msg}' +
        sass_backtrace.each_with_index.map do |entry, i|
          '\n        #{i == 0 ? 'on' : 'from'} line #{entry[:line]}' +
            ' of #{entry[:filename] || default_filename}' +
            (entry[:mixin] ? ', in `#{entry[:mixin]}'' : '')
        end.join
    end
    
    STDOUT.sync = true if ENV['CP_STDOUT_SYNC'] == 'TRUE'
    
      def developer_prefix
    `xcode-select --print-path`.strip
  end
    
      class Command < CLAide::Command
    require 'cocoapods/command/options/repo_update'
    require 'cocoapods/command/options/project_directory'
    include Options
    
            def initialize(argv)
          @pod_name = argv.shift_argument
          @short_output = argv.flag?('short')
          super
        end
    
    Then(/the current symlink points to the previous release/) do
  previous_release_path = @release_paths[-2]
    
      def run_vagrant_command(command)
    stdout, stderr, status = vagrant_cli_command('ssh -c #{command.inspect}')
    return [stdout, stderr] if status.success?
    raise VagrantSSHCommandError, status
  end
end
    
          def show_revert
        !@message
      end
    
    # Disable the metadata feature
$METADATA = false