
        
                  if options['multiple']
            add_default_name_and_id_for_value(@checked_value, options)
            options.delete('multiple')
          else
            add_default_name_and_id(options)
          end
    
                options = options.dup
            options[:field_name]           = @method_name
            options[:include_position]     = true
            options[:prefix]             ||= @object_name
            options[:index]                = @auto_index if @auto_index && !options.has_key?(:index)
    
    module ActionView
  module Helpers
    module Tags # :nodoc:
      class TextField < Base # :nodoc:
        include Placeholderable
    
          it 'adds use-submodules flag to command if use_submodules is set to true' do
        result = Fastlane::FastFile.new.parse('lane :test do
            carthage(
              use_submodules: true
            )
          end').runner.execute(:test)
    
          it 'handles the extensions parameter with a single element correctly' do
        result = Fastlane::FastFile.new.parse('lane :test do
          ensure_no_debug_code(text: 'pry', path: '.', extensions: ['m'])
        end').runner.execute(:test)
        expect(result).to eq('grep -RE 'pry' '#{File.absolute_path('./')}' --include=\\*.m')
      end
    
          it 'works with select regex when regex is string' do
        result = Fastlane::FastFile.new.parse('lane :test do
            oclint(
              compile_commands: './fastlane/spec/fixtures/oclint/compile_commands.json',
              select_regex: \'\/AppDelegate\'
            )
          end').runner.execute(:test)
    
        def to_s
      [@key, @description].join(': ')
    end
    
        def url
      @url ||= URL.parse request.base_url
    end
    
        def initial_paths
      self.class.initial_paths
    end
    
        def process_url?(url)
      base_url.contains?(url)
    end
    
      def initialize(repo: 'twbs/bootstrap', branch: 'master', save_to: {}, cache_path: 'tmp/converter-cache-bootstrap')
    @logger     = Logger.new
    @repo       = repo
    @branch     = branch || 'master'
    @branch_sha = get_branch_sha
    @cache_path = cache_path
    @repo_url   = 'https://github.com/#@repo'
    @save_to    = {
        js:    'assets/javascripts/bootstrap',
        scss:  'assets/stylesheets/bootstrap',
        fonts: 'assets/fonts/bootstrap'}.merge(save_to)
  end
    
    When /^(?:|I )fill in '([^']*)' for '([^']*)'$/ do |value, field|
  fill_in(field, :with => value)
end
    
        def clear
      @attachments = Hash.new { |h,k| h[k] = {} }
    end
    
        # Returns a String describing the file's content type
    def detect
      if blank_name?
        SENSIBLE_DEFAULT
      elsif empty_file?
        EMPTY_TYPE
      elsif calculated_type_matches.any?
        calculated_type_matches.first
      else
        type_from_file_contents || SENSIBLE_DEFAULT
      end.to_s
    end
    
        # The aspect ratio of the dimensions.
    def aspect
      width / height
    end
    
        it 'accepts jsfiddle link with a / at the end' do
      jsfiddle_link = 'http://jsfiddle.net/link2twenty/v2kx9jcd/'
      expect do
        generate_new_liquid(jsfiddle_link)
      end.not_to raise_error
    end
    
      def redirect_to_with_return_to(url, *args)
    if params[:return_to].blank? || !params[:return_to].starts_with?('/')
      redirect_to url_with_return_to(url), *args
    else
      redirect_to url_with_return_to(url), *args
    end
  end
    
      def create
    if params[:direction] == 'incoming'
      session[:test_in_from] = params[:message][:from] if params[:message]
      @message = IncomingMessagePrototype.new(@server, request.ip, 'web-ui', params[:message])
      @message.attachments = [{:name => 'test.txt', :content_type => 'text/plain', :data => 'Hello world!'}]
    else
      session[:test_out_to] = params[:message][:to] if params[:message]
      @message = OutgoingMessagePrototype.new(@server, request.ip, 'web-ui', params[:message])
    end
    if result = @message.create_messages
      if result.size == 1
        redirect_to_with_json organization_server_message_path(organization, @server, result.first.last[:id]), :notice => 'Message was queued successfully'
      else
        redirect_to_with_json [:queue, organization, @server], :notice => 'Messages queued successfully '
      end
    else
      respond_to do |wants|
        wants.html do
          flash.now[:alert] = 'Your message could not be sent. Ensure that all fields are completed fully. #{result.errors.inspect}'
          render 'new'
        end
        wants.json do
          render :json => {:flash => {:alert => 'Your message could not be sent. Please check all field are completed fully.'}}
        end
      end
    
      private
    
      def create_with_token
    result = JWT.decode(params[:token], Postal.signing_key.to_s, 'HS256')[0]
    if result['timestamp'] > 1.minute.ago.to_f
      login(User.find(result['user'].to_i))
      redirect_to root_path
    else
      destroy
    end
  rescue JWT::VerificationError
    destroy
  end
    
      def new
    @smtp_endpoint = @server.smtp_endpoints.build
  end
    
          unless options[:other] == false
        s << '<optgroup label='Other Options'>'
        Route::MODES.each do |mode|
          next if mode == 'Endpoint'
          selected = (selected_value == mode ? 'selected='selected'' : '')
          text = t('route_modes.#{mode.underscore}')
          s << '<option value='#{mode}' #{selected}>#{text}</option>'
        end
        s << '</optgroup>'
      end
    
        def tmux_select_first_pane
      '#{project.tmux} select-pane -t #{tmux_window_target}.#{panes.first.index + project.pane_base_index}'
    end
    
      context 'hook value is string' do
    before { project.yaml[hook_name] = 'echo 'on hook'' }
    
        context 'tmux_command is not specified' do
      it 'returns the default' do
        expect(project.tmux_command).to eq 'tmux'
      end
    end
  end
    
      orig_stdout = $stdout
  orig_stderr = $stderr
    
          it 'returns default-path' do
        expect(described_class.default_path_option).to eq 'default-path'
      end
    end
  end