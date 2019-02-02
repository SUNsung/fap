
        
              @launch_event_sent = true
      builder = AnalyticsEventBuilder.new(
        p_hash: launch_context.p_hash,
        session_id: session_id,
        action_name: nil,
        fastlane_client_language: launch_context.fastlane_client_language
      )
    
            expect(result).to eq('carthage archive')
      end
    
            expect(result).to include(''fastlane/spec/fixtures/oclint/src/AppDelegate.m'')
        expect(result).not_to(include('Test'))
      end
    
              expect(result).to eq('SCRIPT_INPUT_FILE_COUNT=3 SCRIPT_INPUT_FILE_0=AppDelegate.swift SCRIPT_INPUT_FILE_1=path/to/project/src/Model.swift SCRIPT_INPUT_FILE_2=path/to/project/test/Test.swift swiftlint lint --use-script-input-files')
        end
      end
    
        os = 'windows'
    shelljoin_testcases.each do |testcase|
      it testcase['it'] + ': ' + testcase['it_result'][os] do
        array = testcase['input']
        expect_correct_implementation_to_be_called(array, :shelljoin, os)
        joined = array.shelljoin
        expect(joined).to eq(testcase['expect'][os])
      end
    end
  end
    
    if git.modified_files.include?('snapshot/lib/assets/SnapshotHelper.swift')
  warn('You modified `SnapshotHelper.swift`, make sure to update the version number at the bottom of the file to notify users about the new helper file.')
end
    
          # Fetches data from the GitHub API and yields a Page object for every page
      # of data, without loading all of them into memory.
      #
      # method - The Octokit method to use for getting the data.
      # args - Arguments to pass to the Octokit method.
      #
      # rubocop: disable GitlabSecurity/PublicSend
      def each_page(method, *args, &block)
        return to_enum(__method__, method, *args) unless block_given?
    
              if !matches || !matches[:type]
            raise(
              ArgumentError,
              'The note URL #{note.html_url.inspect} is not supported'
            )
          end
    
            # Builds a user from a GitHub API response.
        #
        # user - An instance of `Sawyer::Resource` containing the user details.
        def self.from_api_response(user)
          new(id: user.id, login: user.login)
        end
    
          def action_for_grape(env)
        endpoint = env[ENDPOINT_KEY]
        route = endpoint.route rescue nil
    
      it 'expands shell variables when given a single string argument' do
    lambda { @object.system('echo #{@shell_var}') }.should output_to_fd('foo\n')
  end
    
      it 'raises an ArgumentError if there is no catch block for the symbol' do
    lambda { throw :blah }.should raise_error(ArgumentError)
  end
    
        trace_var :$Kernel_trace_var_global do |value|
      captured = value
    end
    
          ruby_bug '#14846', '2.5'...'2.6' do
        it 'does not prepend caller information if line number is too big' do
          w = KernelSpecs::WarnInNestedCall.new
          -> { w.f4('foo', 100) }.should output(nil, 'warning: foo\n')
        end
      end
    
    script_binding = binding
    
      # body
  xml.tag!('body') do
    xml.tag!('outline', text: TITLE, title: TITLE) do
      blogs.each do |blog|
        xml.tag!('outline', type: 'rss', text: blog.name, title: blog.name,
          xmlUrl: blog.rss_url, htmlUrl: blog.web_url)
      end
    end
  end
end
    
    Then(/^the tasks folder is created$/) do
  path = TestApp.test_app_path.join('lib/capistrano/tasks')
  expect(Dir.exist?(path)).to be true
end
    
      def safely_remove_file(_path)
    run_vagrant_command('rm #{test_file}')
  rescue
    VagrantHelpers::VagrantSSHCommandError
  end
end
    
        private
    
          def primary
        self if fetch(:primary)
      end
    
          def set(key, value=nil, &block)
        @trusted_keys << key if trusted? && !@trusted_keys.include?(key)
        remember_location(key)
        values[key] = block || value
        trace_set(key)
        values[key]
      end
    
    %i(git_strategy hg_strategy svn_strategy).each do |strategy|
  validate(strategy) do |key, _value|
    warn(
      '[Deprecation Warning] #{key} is deprecated and will be removed in '\
      'Capistrano 3.7.0.\n'\
      'https://github.com/capistrano/capistrano/blob/master/UPGRADING-3.7.md'
    )
  end
end
    
      setup do
    @path = cloned_testpath('examples/revert.git')
    @wiki = Gollum::Wiki.new(@path)
    Precious::App.set(:gollum_path, @path)
    Precious::App.set(:wiki_options, {})
  end
    
      s.name              = 'gollum'
  s.version           = '4.1.4'
  s.date              = '2018-10-01'
  s.rubyforge_project = 'gollum'
  s.license           = 'MIT'