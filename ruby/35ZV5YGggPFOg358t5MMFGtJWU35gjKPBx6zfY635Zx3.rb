
        
        CONTENT_CONTAINING = <<-HTML.freeze
<!DOCTYPE HTML>
<html lang='en-US'>
  <head>
<meta http-equiv='Content-Type' content='text/html; charset=UTF-8'>
    <meta charset='UTF-8'>
    <title>Jemoji</title>
    <meta name='viewport' content='width=device-width,initial-scale=1'>
    <link rel='stylesheet' href='/css/screen.css'>
  </head>
  <body class='wrap'>
    <p><img class='emoji' title=':+1:' alt=':+1:' src='https://assets.github.com/images/icons/emoji/unicode/1f44d.png' height='20' width='20' align='absmiddle'></p>
    
      config.on_event :test_case_started do |event|
    f.print_feature_element_name(event.test_case)
    f.before_feature_element(event.test_case)
  end
    
              @websockets << websocket
        end
    
      protected
    
      # DELETE /resource/sign_out
  def destroy
    signed_out = (Devise.sign_out_all_scopes ? sign_out : sign_out(resource_name))
    set_flash_message! :notice, :signed_out if signed_out
    yield if block_given?
    respond_to_on_destroy
  end
    
          def remember_cookie_values(resource)
        options = { httponly: true }
        options.merge!(forget_cookie_values(resource))
        options.merge!(
          value: resource.class.serialize_into_cookie(resource),
          expires: resource.remember_expires_at
        )
      end
    
        unless env['devise.skip_trackable']
      warden.session(scope)['last_request_at'] = Time.now.utc.to_i
    end
  end
end

    
          def remember_me!
        self.remember_token ||= self.class.remember_token if respond_to?(:remember_token)
        self.remember_created_at ||= Time.now.utc
        save(validate: false) if self.changed?
      end
    
    team = ['Ryan Tomayko', 'Blake Mizerany', 'Simon Rozet', 'Konstantin Haase', 'Zachary Scott']
desc 'list of contributors'
task :thanks, ['release:all', :backports] do |t, a|
  a.with_defaults :release => '#{prev_version}..HEAD',
    :backports => '#{prev_feature}.0..#{prev_feature}.x'
  included = `git log --format=format:'%aN\t%s' #{a.release}`.lines.map { |l| l.force_encoding('binary') }
  excluded = `git log --format=format:'%aN\t%s' #{a.backports}`.lines.map { |l| l.force_encoding('binary') }
  commits  = (included - excluded).group_by { |c| c[/^[^\t]+/] }
  authors  = commits.keys.sort_by { |n| - commits[n].size } - team
  puts authors[0..-2].join(', ') << ' and ' << authors.last,
    '(based on commits included in #{a.release}, but not in #{a.backports})'
end
    
    desc 'generate gemspec'
task 'rack-protection.gemspec' do
  require 'rack/protection/version'
  content = File.binread 'rack-protection.gemspec'
    
      it 'should set the Content Security Policy' do
    expect(
      get('/', {}, 'wants' => 'text/html').headers['Content-Security-Policy']
    ).to eq('connect-src 'self'; default-src none; img-src 'self'; script-src 'self'; style-src 'self'')
  end
    
          def format
        @format = (@page.format || false) if @format.nil?
        @format.to_s.downcase
      end
    end
  end
end

    
          def noindex
        @version ? true : false
      end
    
        assert_match /Delete this Page/, last_response.body, ''Delete this Page' link is blocked in page template'
    assert_match /New/,              last_response.body, ''New' button is blocked in page template'
    assert_match /Upload/,           last_response.body, ''Upload' link is blocked in page template'
    assert_match /Rename/,           last_response.body, ''Rename' link is blocked in page template'
    assert_match /Edit/,             last_response.body, ''Edit' link is blocked in page template'
    
    #############################################################################
#
# Custom tasks (add your own tasks here)
#
#############################################################################
    
        # Remove all slashes from the start of string.
    # Remove all double slashes
    def clean_url url
      return url if url.nil?
      url.gsub('%2F', '/').gsub(/^\/+/, '').gsub('//', '/')
    end
    
      def self.assets_path
    ::File.expand_path('gollum/public', ::File.dirname(__FILE__))
  end
    
          def deliver(msg)
        if msg.respond_to?(:deliver_now)
          # Rails 4.2/5.0
          msg.deliver_now
        else
          # Rails 3.2/4.0/4.1
          msg.deliver
        end
      end
    end
    
          def jobs_by_worker
        @jobs_by_worker ||= Hash.new { |hash, key| hash[key] = [] }
      end
    
        class << self
      def settings
        self
      end
    
          if @_erb
        _erb(content, options[:locals])
      else
        @_erb = true
        content = _erb(content, options[:locals])