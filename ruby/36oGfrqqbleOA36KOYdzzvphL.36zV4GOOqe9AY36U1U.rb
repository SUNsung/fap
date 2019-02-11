
        
              # token - The GitHub API token to use.
      #
      # per_page - The number of objects that should be displayed per page.
      #
      # parallel - When set to true hitting the rate limit will result in a
      #            dedicated error being raised. When set to `false` we will
      #            instead just `sleep()` until the rate limit is reset. Setting
      #            this value to `true` for parallel importing is crucial as
      #            otherwise hitting the rate limit will result in a thread
      #            being blocked in a `sleep()` call for up to an hour.
      def initialize(token, per_page: 100, parallel: true)
        @octokit = Octokit::Client.new(
          access_token: token,
          per_page: per_page,
          api_endpoint: api_endpoint
        )
    
            def importer_class
          NoteImporter
        end
    
              noteable_type =
            if matches[:type] == 'pull'
              'MergeRequest'
            else
              'Issue'
            end
    
            if controller.content_type == 'text/html'
          action
        else
          '#{action} (#{controller.content_type})'
        end
      end
    
        it 'allows to delete a user' do
      visit admin_users_path
      find(:css, 'a[href='/admin/users/#{users(:bob).id}']').click
      expect(page).to have_text('User 'bob' was deleted.')
      expect(page).to have_no_text('bob@example.com')
    end
    
          open_dry_run_modal(agent)
      find('.dry-run-event-sample').click
      within(:css, '.modal .builder') do
        expect(page).to have_text('http://xkcd.com/')
      end
      click_on('Dry Run')
      expect(page).to have_text('Biologists play reverse')
      expect(page).to have_selector(:css, 'li[role='presentation'].active a[href='#tabEvents']')
    end
    
        it 'defauls foreground and background colors' do
      scenario.tag_fg_color = nil
      scenario.tag_bg_color = nil
      expect(style_colors(scenario)).to eq('color:#FFFFFF;background-color:#5BC0DE')
    end
  end
    
    describe DefaultScenarioImporter do
  let(:user) { users(:bob) }
  describe '.import' do
    it 'imports a set of agents to get the user going when they are first created' do
      mock(DefaultScenarioImporter).seed(is_a(User))
      stub.proxy(ENV).[](anything)
      stub(ENV).[]('IMPORT_DEFAULT_SCENARIO_FOR_ALL_USERS') { 'true' }
      DefaultScenarioImporter.import(user)
    end
    
      describe 'migrating the 'make_message' format' do
    it 'should work' do
      expect(LiquidMigrator.convert_make_message('<message>')).to eq('{{message}}')
      expect(LiquidMigrator.convert_make_message('<new.message>')).to eq('{{new.message}}')
      expect(LiquidMigrator.convert_make_message('Hello <world>. How is <nested.life>')).to eq('Hello {{world}}. How is {{nested.life}}')
    end
  end
    
      describe 'helpers' do
    it 'should generate a correct request options hash' do
      expect(@checker.send(:request_options)).to eq({headers: {'User-Agent' => 'Huginn - https://github.com/huginn/huginn', 'Authorization' => 'Bearer '1234token''}})
    end
    
        alias log puts
    
      def setup
    tmp_dir = File.join GEM_PATH, 'tmp/node-mincer'
    success = Dir.chdir DUMMY_PATH do
      silence_stdout_if !ENV['VERBOSE'] do
        system 'node', 'manifest.js', tmp_dir
      end
    end
    assert success, 'Node.js Mincer compilation failed'
    manifest = JSON.parse(File.read('#{tmp_dir}/manifest.json'))
    css_name = manifest['assets']['application.css']
    @css = File.read('#{tmp_dir}/#{css_name}')
  end
end

    
          private
    
          def warn_set_scm_is_deprecated
        $stderr.puts(<<-MESSAGE)
[Deprecation Notice] `set :scm, #{scm_name.inspect}` is deprecated.
To ensure your project is compatible with future versions of Capistrano,
remove the :scm setting and instead add these lines to your Capfile after
`require 'capistrano/deploy'`:
    
    %i(git_strategy hg_strategy svn_strategy).each do |strategy|
  validate(strategy) do |key, _value|
    warn(
      '[Deprecation Warning] #{key} is deprecated and will be removed in '\
      'Capistrano 3.7.0.\n'\
      'https://github.com/capistrano/capistrano/blob/master/UPGRADING-3.7.md'
    )
  end
end
    
      test 'urls transform unicode' do
    header  = '_Header'
    footer  = '_Footer'
    sidebar = '_Sidebar'
    
    context 'Unicode Support' do
  setup do
    @path = cloned_testpath('examples/revert.git')
    @wiki = Gollum::Wiki.new(@path)
  end
    
        # Extract the path string that Gollum::Wiki expects
    def extract_path(file_path)
      return nil if file_path.nil?
      last_slash = file_path.rindex('/')
      if last_slash
        file_path[0, last_slash]
      end
    end
    
          unless described_class ==
             RuboCop::Cop::Layout::MultilineMethodDefinitionBraceLayout
        context 'with a chained call on the closing brace' do
          let(:suffix) { '.any?' }
          let(:source) { construct(false, true) }