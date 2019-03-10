
        
        # Sample contents
WITHOUT_LIQUID = <<-TEXT.freeze
Lorem ipsum dolor sit amet, consectetur adipiscing elit. Fusce auctor libero at
pharetra tempus. Etiam bibendum magna et metus fermentum, eu cursus lorem
mattis. Curabitur vel dui et lacus rutrum suscipit et eget neque.
    
    # No trailing slash
Benchmark.ips do |x|
  x.report('with body include?') { CONTENT_CONTAINING.include?('<body') }
  x.report('with body regexp')   { CONTENT_CONTAINING =~ /<\s*body/ }
  x.compare!
end

    
      Jekyll::Command.subclasses.each { |c| c.init_with_program(p) }
    
    module Jekyll
  module Commands
    class NewTheme < Jekyll::Command
      class << self
        def init_with_program(prog)
          prog.command(:'new-theme') do |c|
            c.syntax 'new-theme NAME'
            c.description 'Creates a new Jekyll theme scaffold'
            c.option 'code_of_conduct', \
                     '-c', '--code-of-conduct', \
                     'Include a Code of Conduct. (defaults to false)'
    
          @launch_event_sent = true
      builder = AnalyticsEventBuilder.new(
        p_hash: launch_context.p_hash,
        session_id: session_id,
        action_name: nil,
        fastlane_client_language: launch_context.fastlane_client_language
      )
    
            show_github_issues(error_info) if should_show_github_issues
    
          context 'when specify log_path' do
        context 'when command is archive' do
          let(:command) { 'archive' }
          it '--log-path option is not present' do
            expect do
              Fastlane::FastFile.new.parse('lane :test do
                carthage(command: '#{command}', log_path: 'bla.log')
              end').runner.execute(:test)
            end.to raise_error('Log path option is available only for 'build', 'bootstrap', and 'update' command.')
          end
        end
    
          it 'Does not accept string if it does not contain comma' do
        expect do
          result = Fastlane::FastFile.new.parse('lane :test do
            changelog_from_git_commits(between: 'abcd1234')
          end').runner.execute(:test)
        end.to raise_error(':between must contain comma')
      end
    end
  end
end

    
          context 'without parameters' do
        it 'executes the correct git command' do
          allow(Fastlane::Actions).to receive(:sh).with('git add .', anything).and_return('')
          result = Fastlane::FastFile.new.parse('lane :test do
            git_add
          end').runner.execute(:test)
        end
      end
    
          it 'uses the correct command to import it' do
        # We have to execute *something* using ` since otherwise we set expectations to `nil`, which is not healthy
        `ls`
    
          def perform(start_id, stop_id)
        update = '
          latest_merge_request_diff_id = (
            SELECT MAX(id)
            FROM merge_request_diffs
            WHERE merge_requests.id = merge_request_diffs.merge_request_id
          )'.squish
    
            # issue - An instance of `Gitlab::GithubImport::Representation::Issue`
        # project - An instance of `Project`
        # client - An instance of `Gitlab::GithubImport::Client`
        def initialize(issue, project, client)
          @issue = issue
          @project = project
          @client = client
          @label_finder = LabelFinder.new(project)
        end
    
          # Associates the given database ID with the current object.
      #
      # database_id - The ID of the corresponding database row.
      def cache_database_id(database_id)
        Caching.write(cache_key, database_id)
      end
    
    module Gitlab
  module GithubImport
    module Representation
      class DiffNote
        include ToHash
        include ExposeAttribute
    
              user = Representation::User.from_api_response(note.user) if note.user
          hash = {
            noteable_type: noteable_type,
            noteable_id: matches[:iid].to_i,
            author: user,
            note: note.body,
            created_at: note.created_at,
            updated_at: note.updated_at,
            github_id: note.id
          }
    
            # Builds a user from a GitHub API response.
        #
        # user - An instance of `Sawyer::Resource` containing the user details.
        def self.from_api_response(user)
          new(id: user.id, login: user.login)
        end
    
            it 'does not leave a space at the start of negative numbers' do
          format('% b', -10).should == '-1010'
          format('% B', -10).should == '-1010'
          format('% d', -112).should == '-112'
          format('% i', -112).should == '-112'
          format('% o', -87).should == '-127'
          format('% u', -112).should == '-112'
          format('% x', -196).should == '-c4'
          format('% X', -196).should == '-C4'
    
      # String arguments should be evaluated in the context of the caller.
  it 'accepts a String argument instead of a Proc or block' do
    trace_var :$Kernel_trace_var_global, '$Kernel_trace_var_extra = true'
    
      # Do not eager load code on boot. This avoids loading your whole application
  # just for the purpose of running a single test. If you are using a tool that
  # preloads Rails for running tests, you may have to set it to true.
  config.eager_load = false
    
      #-- Rubocop ----------------------------------------------------------------#
    
    PROFILE_ERB_TEMPLATE = <<-EOS
(version 1)
(debug allow)
    
            private
    
    #{stack}
#{executable_path}
### Plugins
    
    Then(/^file symlinks are created in the new release$/) do
  TestApp.linked_files.each do |file|
    run_vagrant_command(test_symlink_exists(TestApp.current_path.join(file)))
  end
end
    
    World(RemoteCommandHelpers)

    
          def add_property(key, value)
        if respond_to?('#{key}=')
          send('#{key}=', value)
        else
          set(key, value)
        end
      end
    
          # Runs all validation rules registered for the given key against the
      # user-supplied value for that variable. If no validator raises an
      # exception, the value is assumed to be valid.
      def assert_valid_now(key, value)
        validators[key].each do |validator|
          validator.call(key, value)
        end
      end
    
    module Capistrano
  class Configuration
    # Holds the variables assigned at Capistrano runtime via `set` and retrieved
    # with `fetch`. Does internal bookkeeping to help identify user mistakes
    # like spelling errors or unused variables that may lead to unexpected
    # behavior.
    class Variables
      CAPISTRANO_LOCATION = File.expand_path('../..', __FILE__).freeze
      IGNORED_LOCATIONS = [
        '#{CAPISTRANO_LOCATION}/configuration/variables.rb:',
        '#{CAPISTRANO_LOCATION}/configuration.rb:',
        '#{CAPISTRANO_LOCATION}/dsl/env.rb:',
        '/dsl.rb:',
        '/forwardable.rb:'
      ].freeze
      private_constant :CAPISTRANO_LOCATION, :IGNORED_LOCATIONS
    
    desc 'Default: run unit tests.'
task :default => [:clean, :all]
    
        private
    
        # Returns the underscored, pluralized version of the class name.
    # e.g. 'users' for the User class.
    # NOTE: The arguments need to be optional, because some tools fetch
    # all class names. Calling #class will return the expected class.
    def class attachment = nil, style_name = nil
      return super() if attachment.nil? && style_name.nil?
      plural_cache.underscore_and_pluralize_class(attachment.instance.class)
    end
    
          # add entries to arguments.
      entries.each do |entry|
        unless(entry == '..' || entry == '.')
          args = args << entry
        end
      end
    
        if File.exists?(params[:output])
      # TODO(sissel): Allow folks to choose output?
      logger.error('Puppet module directory '#{params[:output]}' already ' \
                    'exists. Delete it or choose another output (-p flag)')
    end
    
      private