
        
          class BaseStore
    
          SiteSetting.enable_s3_uploads = true
      SiteSetting.s3_upload_bucket = 's3-upload-bucket'
      SiteSetting.s3_access_key_id = 'some key'
      SiteSetting.s3_secret_access_key = 'some secret key'
    
          if message_template
        # inform the user about the rejection
        message = Mail::Message.new(mail_string)
        template_args[:former_title] = message.subject
        template_args[:destination] = message.to
        template_args[:site_name] = SiteSetting.title
    
          type_supervisor.load_setting(
        name,
        opts.extract!(*SiteSettings::TypeSupervisor::CONSUMED_OPTS)
      )
    
        cookie = horde_login(username, password)
    fail_with(Failure::NoAccess, 'Unable to login. Verify USERNAME/PASSWORD or TARGETURI.') if cookie.nil? || cookie.empty?
    vprint_good('Authenticated to Horde.')
    
              # Encodes the data
          #
          # @return [OpenSSL::ASN1::OctetString]
          def encode_data(data)
            OpenSSL::ASN1::OctetString.new(data)
          end
        end
      end
    end
  end
end
    
    module Rack
  module Protection
    ##
    # Prevented attack::   XSS
    # Supported browsers:: all
    # More infos::         http://en.wikipedia.org/wiki/Cross-site_scripting
    #
    # Automatically escapes Rack::Request#params so they can be embedded in HTML
    # or JavaScript without any further issues. Calls +html_safe+ on the escaped
    # strings if defined, to avoid double-escaping in Rails.
    #
    # Options:
    # escape:: What escaping modes to use, should be Symbol or Array of Symbols.
    #          Available: :html (default), :javascript, :url
    class EscapedParams < Base
      extend Rack::Utils
    
      it 'should allow changing the protection settings' do
    mock_app do
      use Rack::Protection::ContentSecurityPolicy, :default_src => 'none', :script_src => 'https://cdn.mybank.net', :style_src => 'https://cdn.mybank.net', :img_src => 'https://cdn.mybank.net', :connect_src => 'https://api.mybank.com', :frame_src => 'self', :font_src => 'https://cdn.mybank.net', :object_src => 'https://cdn.mybank.net', :media_src => 'https://cdn.mybank.net', :report_uri => '/my_amazing_csp_report_parser', :sandbox => 'allow-scripts'
    
        it 'accepts chat channel invitation' do
      membership = ChatChannelMembership.last
      sign_in second_user
      put '/chat_channel_memberships/#{membership.id}', params: {
        chat_channel_membership: {
          user_action: 'accept'
        }
      }
      expect(ChatChannelMembership.find(membership.id).status).to eq('active')
    end
    
          it 'renders to appropriate page if user changes username twice' do
        old_username = user.username
        user.update(username: 'new_hotness_#{rand(10_000)}')
        user.update(username: 'new_new_username_#{rand(10_000)}')
        get '/#{old_username}/#{article.slug}'
        expect(response.body).to redirect_to('/#{user.username}/#{article.slug}')
      end
    
      context 'when redirected routes' do
    include RSpec::Rails::RequestExampleGroup
    
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
    
    # Make sure we're in the test dir, the tests expect that to be the current
# directory.
TEST_DIR  = File.join(File.dirname(__FILE__), *%w[.])
    
      def app
    Precious::App
  end
end
    
      base_path = wiki_options[:base_path]
    
        def render
      self.class.render_template(Tmuxinator::Config.template, binding)
    end
    
        def initialize(index, project, tab, *commands)
      @commands = commands
      @index = index
      @project = project
      @tab = tab
    end
    
      factory :project_with_force_detach, class: Tmuxinator::Project do
    transient do
      file { yaml_load('spec/fixtures/detach.yml') }
    end
    initialize_with { Tmuxinator::Project.new(file, force_detach: true) }
  end
    
      context 'hook value is string' do
    before { project.yaml[hook_name] = 'echo 'on hook'' }
    
        context 'pre in yaml is Array' do
      before do
        project.yaml['pre'] = [
          'mysql.server start',
          'memcached -d'
        ]
      end
    
      captured_stdout = StringIO.new
  captured_stderr = StringIO.new
    
        def doctor
      say 'Checking if tmux is installed ==> '
      yes_no Tmuxinator::Doctor.installed?