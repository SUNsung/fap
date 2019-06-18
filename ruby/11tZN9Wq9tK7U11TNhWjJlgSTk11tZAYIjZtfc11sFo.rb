
        
                # issue - An instance of `Gitlab::GithubImport::Representation::Issue`
        # project - An instance of `Project`
        # client - An instance of `Gitlab::GithubImport::Client`
        def initialize(issue, project, client)
          @issue = issue
          @project = project
          @client = client
          @label_finder = LabelFinder.new(project)
        end
    
          # Imports all the objects in sequence in the current thread.
      def sequential_import
        each_object_to_import do |object|
          repr = representation_class.from_api_response(object)
    
      # The default layout used by the appenders.
  pattern = '[%d] %-5l PID-%p TID-%t %c: %m\n'
  layout = Logging.layouts.pattern(pattern: pattern)
    
      failure_message_for_should do |actual|
    'expected #{actual.inspect} to have path in #{expected.inspect} but was #{actual.current_path.inspect}'
  end
  failure_message_for_should_not do |actual|
    'expected #{actual.inspect} to not have path in #{expected.inspect} but it had'
  end
end
    
      class FetchWebfinger < Base
    def perform(*_args)
      # don't do real discovery in cucumber
    end
  end
end

    
          get :index, params: {a_id: @aspect.id, page: '1'}, format: :json
      save_fixture(response.body, 'aspects_manage_contacts_json')
    end
    
          def extract_renamed_path_destination(file)
        return file.gsub(/{.* => (.*)}/, '\1').gsub(/.* => (.*)/, '\1')
      end
    
        get '/pages'
    
      test 'displays_latest_changes' do
    get('/latest_changes')
    body = last_response.body
    
      def app
    Precious::App
  end
end
    
          def stop_template
        asset_path 'template-stop.erb'
      end
    
          it 'should load and validate the project' do
        project_config = File.join(fixtures_dir, 'sample.yml')
        expect(described_class.validate(project_config: project_config)).to \
          be_a Tmuxinator::Project
      end
    
      describe '.shell?' do
    context '$SHELL is set' do
      before do
        allow(ENV).to receive(:[]).with('SHELL') { 'vim' }
      end
    
        def list
      say 'tmuxinator projects:'
      if options[:newline]
        say Tmuxinator::Config.configs.join('\n')
      else
        print_in_columns Tmuxinator::Config.configs
      end
    end