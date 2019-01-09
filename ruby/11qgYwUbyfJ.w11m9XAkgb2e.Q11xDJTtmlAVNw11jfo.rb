
        
              path_to_use = FastlaneCore::FastlaneFolder.path || Dir.pwd
      parameters ||= {}
      begin
        Dir.chdir(path_to_use) do # the file is located in the fastlane folder
          execute_flow_block(before_all_blocks, current_platform, current_lane, parameters)
          execute_flow_block(before_each_blocks, current_platform, current_lane, parameters)
    
            expect(result).to eq('appledoc --project-name \'Project Name\' --project-company \'Company\' --docset-package-url \'http://docset-package-url.com\' --exit-threshold \'2\' input/dir')
      end
    
            expect(result).to eq('carthage update')
      end
    
            inner_command = 'git describe --tags `git rev-list --tags --max-count=1`'
        pseudocommand = 'git log --pretty=\'%B\' #{inner_command.shellescape}...HEAD --no-merges'
        expect(result).to eq(pseudocommand)
      end
    
            context 'with given path to oclint' do
          let(:result) do
            Fastlane::FastFile.new.parse('lane :test do
              oclint(
                compile_commands: './fastlane/spec/fixtures/oclint/compile_commands.json',
                oclint_path: 'test/bin/oclint'
              )
            end').runner.execute(:test)
          end
          let(:command) { 'cd #{File.expand_path('.').shellescape} && test/bin/oclint -report-type=html -o=oclint_report.html' }
    
            it 'supports lint mode option' do
          result = Fastlane::FastFile.new.parse('lane :test do
            swiftlint(
              mode: :lint
            )
          end').runner.execute(:test)
    
        # Make sure, the value is valid (based on the verify block)
    # Raises an exception if the value is invalid
    def valid?(value)
      # we also allow nil values, which do not have to be verified.
      return true if value.nil?
    
    # The * turns the array into a parameter list
# This is using the form of exec which takes a variable parameter list, e.g. `exec(command, param1, param2, ...)`
# We need to use that, because otherwise invocations like
# `spaceauth -u user@fastlane.tools` would recognize '-u user@fastlane.tools' as a single parameter and throw errors
exec(*exec_arr)

    
          def perform(start_id, stop_id)
        update = '
          latest_merge_request_diff_id = (
            SELECT MAX(id)
            FROM merge_request_diffs
            WHERE merge_requests.id = merge_request_diffs.merge_request_id
          )'.squish
    
          # Sets the expiration time of a key.
      #
      # raw_key - The key for which to change the timeout.
      # timeout - The new timeout.
      def self.expire(raw_key, timeout)
        key = cache_key_for(raw_key)
    
            def id_for_already_imported_cache(note)
          note.id
        end
      end
    end
  end
end

    
          # Imports all the objects in sequence in the current thread.
      def sequential_import
        each_object_to_import do |object|
          repr = representation_class.from_api_response(object)
    
              hash[:state] = hash[:state].to_sym
          hash[:assignees].map! { |u| Representation::User.from_json_hash(u) }
          hash[:author] &&= Representation::User.from_json_hash(hash[:author])
    
            # attributes - A Hash containing the raw lfs_object details. The keys of this
        #              Hash must be Symbols.
        def initialize(attributes)
          @attributes = attributes
        end
      end
    end
  end
end

    
        # we assume that the first file that requires 'sinatra' is the
    # app_file. all other path related options are calculated based
    # on this path by default.
    set :app_file, caller_files.first || $0
    
      table td.code       {width:750px}
  table td.code div   {width:750px;overflow:hidden}
</style>
</head>
<body>
  <div id='wrap'>
    <div id='header'>
      <img src='<%= env['SCRIPT_NAME'] %>/__sinatra__/500.png' alt='application error' height='161' width='313' />
      <div id='summary'>
        <h1><strong><%=h exception.class %></strong> at <strong><%=h path %>
          </strong></h1>
        <h2><%=h exception.message %></h2>
        <ul>
          <li class='first'><strong>file:</strong> <code>
            <%=h frames.first.filename.split('/').last %></code></li>
          <li><strong>location:</strong> <code><%=h frames.first.function %>
            </code></li>
          <li class='last'><strong>line:
            </strong> <%=h frames.first.lineno %></li>
        </ul>
      </div>
      <div class='clear'></div>
    </div>
    
    module Rack
  module Protection
    ##
    # Prevented attack::   CSRF
    # Supported browsers:: all
    # More infos::         http://flask.pocoo.org/docs/0.10/security/#json-security
    #                      http://haacked.com/archive/2008/11/20/anatomy-of-a-subtle-json-vulnerability.aspx
    #
    # JSON GET APIs are vulnerable to being embedded as JavaScript when the
    # Array prototype has been patched to track data. Checks the referrer
    # even on GET requests if the content type is JSON.
    #
    # If request includes Origin HTTP header, defers to HttpOrigin to determine
    # if the request is safe. Please refer to the documentation for more info.
    #
    # The `:allow_if` option can be set to a proc to use custom allow/deny logic.
    class JsonCsrf < Base
      default_options :allow_if => nil
    
    __END__
    
        def normalize_item(item)
      raise(ArgumentError, 'Job must be a Hash with 'class' and 'args' keys: { 'class' => SomeWorker, 'args' => ['bob', 1, :foo => 'bar'] }') unless item.is_a?(Hash) && item.has_key?('class') && item.has_key?('args')
      raise(ArgumentError, 'Job args must be an Array') unless item['args'].is_a?(Array)
      raise(ArgumentError, 'Job class must be either a Class or String representation of the class name') unless item['class'].is_a?(Class) || item['class'].is_a?(String)
      raise(ArgumentError, 'Job 'at' must be a Numeric timestamp') if item.has_key?('at') && !item['at'].is_a?(Numeric)
      #raise(ArgumentError, 'Arguments must be native JSON types, see https://github.com/mperham/sidekiq/wiki/Best-Practices') unless JSON.load(JSON.dump(item['args'])) == item['args']
    
            # Need to patch Psych so it can autoload classes whose names are serialized
        # in the delayed YAML.
        Psych::Visitors::ToRuby.prepend(Sidekiq::Extensions::PsychAutoload)
    
          def remove(klass)
        entries.delete_if { |entry| entry.klass == klass }
      end
    
      # Default to fake testing to keep old behavior
  Sidekiq::Testing.fake!