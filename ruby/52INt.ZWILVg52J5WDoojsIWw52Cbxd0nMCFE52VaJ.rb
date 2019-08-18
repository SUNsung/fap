
        
          # ==> Configuration for :encryptable
  # Allow you to use another hashing or encryption algorithm besides bcrypt (default).
  # You can use :sha1, :sha512 or algorithms from others authentication tools as
  # :clearance_sha1, :authlogic_sha512 (then you should set stretches above to 20
  # for default behavior) and :restful_authentication_sha1 (then you should set
  # stretches to 10, and copy REST_AUTH_SITE_KEY to pepper).
  #
  # Require the `devise-encryptable` gem when using anything other than bcrypt
  # config.encryptor = :sha512
    
      test 'Devise.email_regexp should match valid email addresses' do
    valid_emails = ['test@example.com', 'jo@jo.co', 'f4$_m@you.com', 'testing.example@example.com.ua', 'test@tt', 'test@valid---domain.com']
    non_valid_emails = ['rex', 'test user@example.com', 'test_user@example server.com']
    
      # POST /resource/confirmation
  def create
    self.resource = resource_class.send_confirmation_instructions(resource_params)
    yield resource if block_given?
    
        if resource.errors.empty?
      set_flash_message! :notice, :unlocked
      respond_with_navigational(resource){ redirect_to after_unlock_path_for(resource) }
    else
      respond_with_navigational(resource.errors, status: :unprocessable_entity){ render :new }
    end
  end
    
      # Sets the resource creating an instance variable
  def resource=(new_resource)
    instance_variable_set(:'@#{resource_name}', new_resource)
  end
    
        def unlock_instructions(record, token, opts={})
      @token = token
      devise_mail(record, :unlock_instructions, opts)
    end
    
    class ApplicationController < ActionController::Base
end
    
          default_failure_app(options)
      default_controllers(options)
      default_path_names(options)
      default_used_route(options)
      default_used_helpers(options)
    end
    
    def source_version
  @source_version ||= File.read(File.expand_path('../VERSION', __FILE__)).strip
end
    
    @@ chat
<pre id='chat'></pre>
<form>
  <input id='msg' placeholder='type message here...' />
</form>
    
      File.open('rack-protection.gemspec', 'w') { |f| f << content }
end
    
          def accepts?(env)
        cookie_header = env['HTTP_COOKIE']
        cookies = Rack::Utils.parse_query(cookie_header, ';,') { |s| s }
        cookies.each do |k, v|
          if k == session_key && Array(v).size > 1
            bad_cookies << k
          elsif k != session_key && Rack::Utils.unescape(k) == session_key
            bad_cookies << k
          end
        end
        bad_cookies.empty?
      end
    
        BUNDLE_DIR = ::File.join(LOGSTASH_HOME, 'vendor', 'bundle')
    GEMFILE_PATH = ::File.join(LOGSTASH_HOME, 'Gemfile')
    LOCAL_GEM_PATH = ::File.join(LOGSTASH_HOME, 'vendor', 'local_gems')
    CACHE_PATH = ::File.join(LOGSTASH_HOME, 'vendor', 'cache')
    LOCKFILE = Pathname.new(::File.join(LOGSTASH_HOME, 'Gemfile.lock'))
    GEMFILE = Pathname.new(::File.join(LOGSTASH_HOME, 'Gemfile'))
    
        def locales_path(path)
      return ::File.join(LOGSTASH_CORE, 'locales', path)
    end
    
      desc 'Build a tar.gz of all logstash plugins from logstash-plugins github repo'
  task 'tar-all-plugins' => ['prepare-all', 'generate_build_metadata'] do
    puts('[artifact:tar] Building tar.gz of all plugins')
    build_tar('ELASTIC-LICENSE', '-all-plugins')
  end
    
          # Handle string rvalues, they just get turned into regexps
      # Maybe we really shouldn't handle these anymore...
      if regexp.class == org.logstash.config.ir.expression.ValueExpression
        regexp = jdsl.eRegex(source_meta, regexp.get)
      end
    
          def pack_uri(plugin_name)
        url = '#{elastic_pack_base_uri}/#{plugin_name}/#{plugin_name}-#{LOGSTASH_VERSION}.#{PACK_EXTENSION}'
        URI.parse(url)
      end
    
        not_same_pipeline_id = described_class.new(source, :another_pipeline, unordered_config_parts, settings)
    expect(subject).not_to eq(not_same_pipeline_id)
  end
    
          def header
        if @header.nil?
          if page = @page.header
            @header = page.text_data
          else
            @header = false
          end
        end
        @header
      end
    
          def _identicon_code(blob)
        string_to_code blob + @request.host
      end
    
          def date
        first = page.last_version
        return Time.now.strftime(DATE_FORMAT) unless first
        first.authored_date.strftime(DATE_FORMAT)
      end
    
      test 'create redirects to page if already exists' do
    name = 'A'
    get '/create/#{name}'
    follow_redirect!
    assert_equal '/#{name}', last_request.fullpath
    assert last_response.ok?
  end
    
      test 'clean path with leading slash' do
    assert_equal '/Mordor', clean_path('/Mordor')
  end
    
        assert body.include?('<span class='username'>Charles Pence</span>'), '/latest_changes should include the Author Charles Pence'
    assert body.include?('a8ad3c0'), '/latest_changes should include the :latest_changes_count commit'
    assert !body.include?('60f12f4'), '/latest_changes should not include more than latest_changes_count commits'
    assert body.include?('<a href='Data-Two.csv/874f597a5659b4c3b153674ea04e406ff393975e'>Data-Two.csv</a>'), '/latest_changes include links to modified files in #{body}'
    assert body.include?('<a href='Hobbit/874f597a5659b4c3b153674ea04e406ff393975e'>Hobbit.md</a>'), '/latest_changes should include links to modified pages in #{body}'
  end
    
        @view = Precious::Views::Page.new
    @view.instance_variable_set :@page, page
    @view.instance_variable_set :@content, page.formatted_data
    @view.instance_variable_set :@h1_title, false
    
    module Gollum
  VERSION = '4.1.4'
    
      if defined?(Gollum::GIT_ADAPTER) && Gollum::GIT_ADAPTER != 'grit'
    def to_ascii
      self # Do not transliterate utf-8 url's unless using Grit
    end
  end
    
    describe Sidekiq::ExceptionHandler do
  describe 'with mock logger' do
    before do
      @old_logger = Sidekiq.logger
      @str_logger = StringIO.new
      Sidekiq.logger = Logger.new(@str_logger)
    end
    
      it 'does not support invalid concurrency' do
    assert_raises(ArgumentError) { new_manager(concurrency: 0) }
    assert_raises(ArgumentError) { new_manager(concurrency: -1) }
  end
    
        def last?
      index == tab.panes.length - 1
    end
    
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
