
        
          describe '.create' do
    it 'creates a key with the client' do
      expected_service_configs = {
        'U27F4V844T' => [],
        'DQ8HTZ7739' => [],
        '6A7HVUVQ3M' => ['some-music-id']
      }
      mock_client_response(:create_key!, with: { name: 'New Key', service_configs: expected_service_configs }) do
        {
          keyId: 'a-new-key-id'
        }
      end
    
          it 'renders HTML' do
        capture = render(options, screenshots)
        expect(capture).to match(/<html>/)
        expect(capture).to include('<li>Some</li>')
        expect(capture).to include('<li>key</li>')
        expect(capture).to include('<li>words</li>')
      end
    end
    
          private
    
            expect(result).to eq('git svn info | grep Revision | egrep -o '[0-9]+'')
        expect(Fastlane::Actions.lane_context[Fastlane::Actions::SharedValues::BUILD_NUMBER_REPOSITORY]).to eq('git svn info | grep Revision | egrep -o '[0-9]+'')
      end
    end
    
      def failure_message
    exception = request.respond_to?(:get_header) ? request.get_header('omniauth.error') : request.env['omniauth.error']
    error   = exception.error_reason if exception.respond_to?(:error_reason)
    error ||= exception.error        if exception.respond_to?(:error)
    error ||= (request.respond_to?(:get_header) ? request.get_header('omniauth.error.type') : request.env['omniauth.error.type']).to_s
    error.to_s.humanize if error
  end
    
    source 'https://rubygems.org'
    
    # Each time a record is set we check whether its session has already timed out
# or not, based on last request time. If so, the record is logged out and
# redirected to the sign in page. Also, each time the request comes and the
# record is set, we set the last request time inside its scoped session to
# verify timeout in the following request.
Warden::Manager.after_set_user do |record, warden, options|
  scope = options[:scope]
  env   = warden.request.env
    
    BASE_URI = ENV['BASE_URI'] || 'https://github.com/jondot/awesome-react-native'
    
    ## -- Rsync Deploy config -- ##
# Be sure your public key is listed in your server's ~/.ssh/authorized_keys file
ssh_user       = 'user@domain.com'
ssh_port       = '22'
document_root  = '~/website.com/'
rsync_delete   = false
rsync_args     = ''  # Any extra arguments to pass to rsync
deploy_default = 'rsync'
    
      # The Site class is a built-in Jekyll class with access to global site config information.
  class Site
    
        def get_gist_from_web(gist, file)
      gist_url = get_gist_url_for(gist, file)
      data     = get_web_content(gist_url)
    
      class IncludeCodeTag < Liquid::Tag
    def initialize(tag_name, markup, tokens)
      @title = nil
      @file = nil
      if markup.strip =~ /\s*lang:(\S+)/i
        @filetype = $1
        markup = markup.strip.sub(/lang:\S+/i,'')
      end
      if markup.strip =~ /(.*)?(\s+|^)(\/*\S+)/i
        @title = $1 || nil
        @file = $3
      end
      super
    end
    
      context 'expands plain buttons' do
    it 'finds selectors' do
      list = @buttons_list.join(', ')
      ruleset = 'content: #{list};'
    
    describe 'size' do
  before(:all) do
    ParserSupport.parse_file('library/size')
  end
    
      context 'expands active text inputs' do
    it 'finds selectors' do
      list = @inputs_list.map { |input| '#{input}:active' }
      list = list.join(', ')
      ruleset = 'content: #{list};'