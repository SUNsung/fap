
        
              if message_template == :email_reject_old_destination
        template_args[:short_url] = e.message
        template_args[:number_of_days] = SiteSetting.disallow_reply_by_email_after_days
      end
    
          expect(ApplicationRequest.http_total.first.count).to eq(3)
      expect(ApplicationRequest.http_2xx.first.count).to eq(3)
    
        render_serialized(
      reviewable,
      reviewable.serializer,
      rest_serializer: true,
      claimed_topics: ReviewableClaimedTopic.claimed_hash([reviewable.topic_id]),
      root: 'reviewable',
      meta: {
        types: meta_types
      }
    )
  end
    
          expect(response.status).to eq(200)
    
        expect(posts.count).to eq(1)
    expect(posts.first['id']).to eq(post.id)
    
      attributes :id, :score, :agree_stats, :status, :reason, :created_at, :reviewed_at
  has_one :user, serializer: BasicUserSerializer, root: 'users'
  has_one :score_type, serializer: ReviewableScoreTypeSerializer
  has_one :reviewable_conversation, serializer: ReviewableConversationSerializer
  has_one :reviewed_by, serializer: BasicUserSerializer, root: 'users'
    
          # Extracts title from page if present.
      #
      def page_header_from_content(content)
        doc   = build_document(content)
        title = find_header_node(doc).inner_text.strip
        title = nil if title.empty?
        title
      end
    
        def self.setup(&block)
      define_method(:setup, &block)
    end
    
    context 'Precious::Views::LatestChanges' do
  include Rack::Test::Methods
  
  def app
    Precious::App
  end
  
  setup do
    @path = cloned_testpath('examples/lotr.git')
    @wiki = Gollum::Wiki.new(@path)
    Precious::App.set(:gollum_path, @path)
    Precious::App.set(:wiki_options, {:latest_changes_count => 10})
  end
    
      begin
    require 'gollum-lib'
    wiki = Gollum::Wiki.new(gollum_path, wiki_options)
    if !wiki.exist? then
      raise Gollum::InvalidGitRepositoryError
    end
    if wiki_options[:plantuml_url]
      Gollum::Filter::PlantUML.configure do |config|
        puts 'Using #{wiki_options[:plantuml_url]} as PlantUML endpoint'
        config.url = wiki_options[:plantuml_url]
      end
    end
    puts
    puts 'Loaded Gollum wiki at:'
    puts '#{File.expand_path(gollum_path).inspect}'
    puts
    puts 'Example API calls:'
    puts %(    page = wiki.page('page-name'))
    puts %(    # => <Gollum::Page>)
    puts
    puts %(    page.raw_data)
    puts %(    # => '# My wiki page')
    puts
    puts %(    page.formatted_data)
    puts %(    # => '<h1>My wiki page</h1>')
    puts
    puts 'Full API documentation at:'
    puts 'https://github.com/gollum/gollum-lib'
    puts
    IRB.start_session(binding)
  rescue Gollum::InvalidGitRepositoryError, Gollum::NoSuchPathError
    puts 'Invalid Gollum wiki at #{File.expand_path(gollum_path).inspect}'
    exit 0
  end
else
  require 'gollum/app'
  Precious::App.set(:gollum_path, gollum_path)
  Precious::App.set(:wiki_options, wiki_options)
  Precious::App.settings.mustache[:templates] = wiki_options[:template_dir] if wiki_options[:template_dir]
    
      describe 'POST blocks' do
    it 'creates block from input data' do
      post '/blocks', params: {
        block: {
          input_css: '.blue { color: blue;}',
          input_html: 'yo',
          input_javascript: 'alert('hey')'
        }
      }
      expect(Block.all.size).to eq(1)
    end
  end
    
    Gem::Specification.new do |s|
  s.name          = 'tmuxinator'
  s.version       = Tmuxinator::VERSION
  s.authors       = ['Allen Bargi', 'Christopher Chow']
  s.email         = ['allen.bargi@gmail.com', 'chris@chowie.net']
  s.description   = %q{Create and manage complex tmux sessions easily.}
  s.summary       = %q{Create and manage complex tmux sessions easily.}
  s.homepage      = 'https://github.com/tmuxinator/tmuxinator'
  s.license       = 'MIT'
    
      describe '#hook_on_project_start' do
    it_should_behave_like 'a project hook' do
      let(:hook_name) { 'on_project_start' }
    end
  end
  describe '#hook_on_project_first_start' do
    it_should_behave_like 'a project hook' do
      let(:hook_name) { 'on_project_first_start' }
    end
  end
  describe '#hook_on_project_restart' do
    it_should_behave_like 'a project hook' do
      let(:hook_name) { 'on_project_restart' }
    end
  end
  describe '#hook_on_project_exit' do
    it_should_behave_like 'a project hook' do
      let(:hook_name) { 'on_project_exit' }
    end
  end
  describe '#hook_on_project_stop' do
    it_should_behave_like 'a project hook' do
      let(:hook_name) { 'on_project_stop' }
    end
  end
end

    
        # For future reference: due to how tmuxinator currently consumes
    # command-line arguments (see ::bootstrap, below), invocations of Thor's
    # base commands (i.e. 'help', etc) can be instead routed to #start (rather
    # than to ::start).  In order to prevent this, the THOR_COMMANDS and
    # RESERVED_COMMANDS constants have been introduced. The former enumerates
    # any/all Thor commands we want to insure get passed through to Thor.start.
    # The latter is the superset of the Thor commands and any tmuxinator
    # commands, defined in COMMANDS, above.
    THOR_COMMANDS = %w[-v help].freeze
    RESERVED_COMMANDS = (COMMANDS.keys + THOR_COMMANDS).map(&:to_s).freeze
    
          def default_path_option
        version && version < 1.8 ? 'default-path' : '-c'
      end
    
          it 'returns true' do
        expect(described_class.editor?).to be_truthy
      end
    end