
        
        DOC_PATH = File.join(File.expand_path(__dir__), '_puppies', 'rover.md')
COL_PATH = File.join(File.expand_path(__dir__), '_puppies')
    
      config.on_event :test_run_finished do
    f.print_worst_offenders
  end
end

    
    def location(folder, direction)
  if folder
    before = folder if direction == 'in'
    after  = folder if direction == 'under'
  end
    
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
    
    module Jekyll
  module Commands
    class Serve
      # The LiveReload protocol requires the server to serve livereload.js over HTTP
      # despite the fact that the protocol itself uses WebSockets.  This custom connection
      # class addresses the dual protocols that the server needs to understand.
      class HttpAwareConnection < EventMachine::WebSocket::Connection
        attr_reader :reload_body, :reload_size
    
            lounge.topic_id = post.topic.id
        unless lounge.save
          puts lounge.errors.full_messages
          puts 'Failed to set the lounge description topic!'
        end
    
          it 'adds clean_output param to command' do
        result = Fastlane::FastFile.new.parse('lane :test do
          appledoc(
            project_name: 'Project Name',
            project_company: 'Company',
            input: 'input/dir',
            clean_output: true
          )
        end').runner.execute(:test)
    
          it 'works with name and password that contain spaces or `\'`' do
        password = '\'test password\''
        result = Fastlane::FastFile.new.parse('lane :test do
          create_keychain ({
            name: 'test.keychain',
            password: '#{password}',
          })
        end').runner.execute(:test)
    
          it 'shellescapes the exclude_dirs correctly' do
        directory = 'My Dir'
        result = Fastlane::FastFile.new.parse('lane :test do
          ensure_no_debug_code(text: 'pry', path: '.', exclude_dirs: ['#{directory}'])
        end').runner.execute(:test)
        expect(result).to eq('grep -RE 'pry' '#{File.absolute_path('./')}' --exclude-dir #{directory.shellescape}')
      end
    
          context 'when specify mode explicitly' do
        it 'uses lint mode as default' do
          result = Fastlane::FastFile.new.parse('lane :test do
            swiftlint
          end').runner.execute(:test)
    
        # An optional block which is called when options conflict happens
    attr_accessor :conflict_block
    
    # To avoid 'PR & Runs' for which tests don't pass, we want to make spec errors more visible
# The code below will run on Circle, parses the results in JSON and posts them to the PR as comment
containing_dir = ENV['CIRCLE_TEST_REPORTS'] || '.' # for local testing
file_path = File.join(containing_dir, 'rspec', 'fastlane-junit-results.xml')
    
        delegate :empty?, :blank?, to: :pages
    
        def error?
      code == 0 || code != 404 && code != 403 && code >= 400 && code <= 599
    end
    
        def format_url(url)
      url.to_s.remove %r{\Ahttps?://}
    end
    
            css('.c10', '.showcase', '.showcase-content', '.l-main-section', 'div.div', 'div[flex]', 'code-tabs', 'md-card', 'md-card-content', 'div:not([class])', 'footer', '.card-row', '.card-row-container', 'figure', 'blockquote', 'exported', 'defined', 'div.ng-scope', '.code-example header', 'section.desc', '.row', '.dart-api-entry-main', '.main-content', 'section.summary', 'span.signature').each do |node|
          node.before(node.children).remove
        end
    
            name = name.split(':').first
    
              node.before(node.children).remove
        end
    
        # we assume that the first file that requires 'sinatra' is the
    # app_file. all other path related options are calculated based
    # on this path by default.
    set :app_file, caller_files.first || $0
    
          def set_token(session)
        session[:csrf] ||= self.class.random_token
      end
    
          def self.default_reaction(reaction)
        alias_method(:default_reaction, reaction)
      end
    
          def session_key
        @session_key ||= options[:session_key]
      end
    end
  end
end

    
      it 'sets a new csrf token for the session in env, even after a 'safe' request' do
    get('/', {}, {})
    expect(env['rack.session'][:csrf]).not_to be_nil
  end
    
      def send_sinatra_file(path, &missing_file_block)
    file_path = File.join(File.dirname(__FILE__), 'public',  path)
    file_path = File.join(file_path, 'index.html') unless file_path =~ /\.[a-z]+$/i
    File.exist?(file_path) ? send_file(file_path) : missing_file_block.call
  end
    
    end

    
    module Jekyll
  class GistTag < Liquid::Tag
    def initialize(tag_name, text, token)
      super
      @text           = text
      @cache_disabled = false
      @cache_folder   = File.expand_path '../.gist-cache', File.dirname(__FILE__)
      FileUtils.mkdir_p @cache_folder
    end
    
    module OctopressFilters
  def self.pre_filter(page)
    if page.ext.match('html|textile|markdown|md|haml|slim|xml')
      input = BacktickCodeBlock::render_code_block(page.content)
      page.content = input.gsub /(<figure.+?>.+?<\/figure>)/m do
        TemplateWrapper::safe_wrap($1)
      end
    end
  end
  def self.post_filter(page)
    if page.ext.match('html|textile|markdown|md|haml|slim|xml')
      page.output = TemplateWrapper::unwrap(page.output)
    end
  end
    
        def initialize(tag_name, markup, tokens)
      @videos = markup.scan(/((https?:\/\/|\/)\S+\.(webm|ogv|mp4)\S*)/i).map(&:first).compact
      @poster = markup.scan(/((https?:\/\/|\/)\S+\.(png|gif|jpe?g)\S*)/i).map(&:first).compact.first
      @sizes  = markup.scan(/\s(\d\S+)/i).map(&:first).compact
      super
    end
    
    When /^(?:|I )check '([^']*)'$/ do |field|
  check(field)
end
    
      def migration_name
    'add_attachment_#{attachment_names.join('_')}_to_#{name.underscore.pluralize}'
  end