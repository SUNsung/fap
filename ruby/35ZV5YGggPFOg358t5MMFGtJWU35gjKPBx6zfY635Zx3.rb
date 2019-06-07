
        
                  def hidden_field
            hidden_name = @html_options[:name] || hidden_field_name
            @template_object.hidden_field_tag(hidden_name, '', id: nil)
          end
    
            class << self
          def field_type
            @field_type ||= name.split('::').last.sub('Field', '').downcase
          end
        end
    
      # Add groups and the proper project name to the output.
  project_name 'Homebrew'
  add_group 'Cask', %r{^/cask/}
  add_group 'Commands', [%r{/cmd/}, %r{^/dev-cmd/}]
  add_group 'Extensions', %r{^/extend/}
  add_group 'OS', [%r{^/extend/os/}, %r{^/os/}]
  add_group 'Requirements', %r{^/requirements/}
  add_group 'Scripts', [
    %r{^/brew.rb$},
    %r{^/build.rb$},
    %r{^/postinstall.rb$},
    %r{^/test.rb$},
  ]
end

    
      #
  # Parser Events
  #
    
    tmp = open(while_tmp, 'r')
test_ok(tmp.kind_of?(File))
    
        execute 'INSERT INTO share_visibilities (user_id, shareable_id, shareable_type) ' \
            'SELECT post_visibility.user_id, photos.id, 'Photo' FROM photos ' \
            'INNER JOIN posts ON posts.guid = photos.status_message_guid AND posts.type = 'StatusMessage' ' \
            'LEFT OUTER JOIN share_visibilities ON share_visibilities.shareable_id = photos.id ' \
            'INNER JOIN share_visibilities AS post_visibility ON post_visibility.shareable_id = posts.id ' \
            'WHERE photos.public = false AND share_visibilities.shareable_id IS NULL ' \
            'AND post_visibility.shareable_type = 'Post''
  end
    
      describe '#destroy' do
    let(:post) { FactoryGirl.create(:status_message) }
    
          it 'succeeds' do
        put :update, params: {id: 42, post_id: @status.id}, format: :js
        expect(response).to be_success
      end
    
    
    
    module Rack
  module Protection
    class Base
      DEFAULT_OPTIONS = {
        :reaction    => :default_reaction, :logging   => true,
        :message     => 'Forbidden',       :encryptor => Digest::SHA1,
        :session_key => 'rack.session',    :status    => 403,
        :allow_empty_referrer => true,
        :report_key           => 'protection.failed',
        :html_types           => %w[text/html application/xhtml text/xml application/xml]
      }
    
          DIRECTIVES = %i(base_uri child_src connect_src default_src
                      font_src form_action frame_ancestors frame_src
                      img_src manifest_src media_src object_src
                      plugin_types referrer reflected_xss report_to
                      report_uri require_sri_for sandbox script_src
                      style_src worker_src).freeze
    
          def initialize(*)
        super
    
      it 'accepts post requests with correct X-CSRF-Token header' do
    post('/', {}, 'rack.session' => session, 'HTTP_X_CSRF_TOKEN' => token)
    expect(last_response).to be_ok
  end
    
        it 'Returns nil when Referer header is invalid' do
      env = {'HTTP_HOST' => 'foo.com', 'HTTP_REFERER' => 'http://bar.com/bad|uri'}
      expect(subject.referrer(env)).to be_nil
    end
  end
end
