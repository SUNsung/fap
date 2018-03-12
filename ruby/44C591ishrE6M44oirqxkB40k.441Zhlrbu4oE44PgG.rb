
        
          test 'generate a new token after first has expired' do
    swap Devise, confirm_within: 3.days do
      user = create_user
      old = user.confirmation_token
      user.update_attribute(:confirmation_sent_at, 4.days.ago)
      user = User.find(user.id)
      user.resend_confirmation_instructions
      assert_not_equal user.confirmation_token, old
    end
  end
    
      def after_omniauth_failure_path_for(scope)
    new_session_path(scope)
  end
    
    class Devise::PasswordsController < DeviseController
  prepend_before_action :require_no_authentication
  # Render the #edit only if coming from a reset password email link
  append_before_action :assert_reset_token_passed, only: :edit
    
    2) You are testing a Devise controller bypassing the router.
   If so, you can explicitly tell Devise which mapping to use:
    
    require 'warden'
require 'devise/mapping'
require 'devise/models'
require 'devise/modules'
require 'devise/rails'

    
          unless root?
        raise Invalid, 'missing name' if !name || name.empty?
        raise Invalid, 'missing path' if !path || path.empty?
        raise Invalid, 'missing type' if !type || type.empty?
      end
    end
    
        private
    
            css('.note h3', '.warning h3').each do |node|
          node.before('<p><strong>#{node.inner_html}</strong></p>').remove
        end
    
            css('.function').each do |node|
          name = '#{node.at_css('.descname').content}()'
          id = node.at_css('dt[id]')['id']
          entries << [name, id]
        end
    
        context 'given no content-type header' do
      subject { Rack::Protection::Base.new(nil).html?({}) }
      it { is_expected.to be_falsey }
    end
  end
    
      it 'should not override the header if already set' do
    mock_app with_headers('X-XSS-Protection' => '0')
    expect(get('/', {}, 'wants' => 'text/html').headers['X-XSS-Protection']).to eq('0')
  end
    
    class SinatraStaticServer < Sinatra::Base
    
        def paragraphize(input)
      '<p>#{input.lstrip.rstrip.gsub(/\n\n/, '</p><p>').gsub(/\n/, '<br/>')}</p>'
    end
  end
end
    
        def render(context)
      if parts = @text.match(/([a-zA-Z\d]*) (.*)/)
        gist, file = parts[1].strip, parts[2].strip
      else
        gist, file = @text.strip, ''
      end
      if gist.empty?
        ''
      else
        script_url = script_url_for gist, file
        code       = get_cached_gist(gist, file) || get_gist_from_web(gist, file)
        html_output_for script_url, code
      end
    end